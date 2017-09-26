// Author: Alexander Rice
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main () {
    int difficulty;
    while( true ) {
        cout << "Welcome to Alex's number guessing game. Please select from the following difficulties: 1, 2, or 3: ";
        cin >> difficulty;
        
        cout << "You chose: " << difficulty << endl;

        switch (difficulty)
        {
            case 1:
                int guess1;

                srand ( time(NULL) );
                int randomNumber;
                randomNumber = rand () % 2 + 1;

                cout << "You have 1 guess. Pick between 1 and 2: ";
                cin >> guess1;

                if ( guess1 == randomNumber ) {
                    int proceed;
                    cout << "You win! Press any key to play again or press 1 to quit: " << endl;
                    cin >> proceed;
                    if ( proceed == 1 ) {
                        return 0;
                    }
                }
                else {
                    int proceed;
                    cout << "You lose! Press any key to play again or press 1 to quit: " << endl;
                    cin >> proceed;
                    if ( proceed == 1 ) {
                        return 0;
                    }
                }
                break;
            case 2: 
                int guess2;

                srand ( time(NULL) );
                int randomNumber;
                randomNumber = rand () % 10 + 1;
                
                cout << "You have 2 guesses. Pick a number between 1 and 10: ";
                cin >> guess2;
                
                if ( guess2 
                break;
            case 3: 
                difficulty = true;
                break;
            default:
                cout << "Please enter a valid difficulty." << endl;
        }
    }
}
