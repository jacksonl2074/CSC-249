/*
Laura K. Jackson
CSC 249
4.H1 - Number Guesser portion
4.13.2025
*/

#include <iostream>

using namespace std;

void numberGuesser (){
    // variables
    int low = 0;
    int high = 99;
    int mid;                        // Do i need this?
    int guess;                      // number 
    int numGuesses = 0;             // num to keep track of guesses
    const int MAX_GUESSES = 5;      // constant var for Max num of guesses
    char userResponse;     // variable for user's input of =, >, <
    bool found = false;     // variable to track if computer correctly guessed user's num

    // tell user how the game is set up
    cout << "You have chosen the Number Guesser!" << endl;
    cout << "You are going to think of a number between 0 and 99,";
    cout << " and I will try to guess your number in 5 attempts or less." << endl;
    cout << "If I've guessed your number, please type '='." << endl;
    cout << "If I need to guess higher, please type '>'." << endl;
    cout << "If I need to guess lower, please type '<'." << endl;
    
    mid = 50;        // first num computer guesses is 50
    // 
    while (numGuesses < MAX_GUESSES && !found){
        
        numGuesses++;           // increment guess counter

        // start at mid point
        cout << "Guess #" << numGuesses << ": " ;
        cout << "Is your number " << mid  << "? " ;
        // user enters =, >, or <
        cin >> userResponse;

        if (userResponse == '='){
            cout << "Great! I guessed your number!" << endl;
            found = true;
        } else if (userResponse == '<'){
            high = mid - 1;     
        } else if (userResponse == '>'){
            low = mid + 1;
        } else {
            cout << "Invalid response. Please enter =, <, or >." << endl;
            numGuesses--;              // decrement num guesses to not count invalid responses
        }
        mid = (low + high) / 2;
    }
    


}

int main(){
    numberGuesser();
}
