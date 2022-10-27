#include <stdio.h>

#define SIZE 5

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    char o_wins_board2[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'O', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };
    
    if (did_player_win('X', no_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', no_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
// return 1 if player won the game
// otherwise, return 0
int did_player_win(char player, char board[SIZE][SIZE]) {

    // Look for horizontal wins
    // make counter
    int horizontal_counter = 0;
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if(board[row][col] == player) {
                horizontal_counter++;
            }
        }

        // check if counter sums to SIZE
        if (horizontal_counter == SIZE) {
            return 1;
        }
    }

    look for vertical wins
    int vertical_counter = 0;
    for (int col = 0; col < SIZE; col++) {
        for (int row = 0; row < SIZE; row++) {
            if(board[row][col] == player) {
                vertical_counter++;
            }
        }

        // check if counter sums to SIZE
        if (vertical_counter == SIZE) {
            return 1;
        }
    }

    // look for diagonal wins
    int left_diag_counter = 0;
    int right_diag_counter = 0;

    for (int i = 0; i < SIZE; i++) {
        // left diagonal
        if (board[i][i] == player) {
            left_diag_counter++;
        }

        // right diagonal
        if (board[i][SIZE - i - 1] == player) {
            right_diag_counter++;
        }
        
        if (left_diag_counter == SIZE ||
            right_diag_counter == SIZE) {
            return 1;
        }
    }

    return 0;
}