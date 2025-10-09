Project 01: Turn-Based Grid Game  

## Objective  
In this project, you will implement a turn-based, grid-based game from the preapproved list or another game with instructor approval. The game will enforce proper structure, input validation, and modular programming principles.  

---

## Project Requirements  

### 1. Game Selection  
- Choose a turn-based, grid-based game from the preapproved list provided in the assignment description.  
- **TicTacToe and Connect4 are NOT allowed!**  
- If you wish to implement a game not on the list, you must seek instructor approval before proceeding.  

### 2. Core Functionality & Structure  
Your game should include the following core functions, at a minimum:  

**a. `makeBoard()`**  
- Initializes the game board and prepares it for play.  

**b. `play()`**  
- Handles turn logic, allowing players to take actions on their turn.  

**c. `gameStatus()`**  
- Determines if the game is still ongoing or if there is a winner.  
- Should return an enumeration representing the game state (e.g., `ONGOING`, `PLAYER_1_WINS`, `PLAYER_2_WINS`, `DRAW`).  

**d. Input Handling & Validation**  
- No user input should crash the game.  
- Protect against mistyped or invalid input by prompting users again if they enter something unexpected.  

**e. Rules Explanation**  
- Your program must print out the rules to the console at the beginning so the user understands how to play.  

**f. Multiple Games & Exit Option**  
- After one game finishes, the user should be given the option to play again or exit the program.  

**g. Proper Code Organization**  
- The `main()` function should be small and only handle high-level game flow.  
- Most game logic should be implemented inside functions, rather than in `main()`.  
- Core game functions (e.g., `makeBoard()`, `play()`, `gameStatus()`) should not handle user input directly—instead, get user input separately and pass it into functions as needed.  

**h. Use of Enumerations**  
- Use enumerations (`enum` or `enum class`) to represent game tokens, game state, or board state instead of using raw integers or characters.  

**i. Files**  
- I will run `main.cpp`, but you can (and maybe should) include other files.
