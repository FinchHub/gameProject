#include <iostream>
#include <vector>

// Board will be 16x16 with 4x4 center square, random-gen walls?
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
void play(){

}

void gameStatus(){ }



int main() {
    char board[16][16];

    makeBoard(board);
    printBoard(board);
}
