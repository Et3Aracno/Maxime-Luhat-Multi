# Documentation du projet

## 1. Concept

### Règles du jeu
- Le jeu se joue à **2 joueurs**.
- Chaque joueur contrôle un **robot**.
- Les déplacements se font avec **ZQSD**.
- Le joueur peut :
  - **Zoomer** avec le clic droit de la souris
  - **Tirer** avec le clic gauche
  - **Sauter** avec la touche **Espace**
  - **Menu** avec la touche **M**
- Le jeu est composé de **2 trials** :
  1. **Labyrinthe** : progression et navigation dans l’environnement
  2. **Destruction de cibles** : éliminer des cibles à l’aide du tir
- Pour terminer la partie, les joueurs doivent **compléter toutes les trials**.
- L’objectif est d’obtenir le **meilleur temps possible**.

---

### Règles du jeu
- Un joueur peut **héberger une partie** (Host).
- Les autres joueurs peuvent **rejoindre la partie** via l’adresse IP.
- Tous les joueurs sont synchronisés en temps réel.
- Les actions principales (déplacement, tirs, explosions) sont gérées par le serveur.
- Une condition de fin déclenche un **écran de fin** avec affichage du temps.

---

▶️ Lancement du jeu

Pour lancer une partie multijoueur, il est nécessaire d’exécuter le jeu deux fois sur le même PC, les tests sur plusieurs machines n’ayant pas pu être effectués en raison de contraintes matérielles.
Une fois dans le menu principal, cliquez sur Play, puis sur Host si aucune partie n’est encore hébergée.
Le second joueur peut ensuite rejoindre la partie en utilisant l’adresse IP locale 127.0.0.1, ou en entrant manuellement l’adresse IP du serveur dans la boîte de texte située au-dessus du bouton Join.
