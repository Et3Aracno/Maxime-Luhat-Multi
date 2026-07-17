# Project Documentation
The source code available above is not the most recent version of the project. This is due to GitHub's push size limitations and the large game assets included in the project.
## 1. Concept

### Game Rules

- The game is played by **2 players**.
- Each player controls a **robot**.
- Movement is controlled using **WASD**.
- The player can:
  - **Zoom** with the right mouse button
  - **Shoot** with the left mouse button
  - **Jump** with the **Spacebar**
  - Open the **Menu** with the **M** key
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

## Launching the Game

To start a multiplayer session, the game must be launched twice on the same PC, as testing on multiple machines could not be performed due to hardware limitations.

Once in the main menu, click **Play**, then click **Host** if no session is currently being hosted.

The second player can then join the session using the local IP address **127.0.0.1**, or by manually entering the server's IP address in the text box located above the **Join** button.
