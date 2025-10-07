#include <iostream>
#include <vector>
#include <random>

std::vector<std::vector<char>> makeBoard(){
    std::vector<std::vector<char>> board(8, std::vector<char>(8, '.'));   
    
    //Rand logic pulled from stackoverflow. First time using it.
    //https://stackoverflow.com/questions/12657962/how-do-i-generate-a-random-number-between-two-variables-that-i-have-stored
    std::random_device seeder;
    std::mt19937 engine(seeder());
    std::uniform_int_distribution<int> dist(1,2);

    //Randomly generating a map and ensuring it's solvable is way beyond my skill level.
    //As much of a pain it is to handmake a solvable map, it's the only alternative I can think of.
    //Better implementation suggestions would be very much appreciated!

    //Board preset 1
    auto board1 = board;
    int b1walls[][2] = {
        {0, 2}, {0, 6},
        {1, 2}, {1, 5},
        {2, 4},
        {3, 0}, {3, 3}, {3, 4},
        {4, 2}, {4, 3}, {4, 4}, {4, 6},
        {5, 1}, {5, 5},
        {7, 4}
    };

    int b1chips[][2] = {
        {6, 2},
        {6, 5},
        {2, 7},
        {4, 0}
    };
    
    for (auto& w : b1walls) board1[w[0]][w[1]] = '#';
    for (auto& c : b1chips) board1[c[0]][c[1]] = 'C';

    //Board preset 2
    auto board2 = board;
    int b2walls[][2] = {
        //{0, 4},
        {1, 1}, {1, 5},
        {2, 0}, {2, 3}, {2, 7},
        {3, 2}, {3, 3},
        {4, 1}, {4, 5}, {4, 6},
        {5, 3},
        {6, 6},
        {7, 0}
    };

    // Chips
    int b2chips[][2] = {
        {6, 1},
        {6, 4},
        {1, 6},
        {4, 2}
    };

    for (auto& w : b2walls) board2[w[0]][w[1]] = '#';
    for (auto& c : b2chips) board2[c[0]][c[1]] = 'C';

    int randSel = dist(engine);

    if (randSel == 1) {
        return board1;
    } else {
        return board2;
    }
}

void printBoard(std::vector<std::vector<char>>& board){
   for (int row = 0; row<8; row++) {
        for (int col = 0; col < 8; col++){
            std::cout << board[row][col] << " ";
        }
        std::cout << "\n";
    }
}


