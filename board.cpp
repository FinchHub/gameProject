#include <iostream>
#include <vector>
#include <random>

// build obstacles, place players, and change gamestate?
std::vector<std::vector<char>> makeBoard(){
    std::vector<std::vector<char>> board(16, std::vector<char>(16, '.'));   
    
    //Rand logic pulled from stackoverflow. First time using it.
    //https://stackoverflow.com/questions/12657962/how-do-i-generate-a-random-number-between-two-variables-that-i-have-stored
    std::random_device seeder;
    std::mt19937 engine(seeder());
    std::uniform_int_distribution<int> dist(1,2);

    //Default obstacle. Do not modify
    board[7][7] = '#';
    board[7][8] = '#';
    board[8][7] = '#';
    board[8][8] = '#';

    //Using two presets in this stage because randomly generating them is going to be hellish at my skill level
    //Board preset 1
    auto board1 = board;
    board1[1][1] = '#';
    board1[1][2] = '#';
    board1[2][1] = '#';

    //Board preset 2
    auto board2 = board;
    board2[10][10] = '#';
    board2[9][10] = '#';
    board2[10][9] = '#';

    int randSel = dist(engine);

    if (randSel == 1) {
        return board1;
    } else {
        return board2;
    }
}

void printBoard(std::vector<std::vector<char>>& board){
   for (int row = 0; row<16; row++) {
        for (int col = 0; col < 16; col++){
            std::cout << board[row][col] << " ";
        }
        std::cout << "\n";
    }
}


