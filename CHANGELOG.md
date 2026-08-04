# Changelog

## Surveillant v1.8.43 - 2026-08-04

- Ajout d'un bouton `Lancer le tutoriel` dans l'aide, entre `Utilisation rapide` et `Pour les geeks`.
- Le bouton ferme l'aide puis relance le tutoriel de configuration.
- Incrémentation de la version affichée vers `Surveillant v1.8.43`.
- Migration des réglages depuis `surveillant-v1.8.42-settings` vers `surveillant-v1.8.43-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.43.html`.

## Surveillant v1.8.42 - 2026-08-04

- Simplification de la première étape du tutoriel Arduino.
- Remplacement des consignes de support ESP32 et de sélection de carte par `Mettez à jour l'I.D.E si besoin.`
- Incrémentation de la version affichée vers `Surveillant v1.8.42`.
- Migration des réglages depuis `surveillant-v1.8.41-settings` vers `surveillant-v1.8.42-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.42.html`.

## Surveillant v1.8.41 - 2026-08-04

- Remplacement de l'alerte navigateur après import JSON par un popup Surveillant personnalisé.
- Affichage du logo Surveillant et du nom lisible du fichier de configuration chargé.
- Conversion de la date du nom de fichier de configuration en format `JJ/MM/AA` dans le message.
- Incrémentation de la version affichée vers `Surveillant v1.8.41`.
- Migration des réglages depuis `surveillant-v1.8.40-settings` vers `surveillant-v1.8.41-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.41.html`.

## Surveillant v1.8.40 - 2026-08-04

- Déplacement de `surveillant.png` et `surveillant_off.png` dans le dossier `assets/`.
- Utilisation de `assets/surveillant.gif` comme animation affichée lorsqu'un flux vidéo est indisponible.
- Mise à jour des chemins du favicon, du logo, de l'aide, du tutoriel et du placeholder hors-ligne.
- Incrémentation de la version affichée vers `Surveillant v1.8.40`.
- Migration des réglages depuis `surveillant-v1.8.39-settings` vers `surveillant-v1.8.40-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.40.html`.

## Surveillant v1.8.39 - 2026-08-04

- Ajout des icônes locales des projets cités dans la section `À propos` de l'aide.
- Intégration des icônes devant chaque logiciel open source listé.
- Ajout du dossier `assets/icons/` pour conserver ces images dans le dépôt.
- Incrémentation de la version affichée vers `Surveillant v1.8.39`.
- Migration des réglages depuis `surveillant-v1.8.38-settings` vers `surveillant-v1.8.39-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.39.html`.

## Surveillant v1.8.38 - 2026-08-04

- Ajout d'une section `À propos` à la fin de l'aide intégrée.
- Ajout du contact, du lien GitHub Surveillant et des liens vers les autres logiciels open source de Klm.
- Mise à jour du README avec la présence de cette nouvelle section d'aide.
- Incrémentation de la version affichée vers `Surveillant v1.8.38`.
- Migration des réglages depuis `surveillant-v1.8.37-settings` vers `surveillant-v1.8.38-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.38.html`.

## Surveillant v1.8.37 - 2026-08-04

- Baisse d'environ un tiers de la luminosité du titre `Surveillant` dans la barre principale.
- Enregistrement et restauration des paramètres d'affichage par caméra dans la configuration JSON : rotation et miroir horizontal.
- Incrémentation de la version affichée vers `Surveillant v1.8.37`.
- Migration des réglages depuis `surveillant-v1.8.36-settings` vers `surveillant-v1.8.37-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.37.html`.

## Surveillant v1.8.36 - 2026-08-04

- Ajout des accents manquants dans les textes visibles du tutoriel de première configuration.
- Simplification de la page de fin du tutoriel avec le message : `Reportez-vous à la section aide si besoin, bonne utilisation !`.
- Correction du message de première configuration affiché dans la grille pour conserver le vouvoiement.
- Incrémentation de la version affichée vers `Surveillant v1.8.36`.
- Migration des réglages depuis `surveillant-v1.8.35-settings` vers `surveillant-v1.8.36-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.36.html`.

## Surveillant v1.8.35 - 2026-08-04

- Ajout d'une page d'accueil au tutoriel de premiere configuration avec le logo Surveillant.
- Ajout d'une etape expliquant ou renseigner l'URL Espressif dans les preferences de l'IDE Arduino.
- Ajout du lien officiel de l'IDE Arduino : `https://www.arduino.cc/en/software`.
- Ajout d'une etape finale indiquant que le tutoriel est termine et que l'utilisateur sera dirige vers le menu.
- Passage du tutoriel de 8 a 11 pages.
- Mise a jour du README avec le nouveau deroule du tutoriel.
- Incrementation de la version affichee vers `Surveillant v1.8.35`.
- Migration des reglages depuis `surveillant-v1.8.34-settings` vers `surveillant-v1.8.35-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.35.html`.

