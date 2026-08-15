 # Tic Tac Toe Game in C++

A simple console-based Tic Tac Toe game developed using C++. The project supports both two-player mode and player-versus-computer mode.

## Features

* Two-player game mode
* Player vs Computer mode
* 3×3 Tic Tac Toe board
* Input validation
* Prevents players from selecting an occupied position
* Automatic winner detection
* Draw detection
* Computer can try to win
* Computer can block the player's winning move
* Computer prioritizes the center position

## Technologies Used

* C++
* Object-oriented programming concepts
* Functions
* Arrays
* Loops
* Conditional statements
* Basic game logic

## How to Run

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/tic-tac-toe-cpp.git
```

### 2. Open the project

Open the project folder in Visual Studio Code.

### 3. Compile the program

```bash
g++ tic_tac_toe.cpp -o tic_tac_toe
```

### 4. Run the program

On Windows:

```bash
.\tic_tac_toe
```

## How to Play

When the program starts, choose:

```text
1. Two Players
2. Play with Computer
```

The board positions are:

```text
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

Enter the number corresponding to the position where you want to place your symbol.

## Game Logic

The program checks:

1. Rows for a winning combination
2. Columns for a winning combination
3. Both diagonals for a winning combination
4. Whether all positions are occupied for a draw

In computer mode, the computer follows a simple strategy:

1. Try to win
2. Block the player's winning move
3. Take the center
4. Select the first available position

## Project Structure

```text
tic-tac-toe-cpp/
│
├── tic_tac_toe.cpp
└── README.md
```

## Learning Outcomes

This project helped me practice:

* C++ syntax and programming fundamentals
* 2D arrays
* Functions
* Loops
* Conditional statements
* Boolean functions
* User input handling
* Basic problem-solving and game logic
* Debugging and testing

## Future Improvements

* Add difficulty levels
* Add score tracking
* Add a graphical user interface
* Improve computer AI using the Minimax algorithm
* Add replay functionality

## Author

Anurag Pandey

B.Tech Information Technology
