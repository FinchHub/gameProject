#include <iostream>
#include <limits>
#include <vector>
#include <random>
#include "board.hpp"

class Player{
public:
    char icon;
    int row, col;
    int score = 0;
};

enum GameStatus {
    ONGOING,
    P1_TURN,
    P2_TURN,
    P1_WINS,
    P2_WINS,
    DRAW,
};

Player player1{'X', 0, 0, 0};
Player player2{'O', 0, 0, 0,};

std::vector<std::vector<char>> placePlayers(std::vector<std::vector<char>> board) {

    std::random_device seeder;
    std::mt19937 engine(seeder());
    std::uniform_int_distribution<int> dist(0, 7);

    int row, col;

    do {
        row = dist(engine);
        col = dist(engine);
    } while (board[row][col] != '.');
    board[row][col] = 'X';
    player1.row = row;
    player1.col = col;
    
    do {
        row = dist(engine);
        col = dist(engine);
    } while (board[row][col] != '.');
    board[row][col] = 'O';
    player2.row = row;
    player2.col = col;

    return board;
}

std::vector<std::vector<char>> movePlayer(std::vector<std::vector<char>>& board) {
   
    int row, col;
    char moveDirection;

    std::cout << "(X) PLAYER 1: Select a direction (W/A/S/D): ";
    if (!(std::cin >> moveDirection)) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid direction. Select a valid direction.\n";
            std::cout << "(X) PLAYER 1: Select a direction (W/A/S/D): ";
        }
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (moveDirection == 'W' || moveDirection == 'w') {
        while (player1.row > 0 && (board[player1.row - 1][player1.col] != '#') && (board[player1.row - 1][player1.col] != 'O'))  {
            board[player1.row][player1.col] = '.';
            if (board[player1.row - 1][player1.col] == 'C') {
                player1.score++;
            }
            board[player1.row - 1][player1.col] = 'X';
            player1.row -= 1;
        } 
        return board;
    } else if (moveDirection == 'A' || moveDirection == 'a') {
        while (player1.col > 0 && (board[player1.row][player1.col - 1] != '#') && (board[player1.row][player1.col - 1] != 'O'))  {
            board[player1.row][player1.col] = '.';
            if (board[player1.row][player1.col - 1] == 'C') {
                player1.score++;
            }
            board[player1.row][player1.col - 1] = 'X';
            player1.col -= 1;
        } 
        return board;
    } else if (moveDirection == 'S' || moveDirection == 's') {
        while (player1.row < 7 && (board[player1.row + 1][player1.col] != '#') && (board[player1.row + 1][player1.col] != 'O'))  {
            board[player1.row][player1.col] = '.';
            if (board[player1.row + 1][player1.col] == 'C') {
                player1.score++;
            }
            board[player1.row + 1][player1.col] = 'X';
            player1.row += 1;
        } 
        return board;

    } else if (moveDirection == 'D' || moveDirection == 'd') {
        while (player1.col < 7 && (board[player1.row][player1.col + 1] != '#') && (board[player1.row][player1.col + 1] != 'O'))  {
            board[player1.row][player1.col] = '.';
            if (board[player1.row][player1.col + 1] == 'C') {
                player1.score++;
            }
            board[player1.row][player1.col + 1] = 'X';
            player1.col += 1;
        } 
        return board;
    } else {
        std::cout << "Invalid direction!\n";
        return board;
    }

}

void playGame(std::vector<std::vector<char>> board) {
   GameStatus status = P1_TURN;

    while (status == P1_TURN || status == P2_TURN) {
        printBoard(board);
        std::cout << "(X) Player 1: " << player1.score << "     (O) Player 2: " << player2.score << std::endl;

        if (status == P1_TURN) {
            //set the board equal to the result of movePlayer?
            status = P2_TURN;
        } else if (status == P2_TURN) {
            // same thing
            status = P1_TURN;
        }

        //Add a win condition here? Checks if any chips remain, maybe set a counter

    }
}



//To-do:
//2. Movement for direction.
//3. Chip collection
//4. Full sliding in all directions
//5. Turn logic/Scoring
//6. GameState detection? GameStatus updates