## Surveillant v1.8.34 - 2026-08-04

- Uniformisation des textes utilisateur en vouvoiement.
- Ajout d'un lien officiel vers le telechargement de l'IDE Arduino dans la premiere etape du tutoriel.
- Ajout d'une etape `Branchez l'ESP32-CAM a votre ordinateur`, illustree par `screenshots/screenshot3.png`.
- Ajout d'une etape `Selectionnez la carte`, illustree par `screenshots/screenshot4.png`.
- Ajout d'une etape `Selectionnez le port`, illustree par `screenshots/screenshot5.png`.
- Passage du tutoriel de 5 a 8 etapes.
- Mise a jour du README avec les captures de tutoriel.
- Incrementation de la version affichee vers `Surveillant v1.8.34`.
- Migration des reglages depuis `surveillant-v1.8.33-settings` vers `surveillant-v1.8.34-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.34.html`.

## Surveillant v1.8.33 - 2026-08-04

- Suppression des cameras preconfigurees par defaut pour la version publique.
- Conservation d'une camera vide par defaut afin de guider la premiere saisie dans le menu.
- Remplacement du message `Aucune camera assignee` par une invite de premiere configuration.
- Ajout d'un tutoriel de demarrage en popup, decoupe en plusieurs etapes.
- Ajout de l'option `Ne plus ouvrir au demarrage` pour le tutoriel.
- Documentation du tutoriel dans l'aide integree et le README.
- Verification que les fichiers `Config_Surveillant_*.json` restent ignores par Git.
- Incrementation de la version affichee vers `Surveillant v1.8.33`.
- Migration des reglages depuis `surveillant-v1.8.32-settings` vers `surveillant-v1.8.33-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.33.html`.

## Surveillant v1.8.32 - 2026-08-04

- Ajout de deux boutons `Sauver` et `Charger` la configuration dans le menu.
- Export des reglages dans un fichier JSON nomme par defaut `Config_Surveillant_JJ-MM-AA.json`.
- Import d'un fichier JSON de configuration avec application immediate et sauvegarde dans le navigateur.
- Ajout de l'exclusion `Config_Surveillant_*.json` au `.gitignore` pour eviter de publier une configuration personnelle.
- Mise a jour du README avec la sauvegarde de configuration.
- Incrementation de la version affichee vers `Surveillant v1.8.32`.
- Migration des reglages depuis `surveillant-v1.8.31-settings` vers `surveillant-v1.8.32-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.32.html`.

## Surveillant v1.8.31 - 2026-08-04

- Ajout de `surveillant_off.png` comme image dediee aux flux video indisponibles.
- Conservation de `surveillant.png` pour le logo, le favicon et l'aide.
- Incrementation de la version affichee vers `Surveillant v1.8.31`.
- Migration des reglages depuis `surveillant-v1.8.30-settings` vers `surveillant-v1.8.31-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.31.html`.

## Surveillant v1.8.30 - 2026-08-04

- Refonte visuelle du titre dans la barre du haut pour se rapprocher de la charte graphique du logo.
- Application d'une police plus massive et technique au nom `Surveillant`.
- Ajout d'une couleur claire/cyan et d'un effet lumineux sur le titre.
- Separation du numero de version, affiche environ deux fois plus petit.
- Application d'un bleu plus sombre au numero de version.
- Incrementation de la version affichee vers `Surveillant v1.8.30`.
- Migration des reglages depuis `surveillant-v1.8.29-settings` vers `surveillant-v1.8.30-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.30.html`.

## Surveillant v1.8.29 - 2026-08-04

- Changement des reglages par defaut au premier lancement.
- Ouverture par defaut avec l'agencement `3` flux par ligne.
- Ouverture par defaut avec la date en toutes lettres.
- Conservation prioritaire des reglages deja sauvegardes dans le navigateur.
- Incrementation de la version affichee vers `Surveillant v1.8.29`.
- Migration des reglages depuis `surveillant-v1.8.28-settings` vers `surveillant-v1.8.29-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.29.html`.

## Surveillant v1.8.28 - 2026-08-04

- Ajout d'un effacement automatique des messages en filigrane sur les flux apres 30 secondes.
- Annulation du minuteur precedent quand un nouveau message remplace l'ancien sur une camera.
- Conservation de l'affichage immediat des nouveaux messages de statut, capture, LED, rotation et miroir.
- Incrementation de la version affichee vers `Surveillant v1.8.28`.
- Migration des reglages depuis `surveillant-v1.8.27-settings` vers `surveillant-v1.8.28-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.28.html`.

## Surveillant v1.8.27 - 2026-08-04

- Uniformisation de la hauteur des boutons de la barre du haut.
- Reduction de la largeur du selecteur d'agencement.
- Remplacement de l'affichage `Auto` par `A` dans le bouton d'agencement.
- Incrementation de la version affichee vers `Surveillant v1.8.27`.
- Migration des reglages depuis `surveillant-v1.8.26-settings` vers `surveillant-v1.8.27-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.27.html`.

## Surveillant v1.8.26 - 2026-08-04

- Modification du format long de l'horloge centrale.
- Capitalisation du jour et du mois en toutes lettres, par exemple `Mardi 4 Août 2026`.
- Remplacement du separateur `a` par ` - ` entre la date et l'heure.
- Incrementation de la version affichee vers `Surveillant v1.8.26`.
- Migration des reglages depuis `surveillant-v1.8.25-settings` vers `surveillant-v1.8.26-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.26.html`.

## Surveillant v1.8.25 - 2026-08-04

- Correction de l'option `Date en haut` pour qu'elle modifie immediatement l'horloge centrale de la barre du haut.
- Sauvegarde immediate du choix de format de date lors du changement dans le menu.
- Ajout d'un ajustement visuel pour que le format long avec jour/mois en toutes lettres tienne mieux dans la barre.
- Incrementation de la version affichee vers `Surveillant v1.8.25`.
- Migration des reglages depuis `surveillant-v1.8.24-settings` vers `surveillant-v1.8.25-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.25.html`.

## Surveillant v1.8.24 - 2026-08-04

- Ajout d'une option `Date en haut` dans le menu pour choisir entre date numerique et jour/mois en toutes lettres.
- Sauvegarde du format de date dans les reglages locaux.
- Mise a jour immediate de l'horloge apres enregistrement ou reinitialisation des reglages.
- Mise a jour de l'aide de base avec l'agencement des flux, les boutons lateraux, les captures PNG et le nouveau format de date.
- Mise a jour de l'aide geek avec le stockage du format de date, le fonctionnement de l'horodatage et l'agencement compact des cartes.
- Incrementation de la version affichee vers `Surveillant v1.8.24`.
- Migration des reglages depuis `surveillant-v1.8.23-settings` vers `surveillant-v1.8.24-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.24.html`.

## Surveillant v1.8.23 - 2026-08-04

- Refonte compacte des cartes camera pour maximiser la taille du flux video.
- Deplacement des 6 boutons de chaque carte en deux rails lateraux superposes au flux : LED, capture et plein ecran a gauche ; rafraichissement, miroir et rotation a droite.
- Passage du message de capture/etat en overlay discret en bas du flux, sans ligne de hauteur dediee.
- Compactage de l'en-tete camera avec nom, IP/libelle et etat sur une zone plus basse.
- Conservation du masquage des controles en mode Surveillance.
- Incrementation de la version affichee vers `Surveillant v1.8.23`.
- Migration des reglages depuis `surveillant-v1.8.22-settings` vers `surveillant-v1.8.23-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.23.html`.

## Surveillant v1.8.22 - 2026-08-04

- Desactivation du zoom auto de hauteur quand l'agencement est sur `Auto`.
- Conservation du comportement responsive naturel en mode `Auto`.
- Conservation du zoom auto pour les agencements fixes `1` a `8`.
- Incrementation de la version affichee vers `Surveillant v1.8.22`.
- Migration des reglages depuis `surveillant-v1.8.21-settings` vers `surveillant-v1.8.22-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.22.html`.

## Surveillant v1.8.21 - 2026-08-04

- Remplacement du texte `LED ⏻` par une icone ampoule `💡` sur les boutons LED.
- Conservation des libelles accessibles et des titres de survol pour les commandes LED.
- Mise a jour de l'aide rapide avec la nouvelle icone LED.
- Incrementation de la version affichee vers `Surveillant v1.8.21`.
- Migration des reglages depuis `surveillant-v1.8.20-settings` vers `surveillant-v1.8.21-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.21.html`.

## Surveillant v1.8.20 - 2026-08-04

- Ajout du zoom auto des flux dans la grille principale.
- Calcul automatique de la hauteur des vignettes selon le nombre de flux actifs, le mode d'agencement choisi et la hauteur disponible.
- Recadrage automatique apres changement d'agencement, rendu des cameras ou redimensionnement de la fenetre.
- Conservation de tous les flux visibles a l'ecran, y compris avec les modes d'agencement fixes.
- Incrementation de la version affichee vers `Surveillant v1.8.20`.
- Migration des reglages depuis `surveillant-v1.8.19-settings` vers `surveillant-v1.8.20-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.20.html`.

## Surveillant v1.8.19 - 2026-08-04

- Extension du selecteur d'agencement jusqu'a 8 colonnes.
- Ajout des modes `5`, `6`, `7` et `8`.
- Suppression de la mention `large` dans les libelles des modes d'agencement.
- Incrementation de la version affichee vers `Surveillant v1.8.19`.
- Migration des reglages depuis `surveillant-v1.8.18-settings` vers `surveillant-v1.8.19-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.19.html`.

## Surveillant v1.8.18 - 2026-08-04

- Ajout d'un selecteur violet d'agencement des flux dans la barre du haut, place apres le bouton `Menu`.
- Ajout d'une icone symbolisant quatre carres dans un carre sur le selecteur d'agencement.
- Ajout des modes `Auto`, `1 large`, `2 large`, `3 large` et `4 large`.
- Application de l'agencement a la grille des cameras avec recadrage automatique des flux.
- Sauvegarde de l'agencement choisi dans les reglages locaux.
- Incrementation de la version affichee vers `Surveillant v1.8.18`.
- Migration des reglages depuis `surveillant-v1.8.17-settings` vers `surveillant-v1.8.18-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.18.html`.

## Surveillant v1.8.17 - 2026-08-04

- Reduction de la largeur du menu d'environ un cinquieme.
- Ajout d'une largeur specifique au dialogue de menu : `min(96vw, 840px)`.
- Incrementation de la version affichee vers `Surveillant v1.8.17`.
- Migration des reglages depuis `surveillant-v1.8.16-settings` vers `surveillant-v1.8.17-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.17.html`.

## Surveillant v1.8.16 - 2026-08-04

- Reduction de la largeur des boutons `Supprimer` dans la liste des cameras du menu.
- Ajout d'un bouton `Modifier` sur chaque ligne camera.
- Ajout d'un formulaire de modification de couleur avec roue de couleur et champ pour le nom de couleur.
- Sauvegarde du nom et de la couleur modifies avec le bouton `Enregistrer` du menu.
- Incrementation de la version affichee vers `Surveillant v1.8.16`.
- Migration des reglages depuis `surveillant-v1.8.15-settings` vers `surveillant-v1.8.16-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.16.html`.

## Surveillant v1.8.15 - 2026-08-04

- Passage de l'agrandissement camera en affichage plein ecran.
- Le dialogue d'agrandissement occupe maintenant toute la largeur et toute la hauteur du viewport.
- Le flux agrandi utilise toute la hauteur disponible sous l'en-tete du dialogue.
- Incrementation de la version affichee vers `Surveillant v1.8.15`.
- Migration des reglages depuis `surveillant-v1.8.14-settings` vers `surveillant-v1.8.15-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.15.html`.

## Surveillant v1.8.14 - 2026-08-04

- Suppression de la camera rose des cameras par defaut.
- Ajout de la camera turquoise par defaut avec l'IP `192.168.1.10`.
- Incrementation de la version affichee vers `Surveillant v1.8.14`.
- Migration des reglages depuis `surveillant-v1.8.13-settings` vers `surveillant-v1.8.14-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.14.html`.

## Surveillant v1.8.13 - 2026-08-04

- Refonte de la liste des cameras dans le menu avec champs IP et libelle plus compacts.
- Ajout d'un bouton `Supprimer` sur chaque ligne camera.
- Ajout d'un bouton `Ajouter` sous la liste des cameras.
- Ajout d'un formulaire de creation de camera avec roue de couleur, nom de couleur, IP et libelle.
- Sauvegarde du nom, de la couleur, de l'IP, du libelle, de la rotation et du miroir pour les cameras personnalisees.
- Migration des anciennes cameras par defaut vers la nouvelle liste editable.
- Incrementation de la version affichee vers `Surveillant v1.8.13`.
- Migration des reglages depuis `surveillant-v1.8.12-settings` vers `surveillant-v1.8.13-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.13.html`.

## Surveillant v1.8.12 - 2026-08-04

- Ajout d'un fallback de capture depuis le flux video quand la camera repond `404` sur le chemin de capture.
- Ajout de la route proxy `/snapshot`, qui extrait la premiere frame JPEG du flux MJPEG configure.
- Conversion PNG conservee apres extraction de la frame depuis le flux.
- Ajout d'un message indiquant l'extraction depuis le flux quand `/capture` est absent du firmware.
- Incrementation de la version affichee vers `Surveillant v1.8.12`.
- Migration des reglages depuis `surveillant-v1.8.11-settings` vers `surveillant-v1.8.12-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.12.html`.

## Surveillant v1.8.11 - 2026-08-04

- Ajout d'un champ `Chemin capture` dans le menu, avec `/capture` par defaut.
- Sauvegarde du chemin de capture dans les reglages locaux.
- Utilisation du chemin de capture configure pour la capture directe et la capture via proxy.
- Amelioration des messages d'erreur de capture avec le detail renvoye par le proxy local.
- Assouplissement du proxy local pour accepter les chemins HTTP des ESP32-CAM du reseau `192.168.x.x`.
- Ajout de logs dans `capture-proxy.js` indiquant l'URL appelee, le statut HTTP camera et la taille de l'image recue.
- Incrementation de la version affichee vers `Surveillant v1.8.11`.
- Migration des reglages depuis `surveillant-v1.8.10-settings` vers `surveillant-v1.8.11-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.11.html`.

## Surveillant v1.8.10 - 2026-08-04

- Ajout d'un proxy local optionnel `capture-proxy.js` pour contourner le blocage CORS de `/capture`.
- Tentative automatique de capture via `http://127.0.0.1:8787/capture` quand la capture directe renvoie une erreur `TypeError`.
- Conservation de la conversion PNG cote navigateur apres recuperation de l'image via le proxy.
- Ajout d'un message plus explicite quand la capture reste bloquee et que le proxy local n'est pas lance.
- Mise a jour de l'aide technique avec le fonctionnement du proxy local.
- Incrementation de la version affichee vers `Surveillant v1.8.10`.
- Migration des reglages depuis `surveillant-v1.8.9-settings` vers `surveillant-v1.8.10-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.10.html`.

