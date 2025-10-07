#include <iostream>
#include <vector>
#include <random>

class Player{
public:
    char icon;
    int row, col;
    int score = 0;
};

enum GameStatus {
    ONGOING,
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
        std::cout << "row " << row << std::endl;
        col = dist(engine);
        std::cout << " col " << col << std::endl;
    } while (board[row][col] != '.');
    board[row][col] = 'X';
    
    do {
        row = dist(engine);
        std::cout << "row " << row << std::endl;

        col = dist(engine);
        std::cout << " col " << col << std::endl;

    } while (board[row][col] != '.');
    board[row][col] = 'O';

    return board;
}

std::vector<std::vector<char>> movePlayer(std::vector<std::vector<char>> board) {


}

void playGame() {

}



//To-do:
//2. Movement for direction.
//3. Chip collection
//4. Full sliding in all directions
//5. Turn logic/Scoring
//6. GameState detection? GameStatus updates
