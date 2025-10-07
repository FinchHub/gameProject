#include <ios>
#include <iostream>
#include <vector>
#include <limits>
#include "board.hpp"
#include "game.hpp"

// board gens but remember to add 2x2 hash in center inaccessible to players.
// build obstacles, place players, and change gamestate?
void makeBoard(char board[16][16]){
    const int BOARD_LENGTH = 16;
    const int BOARD_SIZE = BOARD_LENGTH * BOARD_LENGTH;
    
    for (int row = 0; row < BOARD_LENGTH; row++){
        for (int col = 0; col < BOARD_LENGTH; col++){
            board[row][col] = '.';
        }
    }
}

void printBoard(char board[16][16]){
   for (int row = 0; row<16; row++) {
        for (int col = 0; col < 16; col++){
            std::cout << board[row][col] << " ";
        }
        std::cout << "\n";
    }
}
void play(char board[16][16]){

}

void gameStatus(){
    enum GameState {
        ONGOING,
        PLAYER1_WINS,
        PLAYER2_WINS,
        DRAW,
    };
}



int main() {
    char board[16][16];
    int menuOption;

    while (true) {
        std::cout << "===== RICOCHET ROBOTS =====\n"
                  << "1. Play\n"
                  << "2. Exit\n"
                  << "Make a choice (1-2): ";

        if (!(std::cin >> menuOption)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "INVALID MENU OPTION. Enter '1' or '2'.\n";
            continue;
            }

        if (menuOption == 1) {
            play(board);
            break;
        } else if (menuOption == 2) {
            return 0;
        } else {
            std::cout << "INVALID MENU OPTION. Enter '1' or '2'.\n";
        }
    }

    makeBoard(board);
    printBoard(board);
}