## Surveillant v1.8.9 - 2026-08-04

- Correction de la capture qui restait bloquee sur le message `Capture en cours...`.
- Pause breve du flux de la camera avant l'appel a `/capture`, afin de liberer la connexion HTTP de l'ESP32-CAM.
- Ajout d'un delai maximum de 7 secondes sur la requete de capture pour eviter un blocage indefini.
- Relance automatique du flux apres la capture ou apres une erreur.
- Conservation d'un secours par telechargement de l'image originale quand la conversion PNG est bloquee ou trop lente.
- Incrementation de la version affichee vers `Surveillant v1.8.9`.
- Migration des reglages depuis `surveillant-v1.8.8-settings` vers `surveillant-v1.8.9-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.9.html`.

## Surveillant v1.8.8 - 2026-08-04

- Correction du pilotage LED quand le flux video garde la connexion HTTP de l'ESP32-CAM occupee.
- Pause breve du flux de la camera concernee avant l'envoi de `/led/on` ou `/led/off`.
- Relance automatique du flux apres la commande LED.
- Ajout d'une gestion des relances pour eviter les redemarrages multiples du meme flux lors de clics rapproches.
- Incrementation de la version affichee vers `Surveillant v1.8.8`.
- Migration des reglages depuis `surveillant-v1.8.7-settings` vers `surveillant-v1.8.8-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.8.html`.

