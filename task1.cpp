#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1; // Generate a random number and store it in "secretNumber"
    int guess;
    int attempts = 0;
    cout << "Welcome To The Number Guessing Game" << endl;

    while (attempts < 10) {
        attempts += 1;
        cout << "Guess The Secret Number between 1 to 100  : ";
        cin >> guess;

        if (guess < secretNumber) { // Compare "guess" to "secretNumber"
            cout << "Too Low!! Try a Higher Number" << endl;
        } else if (guess > secretNumber) { // Compare "guess" to "secretNumber"
            cout << "Too High!! Try a Lower Number" << endl;
        } else {
            cout << "Congratulations !! You guessed the secret number " << secretNumber << endl;
            cout << "In attempts " << attempts << endl;
            break;
        }
    }

    if (attempts >= 10) { // Use ">=" instead of ">" to check if attempts exceeded 10
        cout << "Sorry, you used all your attempts" << endl;
        cout << "The Secret Number was: " << secretNumber << endl;
    }
    return 0;
}