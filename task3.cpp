#include <iostream>
using namespace std;

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        char board1 = '1', board2 = '2', board3 = '3', board4 = '4', board5 = '5', board6 = '6', board7 = '7', board8 = '8', board9 = '9';
        int player = 1;
        int choice;
        int isGameOver = 0;

        // Display the Tic Tac Toe board
        cout << "Tic Tac Toe Game" << endl;
        cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;

        do {
            cout << "     |     |     " << endl;
            cout << "  " << board1 << "  |  " << board2 << "  |  " << board3 << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << board4 << "  |  " << board5 << "  |  " << board6 << endl;
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << board7 << "  |  " << board8 << "  |  " << board9 << endl;
            cout << "     |     |     " << endl << endl;

            // Get the player's choice
            if (player % 2 == 1) {
                cout << "Player 1, enter a number: ";
            } else {
                cout << "Player 2, enter a number: ";
            }
            cin >> choice;

            // Check if the chosen spot is valid
            char* currentBoard;
            switch (choice) {
                case 1:
                    currentBoard = &board1;
                    break;
                case 2:
                    currentBoard = &board2;
                    break;
                case 3:
                    currentBoard = &board3;
                    break;
                case 4:
                    currentBoard = &board4;
                    break;
                case 5:
                    currentBoard = &board5;
                    break;
                case 6:
                    currentBoard = &board6;
                    break;
                case 7:
                    currentBoard = &board7;
                    break;
                case 8:
                    currentBoard = &board8;
                    break;
                case 9:
                    currentBoard = &board9;
                    break;
                default:
                    currentBoard = nullptr;
                    break;
            }

            if (currentBoard == nullptr || *currentBoard == 'X' || *currentBoard == 'O') {
                cout << "Invalid move. Try again." << endl;
                continue;
            }

            // Update the board with the player's choice
            if (player % 2 == 1) {
                *currentBoard = 'X';
            } else {
                *currentBoard = 'O';
            }

            // Check for a win or a tie
            if ((board1 == board2 && board2 == board3) || (board4 == board5 && board5 == board6) || (board7 == board8 && board8 == board9) ||
                (board1 == board4 && board4 == board7) || (board2 == board5 && board5 == board8) || (board3 == board6 && board6 == board9) ||
                (board1 == board5 && board5 == board9) || (board3 == board5 && board5 == board7)) {
                isGameOver = 1;
            } else if (board1 != '1' && board2 != '2' && board3 != '3' && board4 != '4' && board5 != '5' &&
                       board6 != '6' && board7 != '7' && board8 != '8' && board9 != '9') {
                isGameOver = -1; // Indicates a tie
            }

            player++;

        } while (isGameOver == 0);

        // Display the result
        if (isGameOver == 1) {
            if (player % 2 == 1) {
                cout << "Player 1 (X) wins!" << endl;
            } else {
                cout << "Player 2 (O) wins!" << endl;
            }
        } else {
            cout << "It's a tie!" << endl;
        }

        cout << "Do you want to play again (y/n)? ";
        cin >> playAgain;
    }

    return 0;
}