## Surveillant v1.8.7 - 2026-08-04

- Correction du pilotage LED pour eviter les commandes retardees au moment de fermer le navigateur.
- Remplacement des iframes cachees par un envoi immediat via `fetch` en `no-cors` et `keepalive`, avec secours par requete image.
- Suppression de l'extinction automatique des LED au chargement de la page : Surveillant ne modifie plus l'etat des LED sans clic utilisateur.
- Conservation des routes strictes `/led/on` et `/led/off`.
- Incrementation de la version affichee vers `Surveillant v1.8.7`.
- Migration des reglages depuis `surveillant-v1.8.6-settings` vers `surveillant-v1.8.7-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.7.html`.

## Surveillant v1.8.6 - 2026-08-03

- Correction du comportement LED au chargement de la page.
- Suppression des routes LED alternatives automatiques ajoutees en v1.8.5 pour eviter l'allumage involontaire des LED selon le firmware ESP32-CAM.
- Retour a une commande LED stricte via `/led/on` et `/led/off`.
- Envoi des commandes LED dans des iframes cachees sans parametre ajoute a l'URL, afin de conserver exactement les routes attendues par le firmware.
- Extinction automatique et decalee de toutes les LED apres le demarrage de la page.
- Incrementation de la version affichee vers `Surveillant v1.8.6`.
- Migration des reglages depuis `surveillant-v1.8.5-settings` vers `surveillant-v1.8.6-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.6.html`.

