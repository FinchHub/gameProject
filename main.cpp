#include <iostream>
#include <vector>
#include <limits>
#include "board.hpp"
#include "game.hpp"


int main() {
    std::vector<std::vector<char>> board = makeBoard();

    int menuOption;

    while (true) {
        std::cout << "===== RICOCHET ROBOTS =====\n"
                  << "1. Play\n"
                  << "2. Exit\n"
                  << "Make a choice (1-2): ";

        //Added because I use linux and hitting ctrl+d otherwise made it infinitely loop.
        //Was getting extremely annoying.
        if (std::cin.eof()) {
            std::cout << "\nEOF detected. Exiting.\n";
            return 0;
        }

        if (!(std::cin >> menuOption)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "INVALID MENU OPTION. Enter '1' or '2'.\n";
            continue;
            }

        if (menuOption == 1) {
            board = placePlayers(board);
            printBoard(board);
            //call play();
            break;
        } else if (menuOption == 2) {
            return 0;
        } else {
            std::cout << "INVALID MENU OPTION. Enter '1' or '2'.\n";
        }
    }
}

