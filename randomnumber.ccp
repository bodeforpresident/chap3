#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int userIn;
    int attempts = 0;
    int randomNum = rand() % 101;
    
    // ask user
    cout << "Enter your guess: \n";
    cin >> userIn;
    if (randomNum == userIn) {
        cout << "Correct! Attempts: " << attempts;
    }
    else do {
        cout << "Incorrect! Attempts: " << attempts++ << "\n";
        cin >> userIn;
    }
    while (randomNum != userIn);
}