## Surveillant v1.8.5 - 2026-08-03

- Correction des boutons LED par camera et du bouton global `LED ⏻`.
- Envoi des commandes LED via requetes invisibles pour eviter les blocages CORS de `fetch`.
- Ajout de routes compatibles avec plusieurs firmwares ESP32-CAM : `/led/on`, `/led/off`, `/control?var=flash` et `/control?var=led_intensity`.
- Mise a jour de l'aide technique avec les routes LED prises en charge.
- Incrementation de la version affichee vers `Surveillant v1.8.5`.
- Migration des reglages depuis `surveillant-v1.8.4-settings` vers `surveillant-v1.8.5-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.5.html`.

## Surveillant v1.8.4 - 2026-08-03

- Ajout des IP par defaut pour les cameras orange et cyan.
- Configuration par defaut completee : Orange `192.168.1.8`, Cyan `192.168.1.9`.
- Incrementation de la version affichee vers `Surveillant v1.8.4`.
- Migration des reglages depuis `surveillant-v1.8.3-settings` vers `surveillant-v1.8.4-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.4.html`.

## Surveillant v1.8.3 - 2026-08-03

- Ajout d'un bandeau d'introduction dans l'aide avec le logo agrandi x4, le titre `Surveillant` et un sous-titre descriptif.
- Conservation de la barre du haut en mode Surveillance, avec masquage limite aux controles et messages des cartes camera.
- Amelioration du choix de dossier de captures avec messages explicites selon les capacites du navigateur et memorisation possible via `IndexedDB`.
- Refonte du bouton `Capture` : tentative de creation d'un fichier PNG, enregistrement dans le dossier choisi si autorise, sinon telechargement direct.
- Ajout d'un secours discret pour les captures bloquees par le navigateur ou l'ESP32-CAM, sans ouverture de nouvelle fenetre.
- Mise a jour de l'aide technique sur les limites navigateur, le dossier de destination et la conversion PNG.
- Incrementation de la version affichee vers `Surveillant v1.8.3`.
- Migration des reglages depuis `surveillant-v1.8.2-settings` vers `surveillant-v1.8.3-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.3.html`.

