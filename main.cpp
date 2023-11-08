#include "RandNum.h"
#include <iostream>
using namespace std;

int main() {
    // Create the object "game" of NumberGuessingGame.
    NumberGuessingGame game;
    char PlayAgain;

    // Display a welcome message and game instructions.
    cout << "Welcome to the Number Guessing Game! " << endl;
    cout << "You will have 20 attempts to guess a number from 1 to 100" << endl << endl;

    do {
        // Run the number guessing game and update the game state.
        game.Game();

        // Ask the player if they want to play again.
        cout << "Do you want to play again? (y/n):  ";
        cin >> PlayAgain;

    } while (PlayAgain == 'y' || PlayAgain == 'Y');

    // Display the total number of wins and losses.
    game.Stats();

    // Exits program
    return 0;
}
