#include <iostream>
using namespace std;

int main() {
    // generate a new number every time the code runs
	srand(time(0));

    // variables
    double userIn;
    int attempts = 0;
    int randNum = rand() % 101;

    // game
    cout << "Please enter a number between 1 and 100\n";
    cin >> userIn;
    while (!userIn) {
        cout << "Please try again with a number.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> userIn;
    }
    while (userIn < 1 || userIn > 100) {
        cout << "Please try again with a number 1 and 100.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> userIn;
    }
    while (userIn != randNum) {
        if (userIn < randNum) {
            cout << "Incorrect, higher\n";
            cin >> userIn;
            ++attempts;
        }
        if (userIn > randNum) {
            cout << "Incorrect, lower\n";
            cin >> userIn;
            ++attempts;
        }
    }
    if (userIn = randNum) {
        ++attempts;
        cout << "Correct! The number was " << randNum << ". It took you " << attempts << " attempts to guess it.";
        return 0;
    }
}