## Surveillant v1.8.2 - 2026-08-03

- Agrandissement x2 de l'icone affichee dans les cases dont le flux est indisponible.
- Incrementation de la version affichee vers `Surveillant v1.8.2`.
- Migration des reglages depuis `surveillant-v1.8.1-settings` vers `surveillant-v1.8.2-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.2.html`.

## Surveillant v1.8.1 - 2026-08-03

- Ajout d'une icone de remplacement dans les cases dont le flux est indisponible.
- Affichage de `surveillant.png` a la place du flux quand une camera passe hors ligne.
- Retour automatique au flux quand la camera redevient disponible.
- Mise a jour de l'aide normale avec ce comportement.
- Incrementation de la version affichee vers `Surveillant v1.8.1`.
- Migration des reglages depuis `surveillant-v1.8.0-settings` vers `surveillant-v1.8.1-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.1.html`.

## Surveillant v1.8.0 - 2026-08-03

- Ajout d'un mode Surveillance global active par clic sur le logo.
- En mode Surveillance, seuls les flux camera restent visibles.
- Masquage de l'en-tete, des titres, statuts, messages et boutons camera en mode Surveillance.
- Ajout d'un bouton logo flottant pour revenir a l'affichage normal.
- Ajout de l'activation clavier du logo avec `Entree` ou `Espace`.
- Mise a jour de l'aide normale avec le mode Surveillance.
- Incrementation de la version affichee vers `Surveillant v1.8.0`.
- Migration des reglages depuis `surveillant-v1.7.0-settings` vers `surveillant-v1.8.0-settings`.
- Renommage du fichier HTML en `surveillant-v1.8.0.html`.

## Surveillant v1.7.0 - 2026-08-03

- Ajout des IP par defaut pour les cameras rouge, jaune, violette et bleue.
- Configuration par defaut : Blanche `192.168.1.2`, Rouge `192.168.1.3`, Verte `192.168.1.4`, Jaune `192.168.1.5`, Violette `192.168.1.6`, Bleue `192.168.1.7`.
- Refonte du menu cameras : presentation en lignes compactes au lieu de blocs.
- Conservation des champs IP et libelle par camera dans la nouvelle presentation.
- Mise a jour de l'aide avec la presentation compacte du menu.
- Incrementation de la version affichee vers `Surveillant v1.7.0`.
- Migration des reglages depuis `surveillant-v1.6.0-settings` vers `surveillant-v1.7.0-settings`.
- Renommage du fichier HTML en `surveillant-v1.7.0.html`.

## Surveillant v1.6.0 - 2026-08-03

- Ajout du reglage `Decalage maj` dans le menu.
- Choix possibles pour le delai entre cameras : 1200 ms, 5000 ms, 10000 ms, 30000 ms et 1 minute.
- Application du decalage au demarrage initial des flux.
- Application du decalage aux rafraichissements globaux, aux mises a jour automatiques et aux tests de statut.
- Sauvegarde du delai choisi dans `localStorage`.
- Mise a jour de l'aide avec les details du demarrage progressif et du delai configurable.
- Incrementation de la version affichee vers `Surveillant v1.6.0`.
- Migration des reglages depuis `surveillant-v1.5.1-settings` vers `surveillant-v1.6.0-settings`.
- Renommage du fichier HTML en `surveillant-v1.6.0.html`.

## Surveillant v1.5.1 - 2026-08-03

- Correction du cadrage des vignettes de flux dans les cartes camera.
- Mise en place d'une base iframe 320x240 centree et mise a l'echelle selon la taille de la case.
- Suppression des barres blanches liees au rendu interne du flux dans l'iframe.
- Conservation d'un fond noir pour compenser les differences de format.
- Recalcul automatique du cadrage apres rotation, agrandissement, fermeture d'agrandissement et redimensionnement de fenetre.
- Incrementation de la version affichee vers `Surveillant v1.5.1`.
- Migration des reglages depuis `surveillant-v1.5.0-settings` vers `surveillant-v1.5.1-settings`.
- Renommage du fichier HTML en `surveillant-v1.5.1.html`.

## Surveillant v1.5.0 - 2026-08-03

