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

std::vector<std::vector<char>> placePlayers(std::vector<std::vector<char>> board, Player& player1, Player& player2) {

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

std::vector<std::vector<char>> movePlayer(std::vector<std::vector<char>>& board, Player& current, Player& opponent, std::string playerStr) {
   
    int row, col;
    char moveDirection;

    std::cout << playerStr << ": Select a direction (W/A/S/D): ";
    if (!(std::cin >> moveDirection)) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid direction. Select a valid direction.\n";
            std::cout << playerStr << ": Select a direction (W/A/S/D): ";
        }
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (moveDirection == 'W' || moveDirection == 'w') {
        while (current.row > 0 && (board[current.row - 1][current.col] != '#') && (board[current.row - 1][current.col] != opponent.icon))  {
            board[current.row][current.col] = '.';
            if (board[current.row - 1][current.col] == 'C') {
                current.score++;
            }
            board[current.row - 1][current.col] = current.icon;
            current.row -= 1;
        } 
        return board;
    } else if (moveDirection == 'A' || moveDirection == 'a') {
        while (current.col > 0 && (board[current.row][current.col - 1] != '#') && (board[current.row][current.col - 1] != opponent.icon))  {
            board[current.row][current.col] = '.';
            if (board[current.row][current.col - 1] == 'C') {
                current.score++;
            }
            board[current.row][current.col - 1] = current.icon;
            current.col -= 1;
        } 
        return board;
    } else if (moveDirection == 'S' || moveDirection == 's') {
        while (current.row < 7 && (board[current.row + 1][current.col] != '#') && (board[current.row + 1][current.col] != opponent.icon))  {
            board[current.row][current.col] = '.';
            if (board[current.row + 1][current.col] == 'C') {
                current.score++;
            }
            board[current.row + 1][current.col] = current.icon;
            current.row += 1;
        } 
        return board;

    } else if (moveDirection == 'D' || moveDirection == 'd') {
        while (current.col < 7 && (board[current.row][current.col + 1] != '#') && (board[current.row][current.col + 1] != opponent.icon))  {
            board[current.row][current.col] = '.';
            if (board[current.row][current.col + 1] == 'C') {
                current.score++;
            }
            board[current.row][current.col + 1] = current.icon;
            current.col += 1;
        } 
        return board;
    } else {
        std::cout << "Invalid direction!\n";
        return board;
    }

}

void playGame(std::vector<std::vector<char>> board) {
    Player player1{'X', 0, 0, 0};
    Player player2{'O', 0, 0, 0,};

    board = placePlayers(board, player1, player2);
    GameStatus status = P1_TURN;

    while (status == P1_TURN || status == P2_TURN) {
        printBoard(board);
        std::cout << "(X) Player 1: " << player1.score << "     (O) Player 2: " << player2.score << std::endl;

        if (status == P1_TURN) {
            board = movePlayer(board, player1, player2, "(X) PLAYER 1");
            status = P2_TURN;
        } else if (status == P2_TURN) {
            board = movePlayer(board, player2, player1, "(O) PLAYER 2");
            status = P1_TURN;
        }

        //Add a win condition here? Checks if any chips remain, maybe set a counter

    }
}

