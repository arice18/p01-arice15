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
                int randomNumber2;
                randomNumber2 = rand () % 10 + 1;
                
                cout << "You have 2 guesses. Pick a number between 1 and 10: ";
                cin >> guess2;
                
                if ( guess2 < randomNumber2 ) {
                    int guess3;

                    cout << "The number is higher, try again." << endl;
                    cin >> guess3;

                    if (guess3 = randomNumber2 ) {
                        int proceedA;
                        cout << "You win! Press any key to play again or press 1 to quit: " << endl;
                        cin >> proceedA;
                        if (proceedA == 1 ) {
                            return 0;
                        }
                    else {
                        int proceedA;
                        cout << "You lose! Press any key to play again or press 1 to quit: " << endl;
                        cin >>  proceedA;
                        if ( proceedA == 1) {
                            return 0;
                        }
                    }
                    }
                }

                if ( guess2 > randomNumber2 ) {
                        int guess4;

                        cout << "The number is lower, try again." << endl;
                        cin >> guess4;

                        if (guess4 == randomNumber2 ) {
                            int proceedB;
                            cout << "You win! Press any key to play again or press 1 to quit: " << endl;
                            cin >> proceedB;
                            if (proceedB == 1 ) {
                                return 0;
                            }
                        else {
                            int proceedB;
                            cout << "You lose! Press any key to play again or press 1 to quit: " << endl;
                            cin >> proceedB;
                            if (proceedB == 1) {
                                return 0;
                            }
                        }
                        }
                }
                if ( guess2 == randomNumber2 ) {
                    int proceedC;
                    cout << "You win! Press any key to play again or press 1 to quit: " <<endl;
                    cin >> proceedC;
                    if (proceedC == 1 ) {
                        return 0;
                    }
                }

                break;
            case 3: 
                difficulty = true;
                break;
            default:
                cout << "Please enter a valid difficulty." << endl;
        }
    }
}
