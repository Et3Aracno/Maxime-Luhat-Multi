# Project Documentation
The source code available above is not the most recent version of the project. This is due to GitHub's push size limitations and the large game assets included in the project.

## Game Rules

- The game is a **2-player multiplayer experience**.
- One player can **host a game**, while the other players can join using the **server's IP address**.
- Each player controls a **robot**, and the main actions are synchronized in real time between players.
- Player movements and main interactions are handled by the server to ensure a consistent multiplayer experience.

### Controls

- Movement: **WASD / ZQSD**
- Shoot: **Left mouse button**
- Zoom: **Right mouse button**
- Jump: **Space**
- Open menu: **M**

### Objective

The game is composed of **2 trials** that players must complete in order to finish the game:

1. **Maze**: navigate through the environment and reach the end of the path.
2. **Target Destruction**: eliminate different targets using the shooting system.

Players must successfully complete all trials while achieving the **best possible time**. Once all trials are completed, a **final screen** displays the players' completion time.
---

## Launching the Game

To start a multiplayer session, the game must be launched twice on the same PC, as testing on multiple machines could not be performed due to hardware limitations.

Once in the main menu, click **Play**, then click **Host** if no session is currently being hosted.

The second player can then join the session using the local IP address **127.0.0.1**, or by manually entering the server's IP address in the text box located above the **Join** button.
