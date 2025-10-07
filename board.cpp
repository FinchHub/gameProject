#include <iostream>
#include <vector>

// build obstacles, place players, and change gamestate?
std::vector<std::vector<char>> makeBoard(){
    std::vector<std::vector<char>> board(16, std::vector<char>(16, '.'));   

    board[7][7] = '#';
    board[7][8] = '#';
    board[8][7] = '#';
    board[8][8] = '#';

    return board;
}

void printBoard(std::vector<std::vector<char>>& board){
   for (int row = 0; row<16; row++) {
        for (int col = 0; col < 16; col++){
            std::cout << board[row][col] << " ";
        }
        std::cout << "\n";
    }
}


