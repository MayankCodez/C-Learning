#include <stdio.h>

char board[3][3];
char current_marker;
int current_player;

// Initialize the board with numbers
void initializeBoard() {
    char value = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = value++;
        }
    }
}

// Print the current board
void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Place marker at position
int placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = current_marker;
        return 1;
    } else {
        return 0;
    }
}

// Check if current player won
int checkWinner() {
    // rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == current_marker && board[i][1] == current_marker && board[i][2] == current_marker) ||
            (board[0][i] == current_marker && board[1][i] == current_marker && board[2][i] == current_marker)) {
            return 1;
        }
    }
    // diagonals
    if ((board[0][0] == current_marker && board[1][1] == current_marker && board[2][2] == current_marker) ||
        (board[0][2] == current_marker && board[1][1] == current_marker && board[2][0] == current_marker)) {
        return 1;
    }
    return 0;
}

// Switch player
void swapPlayer() {
    if (current_marker == 'X') {
        current_marker = 'O';
        current_player = 2;
    } else {
        current_marker = 'X';
        current_player = 1;
    }
}

int main() {
    printf("Welcome to Tic-Tac-Toe!\n");
    initializeBoard();
    current_marker = 'X';
    current_player = 1;

    int moves = 0;
    while (1) {
        printBoard();
        int slot;
        printf("Player %d (%c), enter your move (1-9): ", current_player, current_marker);
        scanf("%d", &slot);

        if (slot < 1 || slot > 9 || !placeMarker(slot)) {
            printf("Invalid move, try again.\n");
            continue;
        }

        moves++;
        if (checkWinner()) {
            printBoard();
            printf("Player %d (%c) wins!\n", current_player, current_marker);
            break;
        }

        if (moves == 9) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        swapPlayer();
    }

    return 0;
}
