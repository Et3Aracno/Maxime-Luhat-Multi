# 📄 Documentation du projet

## 1. Concept

### 🎮 Pitch
Jeu multijoueur développé avec **Unreal Engine 5.6**, jouable en **multijoueur local (LAN)**, dans lequel les joueurs incarnent des **robots**. Le jeu se joue obligatoirement à **deux joueurs minimum et maximum**.

L’objectif est de coopérer (ou progresser en parallèle) pour terminer plusieurs **épreuves (trials)** dans le **temps le plus court possible**. Le temps total est mesuré du début à la fin de la partie grâce à un **timer visible en jeu**.

---

### 📜 Règles du jeu
- Le jeu se joue à **2 joueurs**.
- Chaque joueur contrôle un **robot**.
- Les déplacements se font avec **ZQSD**.
- Le joueur peut :
  - **Zoomer** avec le clic droit de la souris
  - **Tirer** avec le clic gauche
  - **Sauter** avec la touche **Espace**
- Le jeu est composé de **2 trials** :
  1. **Labyrinthe** : progression et navigation dans l’environnement
  2. **Destruction de cibles** : éliminer des cibles à l’aide du tir
- Pour terminer la partie, les joueurs doivent **compléter toutes les trials**.
- L’objectif est d’obtenir le **meilleur temps possible**.

---



### 📜 Règles du jeu
- Un joueur peut **héberger une partie** (Host).
- Les autres joueurs peuvent **rejoindre la partie** via l’adresse IP.
- Tous les joueurs sont synchronisés en temps réel.
- Les actions principales (déplacement, tirs, explosions) sont gérées par le serveur.
- Une condition de fin déclenche un **écran de fin** avec affichage du temps.

---

## 2. Fonctionnalités réalisées

### 🔌 Multijoueur
- Multijoueur local (LAN)
- Hébergement de partie par un joueur (Host)
- Rejoindre une partie via adresse IP
- Architecture **client / serveur autoritaire**
- Synchronisation des joueurs en temps réel

### 🤖 Gameplay
- Déplacement du robot (ZQSD)
- Saut (Espace)
- Zoom de la caméra (clic droit)
- Tir de projectiles (clic gauche)
- Destruction de cibles
- Collisions fonctionnelles (projectiles / environnement)

### 🎨 Personnalisation
- Système de **skins de robot**
- Menu de sélection des skins accessible en jeu avec la touche **M**
- Données de skin stockées dans le **PlayerState** et répliquées

### 🖥️ Interface utilisateur
- Menu principal (Host / Join)
- Menu en jeu (touche **M**)
- Bouton Quitter la partie
- Bouton Restart (réservé à l’hôte)
- Timer affiché en jeu
- Écran de fin de partie affichant le temps final

---



## 3. Fonctionnalités non réalisées

### ❌ Multijoueur en ligne (Internet)
- Le jeu fonctionne uniquement en **réseau local (LAN)**
- La gestion de serveurs en ligne n’a pas été implémentée par manque de temps

### ❌ Migration de l’hôte
- Unreal Engine ne propose pas de solution native simple pour le transfert de rôle d’hôte
- Fonctionnalité jugée trop complexe pour le cadre du projet

### ❌ Classements / Scores persistants
- Aucun système de sauvegarde ou de leaderboard
- Le temps est affiché uniquement à la fin de la partie

---



## 4. Architecture réseau (schéma logique)

### 🧠 Modèle réseau utilisé
Le jeu utilise une architecture **client / serveur autoritaire** en **multijoueur local (LAN)**.

- Un joueur héberge la partie et devient le **serveur (Host)**.
- Le second joueur rejoint la partie en tant que **client**.
- Toutes les actions importantes sont validées et synchronisées par le serveur.

---

### 📐 Schéma simplifié

```
[ Client ]                         [ Serveur / Host ]
   |                                       |
   | Inputs (déplacement, tir, saut)       |
   |-------------------------------------->|
   |                                       |
   |        Logique du jeu                 |
   |   (règles, timer, fin de partie)      |
   |                                       |
   |<--------------------------------------|
   |     Réplication (positions, skins)    |
   |                                       |
```

---

### 🧩 Rôle des classes principales

- **GameMode** (Serveur uniquement)
  - Gère les règles du jeu
  - Gère le démarrage et la fin de la partie
  - Contrôle l’action *Restart* (réservée à l’hôte)

- **PlayerController**
  - Gère les inputs du joueur local
  - Communique les actions au serveur

- **PlayerState**
  - Stocke les données propres au joueur (ex : SkinID)
  - Données automatiquement répliquées à tous les joueurs

- **Character (Robot)**
  - Déplacement répliqué
  - Actions visuelles (tir, animations)

- **Widgets (UI)**
  - Gérés localement sur chaque machine
  - Menus, timer, écran de fin

---

--------------------------->|
                |                   
                v
           [ Serveur ]
        (PlayerController,
         GameMode,
         Autorité gameplay)
                |
                | Réplication
                v
        [ Tous les clients ]
```

### 🧠 Répartition des rôles

- **GameMode** :
  - Serveur uniquement
  - Gère les règles et le flow de la partie

- **PlayerController** :
  - Gère les inputs locaux

- **PlayerState** :
  - Données répliquées (skin, score, état)

- **Character** :
  - Mouvement répliqué
  - Actions visuelles

- **Widgets** :
  - Local uniquement
  - Affichage UI

---

## 5. Assets externes utilisés

| Type | Nom | Source |
|---|---|---|
| Moteur | Unreal Engine 5.6 | Epic Games |
| Contenu de base | Starter Content | Epic Games |
| Effets visuels | Niagara (explosions, effets) | Unreal Engine |
| Sons | Aucun ou à compléter | — |
| Modèles 3D | Assets internes / Starter Content | Epic Games |

👉 Aucun asset soumis à licence restrictive n’a été utilisé. Le projet repose principalement sur les outils et contenus fournis par Unreal Engine.

---

## 6. Conclusion

Ce projet met en œuvre un **jeu multijoueur local fonctionnel** reposant sur une architecture réseau client / serveur autoritaire. Il démontre la maîtrise des concepts fondamentaux d’Unreal Engine : réplication réseau, gestion des PlayerState, interface utilisateur et logique de gameplay.

Les fonctionnalités implémentées répondent pleinement aux objectifs du cahier des charges, tout en respectant les contraintes techniques et temporelles du projet.

