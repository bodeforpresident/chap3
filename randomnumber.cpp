#include <iostream>
using namespace std;

int main()
{
	// generate a new number every time the code runs
	srand(time(0));

	// declare variables
	double userIn;
	int attempts = 0;
	int randomNum = rand() % 101;
    
	// title and introduction
	cout << "Welcome to the Number Guesser 3000!!!!\n(HOW TO PLAY: Enter a whole number between 1 and 100)\n";

	// ask user
	cout << "Enter your guess: \n";
	cin >> userIn;
	while (!(cin >> userIn)) {  // Keep asking until the user enters a valid number
    cout << "Invalid input. Try again: ";
    cin.clear(); // Reset input errors
    cin.ignore(10000, '\n'); // Remove bad input
    }

	
	// loop time loop time
	while (userIn != randomNum) {
	    if (userIn > randomNum) {
	        cout << "Lower. you are at attempt " << ++attempts << ".\n";
	        cin >> userIn;
	    } 
	    if (userIn < randomNum) {
	        cout << "Higher. you are at attempt " << ++attempts << ".\n";
	        cin >> userIn;
	    }
	    if (!(cin >> userIn)) {  // Keep asking until the user enters a valid number
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
        }
    ;
	
	// exceptions
	
	// okay cool time yay you got it right time
	if  (userIn == randomNum) {
	    cout << "Correct. Good job. You got the number " << randomNum << " in " << ++attempts << " attempts.";
	    return 0;
	}
}
}
