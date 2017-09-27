// Author: Alexander Rice
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main () {
    int difficulty;
    while( true ) {
        int guesses;
        cout << "Welcome to Alex's number guessing game. Please select from the following difficulties: 1, 2, or 3: ";
        cin >> difficulty;
        
        cout << "You chose: " << difficulty << endl;
        int maxNum, proceed, guess;
        if ( difficulty == 1 ) {
                guesses = 1;
                maxNum = 2;
            } else if ( difficulty == 2 ) {
                guesses = 2;
                maxNum = 10;
            } else if ( difficulty == 3 ) {
                guesses = 3;
                maxNum = 100;
            } else {
                cout << "Game over! You failed to choose an appopriate difficulty!";
                    return 0;
            }
        srand ( time(NULL) );
        int randomNumber;
        randomNumber = rand() % maxNum + 1;
   
        while( guesses > 0 ) {
            
            cout << "You have " << guesses << " guesses. Pick a number between 1 and " << maxNum << ": ";
            cin >> guess;

            if ( guess < randomNumber ) {
                cout << "The number is higher." << endl;
            } else if ( guess > randomNumber ) {
                cout << "The number is lower." << endl;
            } else {
                cout << "You win! Press any key to play again or press 1 to quit: " << endl;
                cin >> proceed;
                if (proceed = 1 ) {
                    return 0;
                }
            }
            guesses--;
        }

        cout << "You lose! Press any key to play again or press 1 to quit: " << endl;
        cin >>  proceed;
        if ( proceed == 1) {
            return 0;
        }
    }
}

