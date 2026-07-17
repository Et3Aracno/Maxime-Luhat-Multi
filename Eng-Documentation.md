# Project Documentation

## 1. Concept

### Pitch

A multiplayer game developed with **Unreal Engine 5.6**, playable over a **Local Area Network (LAN)**, in which players control **robots**. The game is designed to be played with **exactly two players**.

The objective is to cooperate (or progress in parallel) to complete several **trials** in the **shortest time possible**. The total completion time is measured from the beginning to the end of the game using an **in-game timer** visible to both players.

---

### Game Rules

- The game is played by **2 players**.
- Each player controls a **robot**.
- Movement is controlled using **WASD**.
- The player can:
  - **Zoom** with the right mouse button
  - **Shoot** with the left mouse button
  - **Jump** with the **Spacebar**
- The game consists of **2 trials**:
  1. **Maze**: progress and navigate through the environment
  2. **Target Destruction**: eliminate targets using your weapon
- To complete the game, players must **finish all trials**.
- The objective is to achieve the **best possible time**.

---

### Multiplayer Rules

- One player can **host a game** (Host).
- Other players can **join the game** using the server's IP address.
- All players are synchronized in real time.
- Main actions (movement, shooting, explosions) are handled by the server.
- A completion condition triggers an **end screen** displaying the final time.

---

## 2. Implemented Features

### Multiplayer

- Local multiplayer (LAN)
- Player-hosted game sessions (Host)
- Join a game using an IP address
- Input field allowing players to manually enter the server IP address
- Connection using a local IP address
- **Authoritative client/server** architecture
- Real-time player synchronization

### Gameplay

- Robot movement (WASD)
- Jump (Spacebar)
- Camera zoom (right mouse button)
- Projectile shooting (left mouse button)
- Target destruction
- Functional collision system (projectiles/environment)

### Customization

- **Robot skin** system
- In-game skin selection menu accessible with the **M** key
- Skin data stored in the **PlayerState** and replicated across the network

### User Interface

- Main menu (Host / Join)
- In-game menu (**M** key)
- Leave Game button
- Restart button (Host only)
- In-game timer
- End-of-game screen displaying the final completion time
- Video Settings button
- Music & Sound button
- Control Settings button

---

## 3. Features Not Implemented

### Online Multiplayer (Internet)

The game only supports Local Area Network (LAN) multiplayer.

Online server management was not implemented due to time and hardware limitations.

### Host Migration

Unreal Engine does not provide a simple built-in solution for transferring the host role.

This feature was considered too complex for the scope of the project.

### Persistent Leaderboards / Scores

No save system or leaderboard has been implemented.

The completion time is displayed only at the end of the game.

### Video Settings

There is currently no option to modify graphics quality settings.

### Audio Settings

There is currently no option to modify audio settings.

### Control Settings

There is currently no option to remap key bindings.

### Player Limit / Auto-Kick

No security checks are performed when players connect.

No maximum player limit has been defined.

---

## 4. Network Architecture (Logical Diagram)

### Network Model

The game uses an **authoritative client/server** architecture over a **Local Area Network (LAN)**.

- One player hosts the session and becomes the **Host/Server**.
- The second player joins the game as a **Client**.
- All important gameplay actions are validated and synchronized by the server.

---

### Simplified Diagram

```text
[ Client ]                         [ Server / Host ]
   |                                       |
   | Player inputs (movement, shoot, jump) |
   |-------------------------------------->|
   |                                       |
   |           Game Logic                  |
   |   (rules, timer, end of game)         |
   |                                       |
   |<--------------------------------------|
   | Replication (positions, skins)        |
   |                                       |
```

---

### Main Class Responsibilities

- **GameMode** (Server Only)

  - Manages the game rules
  - Handles game start and end
  - Controls the *Restart* action (Host only)

- **PlayerController**

  - Handles local player inputs
  - Sends player actions to the server

- **PlayerState**

  - Stores player-specific data (e.g., SkinID)
  - Data is automatically replicated to all players

- **Character (Robot)**

  - Replicated movement
  - Visual actions (shooting, animations)

- **Widgets (UI)**

  - Managed locally on each machine
  - Menus, timer, and end-game screen

```text
        [ Client ]
             |
             | Player Inputs
             v
        [ Server ]
   --------------------------------
   | GameMode (Server Only)        |
   | PlayerController              |
   | PlayerState (Replicated)      |
   | Gameplay Authority            |
   --------------------------------
             |
             | Network Replication
             v
      [ Connected Clients ]
```

### Responsibility Breakdown

- **GameMode**

  - Server only
  - Manages game rules and game flow

- **PlayerController**

  - Handles local player inputs

- **PlayerState**

  - Replicated player data (skin, score, state)

- **Character**

  - Replicated movement
  - Visual actions

- **Widgets**

  - Local only
  - User interface display

---

## 5. External Assets Used

| Type | Asset | Source |
|------|-------|--------|
| Engine | Unreal Engine 5.6 | Epic Games |
| Base Content | Starter Content | Epic Games |
| Visual Effects | Niagara (explosions, effects) | Epic Games (FAB) |
| Visual Effects | Materials | Epic Games (FAB) |
| Audio | Cyber-Metal Music | Epic Games (FAB) |
| 3D Models | Player | Epic Games (FAB) |
| 3D Models | Turret | Epic Games (FAB) |
| 3D Models | Projectiles | Sketchfab |
| 3D Models | Environment | Epic Games (FAB) |
| UI | User Interface | Generated (Google Gemini) |

No assets subject to restrictive licensing were used.

---

## 6. Conclusion

This project implements a fully functional **local multiplayer game** based on an **authoritative client/server** network architecture. It demonstrates the use of Unreal Engine's core multiplayer concepts, including network replication, PlayerState management, user interface development, and gameplay logic.

The implemented features fully meet the objectives defined in the project specifications while respecting the project's technical and time constraints.
