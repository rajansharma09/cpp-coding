#include <iostream>
#include <vector>

using namespace std;

// Function to initialize the game board
void initializeBoard(vector<vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';  // Empty space
        }
    }
}

// Function to display the current game board
void displayBoard(const vector<vector<char>>& board) {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "| " << board[i][j] << " ";
        }
        cout << "|\n";
        cout << "-------------\n";
    }
}

// Function to check if a player has won
bool checkWinner(const vector<vector<char>>& board, char player) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

// Function to check if the board is full (tie game)
bool isBoardFull(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

// Function to make a move
bool makeMove(vector<vector<char>>& board, int row, int col, char player) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = player;
        return true;
    }
    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3));  // Create 3x3 board
    initializeBoard(board);

    char currentPlayer = 'X';  // Player 'X' starts
    int row, col;
    bool gameWon = false;

    while (!gameWon && !isBoardFull(board)) {
        displayBoard(board);
        cout << "Player " << currentPlayer << "'s turn. Enter row (0-2) and column (0-2): ";
        cin >> row >> col;

        // Make the move if valid
        if (makeMove(board, row, col, currentPlayer)) {
            // Check if the current player has won
            if (checkWinner(board, currentPlayer)) {
                displayBoard(board);
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameWon = true;
            } else {
                // Switch to the other player
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Invalid move! The cell is either occupied or out of bounds. Try again." << endl;
        }
    }

    if (!gameWon) {
        displayBoard(board);
        cout << "It's a tie!" << endl;
    }

    return 0;
}

