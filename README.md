# Documentation du projet
Prenez note que le code disponible ci-dessus n'est pas la version la plus récente. Cela est dû à la limite de taille des push GitHub ainsi qu'aux assets présents dans le jeu.

## Règles du jeu

- Le jeu se joue à **2 joueurs en multijoueur**.
- Un joueur peut **héberger une partie (Host)**, tandis que les autres joueurs peuvent la rejoindre via l’**adresse IP du serveur**.
- Chaque joueur contrôle un **robot** et les actions principales sont synchronisées en temps réel entre les joueurs.
- Les déplacements et interactions sont gérés par le serveur afin de garantir une expérience multijoueur cohérente.

### Contrôles

- Déplacement : **ZQSD**
- Tir : **Clic gauche de la souris**
- Zoom : **Clic droit de la souris**
- Saut : **Espace**
- Ouverture du menu : **M**

### Objectif

Le jeu est composé de **2 trials** que les joueurs doivent compléter afin de terminer la partie :

1. **Labyrinthe** : progresser dans l’environnement et atteindre la fin du parcours.
2. **Destruction de cibles** : éliminer différentes cibles à l’aide du système de tir.

Les joueurs doivent réussir l’ensemble des épreuves tout en obtenant le **meilleur temps possible**. Une fois les trials terminés, un **écran de fin** affiche le temps réalisé par les joueurs.
---

▶️ Lancement du jeu

Pour lancer une partie multijoueur, il est nécessaire d’exécuter le jeu deux fois sur le même PC, les tests sur plusieurs machines n’ayant pas pu être effectués en raison de contraintes matérielles.
Une fois dans le menu principal, cliquez sur Play, puis sur Host si aucune partie n’est encore hébergée.
Le second joueur peut ensuite rejoindre la partie en utilisant l’adresse IP locale 127.0.0.1, ou en entrant manuellement l’adresse IP du serveur dans la boîte de texte située au-dessus du bouton Join.
