const http = require("http");

const HOST = "127.0.0.1";
const PORT = 8787;
const REQUEST_TIMEOUT_MS = 10000;
const SNAPSHOT_TIMEOUT_MS = 12000;
const MAX_SNAPSHOT_BYTES = 1024 * 1024 * 3;

function sendCors(response) {
    response.setHeader("Access-Control-Allow-Origin", "*");
    response.setHeader("Access-Control-Allow-Methods", "GET, OPTIONS");
    response.setHeader("Access-Control-Allow-Headers", "Content-Type");
}

function sendJson(response, status, payload) {
    sendCors(response);
    response.writeHead(status, { "Content-Type": "application/json; charset=utf-8" });
    response.end(JSON.stringify(payload));
}

function isAllowedCaptureUrl(value) {
    try {
        const url = new URL(value);
        return url.protocol === "http:" && /^192\.168\.\d{1,3}\.\d{1,3}$/.test(url.hostname);
    } catch {
        return false;
    }
}

async function fetchWithTimeout(url) {
    const controller = new AbortController();
    const timeout = setTimeout(() => controller.abort(), REQUEST_TIMEOUT_MS);

    try {
        return await fetch(url, {
            cache: "no-store",
            signal: controller.signal
        });
    } finally {
        clearTimeout(timeout);
    }
}

function findJpegEnd(buffer) {
    for (let index = 2; index < buffer.length - 1; index += 1) {
        if (buffer[index] === 0xff && buffer[index + 1] === 0xd9) {
            return index + 2;
        }
    }

    return -1;
}

async function readFirstJpegFrame(response) {
    const reader = response.body?.getReader();
    if (!reader) {
        throw new Error("Flux illisible");
    }

    const startedAt = Date.now();
    let buffer = Buffer.alloc(0);

    while (Date.now() - startedAt < SNAPSHOT_TIMEOUT_MS) {
        const { done, value } = await reader.read();
        if (done) {
            break;
        }

        buffer = Buffer.concat([buffer, Buffer.from(value)]);
        if (buffer.length > MAX_SNAPSHOT_BYTES) {
            throw new Error("Frame introuvable");
        }

        const start = buffer.indexOf(Buffer.from([0xff, 0xd8]));
        if (start !== -1) {
            const end = findJpegEnd(buffer.subarray(start));
            if (end !== -1) {
                await reader.cancel();
                return buffer.subarray(start, start + end);
            }
        }
    }

    await reader.cancel().catch(() => {});
    throw new Error("Frame introuvable");
}

const server = http.createServer(async (request, response) => {
    sendCors(response);

    if (request.method === "OPTIONS") {
        response.writeHead(204);
        response.end();
        return;
    }

    const requestUrl = new URL(request.url, `http://${request.headers.host}`);

    if (requestUrl.pathname === "/health") {
        sendJson(response, 200, { ok: true });
        return;
    }

    if (requestUrl.pathname !== "/capture" && requestUrl.pathname !== "/snapshot") {
        sendJson(response, 404, { error: "Route inconnue" });
        return;
    }

    const target = requestUrl.searchParams.get("url");
    if (!target || !isAllowedCaptureUrl(target)) {
        sendJson(response, 400, { error: "URL de capture invalide" });
        return;
    }

    try {
        console.log(`Capture -> ${target}`);
        const cameraResponse = await fetchWithTimeout(target);
        if (!cameraResponse.ok) {
            console.log(`Camera HTTP ${cameraResponse.status} <- ${target}`);
            sendJson(response, 502, { error: `Camera HTTP ${cameraResponse.status} pour ${target}` });
            return;
        }

        const isSnapshot = requestUrl.pathname === "/snapshot";
        const contentType = isSnapshot ? "image/jpeg" : cameraResponse.headers.get("content-type") || "image/jpeg";
        const buffer = isSnapshot ? await readFirstJpegFrame(cameraResponse) : Buffer.from(await cameraResponse.arrayBuffer());
        console.log(`Capture OK (${buffer.length} octets, ${contentType}) <- ${target}`);

        response.writeHead(200, {
            "Access-Control-Allow-Origin": "*",
            "Cache-Control": "no-store",
            "Content-Type": contentType,
            "Content-Length": buffer.length
        });
        response.end(buffer);
    } catch (error) {
        console.log(`Capture erreur ${error?.name || "Capture impossible"} <- ${target}`);
        sendJson(response, 504, { error: error?.name || "Capture impossible" });
    }
});

server.listen(PORT, HOST, () => {
    console.log(`Surveillant capture proxy: http://${HOST}:${PORT}`);
});
