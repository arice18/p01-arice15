// Author: Alexander Rice
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main () {
    int difficulty, maxNum;
    while( true ) {u
        cout << "Welcome to Alex's number guessing game. Please select from the following difficulties: 1, 2, or 3: ";
        cin >> difficulty;
        
        cout << "You chose: " << difficulty << endl;

        int guesses;
        if ( difficuulty == 1) {
                int guess1;

                srand ( time(NULL) );
                int randomNumber;
                randomNumber = rand () % 2 + 1;

                cout << "You have 1 guess. Pick between 1 and 2: ";
                cin >> guess1;

                if ( guess1 == ranudomNumber ) {
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
        }
        else if ( difficulty == 2 ) {
             guesses = 2;
             maxNum = 10;
        }
        int guess2, proceed;

        srand ( time(NULL) );
        int randomNumber2 = rand () % maxNum + 1;
        while(guesses > 0) {
            cout << "You have " << guesses << " guesses. Pick a number between 1 and " << maxNum << ": ";
            cin >> guess2;

            if ( guess2 < randomNumber2 ) {
                cout << "The number is higher, try again." << endl;
            } else if ( guess2 > randomNumber2 ) {
                cout << "The number is lower, try again." << endl;
            } else {
                cout << "You win! Press any key to play again or press 1 to quit: " << endl;
                cin >> proceed;
                if (proceed == 1 ) {
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
 /*       
        else if ( difficulty == 3 ) {
                int guess5;

                srand ( time(NULL) );
                int randomNumber3;
                randomNumber3 = rand () % 100 + 1;
                
                cout << "You have 3 guesses. Pick a number between 1 and 100: ";
                cin >> guess5;
                
                if ( guess5 < randomNumber3 ) {
                    int guess6;

                    cout << "The number is higher, try again." << endl;
                    cin >> guess6;

                    if (guess6 = randomNumber2 ) {
                        int proceedA;
                        cout << "You win! Press any key to play again or press 1 to quit: " << endl;
                        cin >> proceedA;
                        if (proceedA == 1 ) {
                            return 0;
                        }
                    }
                    else if (guess6 < randomNumber3 ) {
                        int guess7;

                        cout << "The number is higher, try again." << endl;
                        cin >> guess7;

                        if (guess7 == randomNumber3 ) {
                            int proceedA;
                            cout << "You win! Press any key to play again or press 1 to quit: " << endl;
                            if (proceedA == 1 ) {
                                return 0;
                            }
                        }
                        else {
                            int proceedB;
                            cout << "You lose! Press any key to play again or press 1 to quit: " << endl;
                            cin >> proceedD;
                            if (proceedD == 1) {
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

                else if ( guess2 > randomNumber2 ) {
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
                
                else  {
                    int proceedC;
                    cout << "You win! Press any key to play again or press 1 to quit: " <<endl;
                    cin >> proceedC;
                    if (proceedC == 1 ) {
                        return 0;
                    }
                }
        }
*/
    }
}
/*    
            case 3: 
                difficulty = true;
                break;
            default:
                cout << "Please enter a valid difficulty." << endl;
        }
    } 
}
*/

