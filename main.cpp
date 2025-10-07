#include <ios>
#include <iostream>
#include <vector>
#include <limits>
#include "board.hpp"
#include "game.hpp"

void play(){

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
    std::vector<std::vector<char>> board;
    makeBoard(board);

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
            //play
            break;
        } else if (menuOption == 2) {
            return 0;
        } else {
            std::cout << "INVALID MENU OPTION. Enter '1' or '2'.\n";
        }
    }
    printBoard(board);
}

