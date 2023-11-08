/*
    Chris McCormack
    C++ Fall 2023
    Lab 5 - Number Guessing Game
    Write a number-guessing game in which the computer selects a random
    number in the range of 0 to 100, and users get a maximum of 20 attempts to guess it. At
    the end of each game, users should be told whether they won or lost, and then be asked
    whether they want to play again. When the user quits, the program should output the
    total number of wins and losses. To make the game more interesting, the program
    should vary the wording of the messages that it outputs for winning, for losing, and for
    asking for another game. Create 10 different messages for each of these cases, and use
    random numbers to choose among them.
*/




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
