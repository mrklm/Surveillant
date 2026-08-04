# Surveillant

Surveillant est une page HTML autonome permettant de recuperer, afficher et piloter un ou plusieurs flux video ESP32-CAM sur un reseau local.

La version actuelle est `v1.8.30`.

## Apercu

![Surveillant - grille de flux](screenshots/screenshot1.png)

![Surveillant - menu et configuration](screenshots/screenshot2.png)

## Fonctionnalites

- Affichage multi-flux ESP32-CAM depuis des IP locales.
- Agencement configurable de `Auto` a `8` colonnes.
- Agencement par defaut en 3 flux par ligne.
- Date centrale en format numerique ou en toutes lettres.
- Date en toutes lettres activee par defaut.
- Commandes par camera : LED, capture PNG, rafraichissement, miroir, rotation et plein ecran.
- Bouton global pour basculer toutes les LED.
- Captures PNG avec telechargement direct ou dossier choisi quand le navigateur le permet.
- Menu de configuration des cameras avec IP, libelle, couleur et ajout/suppression.
- Themes visuels sauvegardes dans le navigateur.
- Mode Surveillance avec barre du haut conservee et flux maximises.
- Messages discrets en filigrane sur les flux, effaces automatiquement apres 30 secondes.

## Fichiers

- `surveillant-v1.8.30.html` : application principale.
- `surveillant.png` : logo, favicon et image de remplacement des flux indisponibles.
- `capture-proxy.js` : proxy local optionnel pour contourner certains blocages CORS lors des captures.
- `surveillant_esp32cam.ino` : sketch ESP32-CAM associe au projet.
- `CHANGELOG.md` : historique des versions.
- `screenshots/` : captures utilisees dans ce README.

## Utilisation

Ouvrir `surveillant-v1.8.30.html` dans un navigateur.

Dans le menu :

- renseigner les IP des cameras a afficher ;
- verifier le chemin du flux, generalement `/stream` ;
- verifier le chemin de capture, generalement `/capture` ;
- choisir l'agencement des flux ;
- choisir le format de date ;
- enregistrer.

Les reglages sont conserves dans le navigateur avec `localStorage`.

## Compatibilite Navigateur

La page fonctionne comme un fichier HTML autonome pour l'affichage et les commandes principales.

Le choix d'un dossier de destination pour les captures depend du navigateur :

- Chrome et Edge peuvent proposer le choix de dossier quand la page est ouverte dans un contexte compatible.
- Firefox ne prend pas en charge `showDirectoryPicker`; les captures sont alors telechargees en PNG.

## Proxy De Capture Optionnel

Si une camera bloque la capture directe a cause de CORS, lancer le proxy local :

```bash
node capture-proxy.js
```

Surveillant essaie alors de passer par :

```text
http://127.0.0.1:8787/capture
```

Le proxy reste optionnel : l'affichage des flux et les commandes de base peuvent fonctionner sans lui.

## Routes Attendues

Surveillant suppose par defaut que les ESP32-CAM exposent :

- `/stream` pour le flux video ;
- `/capture` pour une image fixe ;
- `/led/on` pour allumer la LED ;
- `/led/off` pour eteindre la LED.

Ces chemins peuvent dependre du firmware utilise.

## Securite

Surveillant pilote des cameras par URLs HTTP locales. Il ne chiffre pas les flux et ne protege pas les cameras par lui-meme.

Il est recommande de garder les cameras sur un reseau local protege, sans redirection de port directe vers Internet.
