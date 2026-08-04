#include <WiFi.h>
#include "esp_camera.h"
#include <esp_http_server.h>

// Paramètres Wi-Fi
const char* ssid = "nom du reseau";        // SSID de ton réseau WiFi
const char* password = "mot de passe du reseau";   // Mot de passe du WiFi

// Paramètres IP fixe
IPAddress local_IP;                  // IP fixe (sera définie dynamiquement)
IPAddress gateway;                   // Passerelle (récupérée dynamiquement)
IPAddress subnet;                    // Masque de sous-réseau (récupéré dynamiquement)

// Configuration des broches pour la caméra AI-Thinker
#define PWDN_GPIO_NUM  32
#define RESET_GPIO_NUM -1
#define XCLK_GPIO_NUM  0
#define SIOD_GPIO_NUM  26
#define SIOC_GPIO_NUM  27

#define Y9_GPIO_NUM    35
#define Y8_GPIO_NUM    34
#define Y7_GPIO_NUM    39
#define Y6_GPIO_NUM    36
#define Y5_GPIO_NUM    21
#define Y4_GPIO_NUM    19
#define Y3_GPIO_NUM    18
#define Y2_GPIO_NUM    5
#define VSYNC_GPIO_NUM 25
#define HREF_GPIO_NUM  23
#define PCLK_GPIO_NUM  22

#define LED_GPIO_NUM   4  // Broche pour LED

// Variables pour gérer l'état de la LED
bool led_state = false;

// Fonction de streaming vidéo
static esp_err_t stream_handler(httpd_req_t *req) {
  camera_fb_t *fb = NULL;
  esp_err_t res = ESP_OK;
  size_t jpg_buf_len;
  uint8_t *jpg_buf;
  char part_buf[64];

  res = httpd_resp_set_type(req, "multipart/x-mixed-replace;boundary=frame");
  if (res != ESP_OK) return res;

  while (true) {
    fb = esp_camera_fb_get();
    if (!fb) {
      Serial.println("Échec de capture de l'image");
      res = ESP_FAIL;
    } else {
      jpg_buf_len = fb->len;
      jpg_buf = fb->buf;
    }

    if (res == ESP_OK) {
      size_t hlen = snprintf(part_buf, 64, "--frame\r\nContent-Type: image/jpeg\r\nContent-Length: %u\r\n\r\n", jpg_buf_len);
      res = httpd_resp_send_chunk(req, part_buf, hlen);
      res = httpd_resp_send_chunk(req, (const char *)jpg_buf, jpg_buf_len);
      res = httpd_resp_send_chunk(req, "\r\n", 2);
    }

    if (fb) esp_camera_fb_return(fb);
    if (res != ESP_OK) break;
  }
  return res;
}

/// Gestion de la LED ON/OFF
static esp_err_t led_handler(httpd_req_t *req) {
  String path = String(req->uri);
  String response = "<html><head>";
  
  // Ajout du style CSS pour fond noir et texte blanc
  response += "<style>";
  response += "body { background-color: black; color: white; font-family: Arial, sans-serif; text-align: center; }"; // Fond noir, texte blanc
  response += "h1 { color: white; }";
  response += "p { font-size: 18px; }";
  response += "</style>";
  
  response += "</head><body><h1>Action LED</h1>";
  
  if (path.endsWith("/on")) {
    digitalWrite(LED_GPIO_NUM, HIGH);
    response += "<p>La LED est maintenant ON.</p>";
  } else if (path.endsWith("/off")) {
    digitalWrite(LED_GPIO_NUM, LOW);
    response += "<p>La LED est maintenant OFF.</p>";
  }

  // Rediriger vers la page d'accueil après 200 milli secondes
  response += "<p><a href='/'>Retour à la page principale</a></p>";
  response += "<script>setTimeout(function(){ window.location.href = '/'; }, 200);</script>";
  
  response += "</body></html>";

  httpd_resp_send(req, response.c_str(), HTTPD_RESP_USE_STRLEN);
  return ESP_OK;
}

// Page d'accueil HTML
static esp_err_t index_handler(httpd_req_t *req) {
  String html = "<html><head>";
  html += "<style>";
  html += "body { background-color: black; color: white; font-family: Arial, sans-serif; text-align: center; }"; // couleurs de la page web
  html += "h1, h2 { color: white; }";
  html += "button { background-color: #444; color: white; border: none; padding: 10px 20px; margin: 5px; cursor: pointer; }";
  html += "button:hover { background-color: #666; }";
  html += "img { border: 2px solid white; margin-top: 10px; }";
  html += "</style>";
  html += "</head><body>";
  html += "<h1> - Surveillant - ESP32-CAM - </h1>"; // titre de la page web
  html += "<h2>Controle LED</h2>";
  html += "<button onclick=\"location.href='/led/on'\">LED ON</button>";
  html += "<button onclick=\"location.href='/led/off'\">LED OFF</button>";
  html += "<h2>Flux Video</h2>";
  html += "<img src='/stream' width='320' height='240'>";
  html += "</body></html>";
  httpd_resp_send(req, html.c_str(), HTTPD_RESP_USE_STRLEN);
  return ESP_OK;
}