- Ajout d'une logique de rafraichissement global decale pour eviter de relancer toutes les cameras simultanement.
- Ajout d'un reglage `Frequence de maj` dans le menu.
- Ajout d'une mise a jour automatique optionnelle des flux.
- Decalage des tests de statut en ligne/hors ligne pour limiter les pics de requetes.
- Ajout d'une explication du rafraichissement decale dans l'aide.
- Incrementation de la version affichee vers `Surveillant v1.5.0`.
- Migration des reglages depuis `surveillant-v1.4.1-settings` vers `surveillant-v1.5.0-settings`.
- Renommage du fichier HTML en `surveillant-v1.5.0.html`.

## Surveillant v1.4.1 - 2026-08-03

- Remplacement du texte du bouton capture par l'icone `▣` dans chaque carte camera.
- Ajout du libelle accessible `Capture` sur le bouton de capture.
- Incrementation de la version affichee vers `Surveillant v1.4.1`.
- Renommage du fichier HTML en `surveillant-v1.4.1.html`.
- Migration des reglages depuis `surveillant-v1.4.0-settings` vers `surveillant-v1.4.1-settings`.

## Surveillant v1.4.0 - 2026-08-03

- Ajout d'un bouton d'aide `?` dans l'en-tete, apres le bouton global `LED ⏻`.
- Ajout d'une documentation integree avec une section d'utilisation rapide.
- Ajout d'une section technique "Pour les geeks" expliquant HTML, flux, configuration, captures et securite.
- Reformulation de l'aide en vouvoiement.
- Detail supplementaire sur les langages, protocoles HTTP, routes ESP32-CAM et API navigateur utilisees.
- Incrementation de la version affichee vers `Surveillant v1.4.0`.
- Migration des reglages depuis `surveillant-v1.3.4-settings` vers `surveillant-v1.4.0-settings`.

## Surveillant v1.3.4 - 2026-08-03

### Identite et interface

- Incrementation de la version affichee vers `Surveillant v1.3.4`.
- Ajout de l'icone `surveillant.png` devant le titre.
- Ajout de `surveillant.png` comme favicon de l'onglet navigateur.
- Reorganisation de l'en-tete en trois zones : titre a gauche, horodatage centre, commandes globales a droite.
- Ajout de la date et de l'heure en haut de l'ecran avec mise a jour chaque seconde.
- Passage du bouton `Menu` en bleu.
- Remplacement du bouton global `Rafraichir` par l'icone `↻`.
- Remplacement du bouton `Toutes LED OFF` par un bouton global `LED ⏻` en bascule ON/OFF.
- Harmonisation des boutons camera avec des icones et couleurs dediees.

### Gestion des cameras

- Passage d'une logique par passerelle reseau a une configuration par camera avec IP fixe.
- Ajout d'un menu de configuration pour assigner les IP des cameras.
- Ajout d'un champ libelle par camera dans le menu.
- Affichage du libelle apres l'IP dans les cartes de flux.
- Conservation des couleurs de cameras sans libelles de zones type cuisine ou garage.
- Preparation de 9 emplacements camera : blanche, verte, bleue, orange, jaune, rouge, violette, cyan et rose.
- Configuration initiale des cameras connues en `192.168.1.2` et `192.168.1.4`.
- Sauvegarde des reglages dans le navigateur via `localStorage`.
- Migration des anciens reglages `surveillant-v1.0.0-settings` et `klm-surveillant-esp32-cam-v0.1-stream` vers `surveillant-v1.3.4-settings`.
- Ajout d'un chemin de flux configurable, avec `/stream` par defaut.

### Flux video

- Affichage des flux ESP32-CAM dans une grille responsive.
- Ajout d'un statut par camera : test, en ligne, hors ligne.
- Verification periodique de disponibilite toutes les 30 secondes.
- Remplacement de l'affichage `/` par `/stream` pour eviter d'afficher l'interface interne des ESP32.
- Conservation de l'affichage en `iframe`, plus compatible avec le firmware utilise.
- Ajout du rafraichissement individuel de flux.
- Ajout du rafraichissement global de tous les flux.

### Commandes par camera

- Remplacement de `LED ON` et `LED OFF` par un bouton unique `LED ⏻` en bascule ON/OFF.
- Ajout d'un bouton capture individuel par camera.
- Ajout d'un bouton `↻` par camera pour rafraichir le flux.
- Ajout d'un bouton `⤾` pour tourner l'affichage par pas de 90 degres.
- Ajout d'un bouton `⇄` pour activer/desactiver le miroir horizontal.
- Ajout d'un bouton `⛶` pour agrandir une camera.
- Memorisation de la rotation et du miroir par camera.

### Agrandissement

