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
    int numGuesses = 0;             // num to keep track of guesses
    const int MAX_GUESSES = 5;      // constant var for Max num of guesses
    char userResponse;     // variable for user's input of =, >, <
    bool found = false;     // variable to track if computer correctly guessed user's num

    // tell user how the game is set up
    cout << "You have chosen the Number Guesser!" << endl;
    cout << "You are going to think of a number between 0 and 99,";
    cout << " and I will try to guess your number in 5 attempts." << endl;
    cout << "If I've guessed your number, please type =" << endl;
    cout << "If I've guessed too low, please type >" << endl;
    cout << "If I've guessed too high, please type <" << endl;
    cout << "Is your number 50? " << endl;

    while (numGuesses != MAX_GUESSES && userResponse != found){
        // user enters =, >, or <
        cin >> userResponse;
    }
    


}

int main(){
    numberGuesser();
}
