#include <iostream>
#include <vector>

// board gens but remember to add 2x2 hash in center inaccessible to players.
// build obstacles, place players, and change gamestate?
void makeBoard(std::vector<std::vector<char>>& board){
    board = std::vector<std::vector<char>>(16, std::vector<char>(16, '.'));   
}

void printBoard(std::vector<std::vector<char>>& board){
   for (int row = 0; row<16; row++) {
        for (int col = 0; col < 16; col++){
            std::cout << board[row][col] << " ";
        }
        std::cout << "\n";
    }
}

