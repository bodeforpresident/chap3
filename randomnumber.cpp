#include <iostream>
using namespace std;

int main()
{
	// generate a new number every time the code runs
	srand(time(0));

	// declare variables
	int userIn;
	int attempts = 0;
	int randomNum = rand() % 101;

	// title and introduction
	cout << "Welcome to the Number Guesser 3000!!!!\n(HOW TO PLAY: Enter a whole number between 1 and 100)\n";

	// ask user
	cout << "Enter your guess: \n";
	cin >> userIn;

	// incorrect guesses
	if (randomNum < userIn) do {
			cout << "Incorrect, try a little lower! Attempts: " << ++attempts << "\n";
			cin >> userIn;
		} while (randomNum < userIn);
	if (randomNum > userIn) do {
			cout << "Incorrect, try a little higher! Attempts: " << ++attempts << "\n";
			cin >> userIn;
		} while (randomNum > userIn);

	// correct guesses
	if (randomNum == userIn) {
		cout << "Correct! The number was " << randomNum << "\n You got it in " << ++attempts << " attempts.";
		return 0;
	};
}