// Fonction pour obtenir l'adresse de la passerelle
static esp_err_t gateway_handler(httpd_req_t *req) {
  String gatewayIP = WiFi.gatewayIP().toString();
  httpd_resp_send(req, gatewayIP.c_str(), HTTPD_RESP_USE_STRLEN);
  return ESP_OK;
}

// Déclaration de l'URI de la passerelle
httpd_uri_t gateway_uri = { "/gateway", HTTP_GET, gateway_handler, NULL };

// Configuration du serveur HTTP
void startCameraServer() {
  httpd_config_t config = HTTPD_DEFAULT_CONFIG();
  httpd_handle_t server = NULL;

  httpd_uri_t index_uri = { "/", HTTP_GET, index_handler, NULL };
  httpd_uri_t stream_uri = { "/stream", HTTP_GET, stream_handler, NULL };
  httpd_uri_t led_on_uri = { "/led/on", HTTP_GET, led_handler, NULL };
  httpd_uri_t led_off_uri = { "/led/off", HTTP_GET, led_handler, NULL };

  if (httpd_start(&server, &config) == ESP_OK) {
    httpd_register_uri_handler(server, &index_uri);
    httpd_register_uri_handler(server, &stream_uri);
    httpd_register_uri_handler(server, &led_on_uri);
    httpd_register_uri_handler(server, &led_off_uri);
    httpd_register_uri_handler(server, &gateway_uri); // Ajout de la gestion de la passerelle
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_GPIO_NUM, OUTPUT);
  digitalWrite(LED_GPIO_NUM, LOW);

  // Étape 1 : Connexion temporaire en DHCP
  Serial.println("Connexion temporaire en DHCP...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connecté temporairement !");
  
  // Récupération des informations réseau
  gateway = WiFi.gatewayIP();
  subnet = WiFi.subnetMask();
  Serial.print("Passerelle détectée : ");
  Serial.println(gateway);
  Serial.print("Masque de sous-réseau : ");
  Serial.println(subnet);

  // Étape 2 : Déduire une IP fixe dans le sous-réseau
  local_IP = gateway;       // Utiliser la passerelle comme base
  local_IP[3] = 1;        // Fixer une IP à 192.168.X.1 (X = sous-réseau) --> modifier le 1 par d'autre N° pour les autres cameras
                          // 1 pour camera blanche, 2 pour camera vert, 3 pour camera bleue, 4 pour camera orange...
  
  // Reconfiguration avec IP fixe
  WiFi.disconnect();
  delay(1000);
  Serial.println("Configuration de l'IP fixe...");
  if (!WiFi.config(local_IP, gateway, subnet)) {
    Serial.println("Échec de la configuration de l'IP fixe !");
    return;
  }
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnecté avec IP fixe !");
  Serial.print("Adresse IP : ");
  Serial.println(WiFi.localIP());

  // Configuration de la caméra
  camera_config_t config;
  config.ledc_channel = LEDC_CHANNEL_0;
  config.ledc_timer = LEDC_TIMER_0;
  config.pin_d0 = Y2_GPIO_NUM;
  config.pin_d1 = Y3_GPIO_NUM;
  config.pin_d2 = Y4_GPIO_NUM;
  config.pin_d3 = Y5_GPIO_NUM;
  config.pin_d4 = Y6_GPIO_NUM;
  config.pin_d5 = Y7_GPIO_NUM;
  config.pin_d6 = Y8_GPIO_NUM;
  config.pin_d7 = Y9_GPIO_NUM;
  config.pin_xclk = XCLK_GPIO_NUM;
  config.pin_pclk = PCLK_GPIO_NUM;
  config.pin_vsync = VSYNC_GPIO_NUM;
  config.pin_href = HREF_GPIO_NUM;
  config.pin_sscb_sda = SIOD_GPIO_NUM;
  config.pin_sscb_scl = SIOC_GPIO_NUM;
  config.pin_pwdn = PWDN_GPIO_NUM;
  config.pin_reset = RESET_GPIO_NUM;
  config.xclk_freq_hz = 20000000;
  config.pixel_format = PIXFORMAT_JPEG;

  config.frame_size = FRAMESIZE_VGA;
  config.jpeg_quality = 10;
  config.fb_count = 2;

  if (esp_camera_init(&config) != ESP_OK) {
    Serial.println("Échec d'initialisation de la caméra");
    return;
  }

  startCameraServer();
  Serial.println("Serveur caméra démarré !");
}

void loop() {
  // Rien ici, le serveur gère tout
}