- Ajout d'une fenetre d'agrandissement pour une camera.
- Correction de la fenetre vide en deplacant le flux existant au lieu d'ouvrir un second flux ESP32.
- Ajout du retour automatique du flux dans sa carte lors de la fermeture.
- Gestion de la fermeture avec le bouton `Fermer` ou la touche `Echap`.
- Ajustement de la largeur de la fenetre agrandie pour respecter le format 4:3 et reduire les bandes laterales.
- Ajout d'un zoom dynamique dans la vue agrandie.
- Recalcul du zoom lors d'une rotation ou d'un redimensionnement de fenetre.

### Captures

- Ajout de la route de capture individuelle via `/capture`.
- Ouverture de la capture dans un nouvel onglet par defaut.
- Ajout d'un choix de dossier de destination quand le navigateur supporte `showDirectoryPicker`.
- Repli automatique vers l'ouverture en onglet si l'enregistrement direct n'est pas disponible.
- Horodatage des messages de capture.
- Horodatage des noms de fichiers captures sous la forme `Camera_YYYY-MM-DD_HH-MM-SS.jpg`.

### Themes

- Ajout d'une liste de themes selectionnables dans le menu.
- Ajout des themes sombres : Midnight Garage, AIR-KLM Night flight, Cafe Serre, Matrix Deja Vu, Miami Vice 1987, Cyber Licorne.
- Ajout des themes clairs : AIR-KLM Day flight, Matin Brumeux, Latte Vanille, Miellerie La Divette.
- Ajout des themes Pouet : Chewing-gum Ocean, Pamplemousse, Raisin Toxique, Citron qui pique, Barbie Apocalypse, Compagnie Creole.
- Application immediate du theme choisi.
- Sauvegarde du theme choisi dans le navigateur.

### Fichiers

- Creation de `klm-surveillant-esp32-cam-v0.1.html` comme nouvelle page de surveillance autonome.
- Conservation des anciens fichiers `KLMesp32camMULTIflux - V17.html` et `KLMesp32camMULTIflux - V18.html`.
- Ajout du fichier `surveillant.png` dans le dossier de la page.
- Creation et mise a jour de `CHANGELOG.md`.

## Surveillant v1.3.3 - 2026-08-03

- Correction du bug ou les cameras etaient en ligne mais sans image apres un test d'affichage en balise image.
- Retour a l'affichage des flux en `iframe`, compatible avec le firmware ESP32-CAM utilise.
- Conservation du zoom dynamique dans la vue agrandie.

## Surveillant v1.3.2 - 2026-08-03

- Ajustement du format de la fenetre agrandie pour reduire les bandes noires laterales.
- Adaptation de la largeur de la fenetre au ratio 4:3 du flux camera.

## Surveillant v1.3.1 - 2026-08-03

- Correction de la fenetre agrandie vide.
- Deplacement temporaire du flux existant dans la fenetre agrandie au lieu d'ouvrir un second flux.
- Restauration du flux dans sa carte lors de la fermeture.

## Surveillant v1.3.0 - 2026-08-03

- Ajout des commandes d'affichage par camera : rotation 90 degres, miroir horizontal et agrandissement.
- Memorisation de la rotation et du miroir par camera.
- Remplacement des libelles `90°`, `Mirror` et `Agrandir` par les icones `⤾`, `⇄` et `⛶`.
- Ajout de couleurs dediees aux boutons de rotation, miroir et agrandissement.

## Surveillant v1.2.0 - 2026-08-03

- Ajout des captures individuelles via `/capture`.
- Ajout de l'horodatage visible dans l'en-tete.
- Ajout de l'horodatage dans les messages et noms de fichiers de capture.
- Remplacement des boutons LED ON/OFF par un bouton unique `LED ⏻`.
- Ajout du bouton global `LED ⏻`.
- Remplacement des boutons de rafraichissement par l'icone `↻`.

## Surveillant v1.1.0 - 2026-08-03

- Ajout du menu de configuration.
- Ajout de l'assignation des IP pour 9 cameras.
- Ajout de la selection de themes.
- Ajout du choix de dossier de capture quand le navigateur le permet.
- Ajout de la sauvegarde des reglages dans le navigateur.

## Surveillant v1.0.0 - 2026-08-03

- Premiere version exploitable de `Surveillant`.
- Creation de la grille de surveillance maison basee sur des IP fixes.
- Configuration initiale avec deux cameras : `192.168.1.2` et `192.168.1.4`.
- Ajout des statuts en ligne/hors ligne.
- Ajout des commandes LED, capture, rafraichissement et agrandissement de base.

## KLMesp32camMULTIflux - V18 - 2024-12-26

- Passage du titre de V17 a V18.
- Ajout de deux cameras par rapport a V17 : camera jaune et camera rouge.
- Conservation de la logique historique par prefixe reseau/passerelle.

## KLMesp32camMULTIflux - V17 - 2024-12-17

- Version historique de la page multi-flux ESP32-CAM.
- Utilisation d'un champ de passerelle/prefixe reseau pour generer les IP.
- Affichage de plusieurs flux camera dans une grille.
- Boutons LED ON/OFF par camera.
- Bouton de rafraichissement.
