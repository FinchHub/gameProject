#include <iostream>
#include <vector>
#include <random>

enum GameStatus {
    ONGOING,
    P1_WINS,
    P2_WINS,
    DRAW,
};

std::vector<std::vector<char>> placePlayers() {
    std::vector<std::vector<char>> board; 

    //Place an X and O on the board where the grid is equal to '.' Ignore "#" and "C"
}

void startGame() {

}



//To-do:
//
//1. Place players, print the board.
//2. Movement for direction.
//3. Chip collection
//4. Full sliding in all directions
//5. Turn logic/Scoring
//6. GameState detection? GameStatus updates
