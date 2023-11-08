#include "RandNum.h"
#include <iostream>
#include <ctime>

using namespace std;

NumberGuessingGame::NumberGuessingGame() {
	// Precondition: None
	// Postcondition: Initializes the NumberGuessingGame object with wins and losses set to 0.
	wins = 0;
	losses = 0;
}

int NumberGuessingGame::getRandomNumber() {
	// Precondition: None
	// Postcondition: Returns the currently set random number.
	return randNum;
}

void NumberGuessingGame::setRandomNumber(int num) {
	// Precondition: num is a valid integer.
	// Postcondition: Sets the random number to the provided num.
	randNum = num;
}

int NumberGuessingGame::getWins() {
	// Precondition: None
	// Postcondition: Returns the current number of wins.
	return wins;
}

void NumberGuessingGame::setWins(int num) {
	// Precondition: num is a valid integer.
	// Postcondition: Sets the number of wins to the provided num.
	wins = num;
}

int NumberGuessingGame::getLosses() {
	// Precondition: None
	// Postcondition: Returns the current number of losses.
	return losses;
}

void NumberGuessingGame::setLosses(int num) {
	// Precondition: num is a valid integer.
	// Postcondition: Sets the number of losses to the provided num.
	losses = num;
}

void NumberGuessingGame::Game() {
	// Precondition: None
	// Postcondition: Runs a number guessing game where the user has 20 attempts to guess the random number.
	// Updates the number of wins or losses accordingly.
	int number = rand() % 100 + 1;
	setRandomNumber(number);
	int attempts = 1;
	int guess;
	cout << "guess a number (0-100): ";

	while (attempts < 21) {
		
		cout << "\nGuess #" << attempts << ":  ";
		cin >> guess;
		attempts++;
		

		if (guess < getRandomNumber()) {    // Provide feedback for a low guess
			switch (rand() % 9) {
				case 0:
					cout << "Too low! try again try a higher number! " << endl;
					break;
				case 1:
					cout << "Your guess is too low. Try a number a little higher! " << endl;
					break;
				case 2: 
					cout << "Too low again. " << endl;
					break;
				case 3:
					cout << "Hmm. Think bigger" << endl;
					break;
				case 4:
					cout << "That guess was too low!" << endl;
					break;
				case 5:
					cout << "Not high enough!" << endl;
					break;
				case 6:
					cout << "Youre still too low" << endl;
					break;
				case 7:
					cout << "You should try entering a bigger number" << endl;
					break;
				case 8:
					cout << "You need a bigger number" << endl;
					break;
				case 9:
					cout << "Youre too low little buddy" << endl;
					break;
				
			}
		}

		else if (guess > getRandomNumber()) {      // Provide feedback for a high guess.
			switch (rand() % 9) {
				case 0:
					cout << "Too high! try a number a little lower. " << endl;
					break;
				case 1:
					cout << "Your guess was too high. Try a lower number. " << endl;
					break;
				case 2:
					cout << "Too high again" << endl;
					break;
				case 3:
					cout << "Think a little lower" << endl;
					break;
				case 4:
					cout << "Youre still too high" << endl;
					break;
				case 5:
					cout << "Try a lower number please" << endl;
					break;
				case 6:
					cout << "You need to go lower" << endl;
					break;
				case 7:
					cout << "Way too high buddy" << endl;
					break;
				case 8: 
					cout << "Sky high there: try something lower" << endl;
					break;
				case 9: 
					cout << "Please do something lower. This is getting annoying. " << endl;
					break;
				
			}
		}

		else {
			attempts = 21;
			switch (rand() % 9) {      // Provide feedback for a correct guess, update wins, and break out of the loop.
			case 0:
				cout << "Congradulations! You won!" << endl;
				break;
			case 1:
				cout << "Yay you did it!" << endl;
				break;
			case 2:
				cout << "Great Job!!" << endl;
				break;
			case 3:
				cout << "You finally got it!" << endl;
				break;
			case 4:
				cout << "It's about time you got it. " << endl;
				break;
			case 5:
				cout << "Took you long enough..." << endl;
				break;
			case 6:
				cout << "You got it right!" << endl;
				break;
			case 7:
				cout << "I almost though you weren't going to get it right..." << endl;
				break;
			case 8:
				cout << "Winner Winner Chicken Dinner" << endl;
				break;
			case 9: 
				cout << "WINNERRRRR" << endl;
				break;
				// add more here
			}
			setWins(getWins() + 1);
			break;
		}

	if (attempts == 21) {            // Update losses and provide feedback for running out of attempts.
		setLosses(getLosses() + 1);
		switch (rand() % 2) {           
			case 0:
				cout << "You've run out of attempts! Better luck next time!" << endl;
				break;
			case 1:
				cout << "Out of tries! Try again later. " << endl;
				break;
			case 2:
				cout << "Darnit. You didn't get it in time" << endl;
				break;
			case 3:
				cout << "Time is up!" << endl;
				break;
			case 4:
				cout << "BOOOO you lost." << endl;
				break;
			case 5:
				cout << "Aw you you lose" << endl;
				break;
			case 6:
				cout << "Loserrrr" << endl;
				break;
			case 7:
				cout << "Whomp Whomp. " << endl;
				break;
			case 8:
				cout << "Kick rocks ... You lose" << endl;
				break;
			case 9:
				cout << "At least you tried ..." << endl;
				break;
			}
		}

	}
}

void NumberGuessingGame::Stats()
{
	// Postcondition: Prints the total number of wins and losses.
	cout << "\n\nTotal number of wins: " << getWins() << endl;
	cout << "Total number of losses: " << getLosses() << endl;
}