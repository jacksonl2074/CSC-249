#include <iostream>
#include <limits>
#include <string>
// #include "functions.h"      // header file for functions

using namespace std;

int BinarySearch(int* numbers, int numbersSize, int key) {
    // Variables to hold the low and high indices of the area being searched. 
    // Starts with entire range.
    int low = 0;
    int high = numbersSize - 1;
    
    // Loop until "low" passes "high"
    while (high >= low) {
       // Calculate the middle index
       int mid = (high + low) / 2;
 
       // Cut the range to either the left or right half,
       // unless numbers[mid] is the key
       if (numbers[mid] < key) {
          low = mid + 1;
       }
       else if (numbers[mid] > key) {
          high = mid - 1;
       }
       else {
          return mid;
       }
    }
    
    return -1; // not found
 }
 
 void numberSearch() {
    
    // start with empty vector of 8 numbers
    int numbers[8];
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
 
    // take user's input for nums in vector
    for (int i=0; i < numbersSize; i++){
     cout << "Enter number " << i + 1 << ": ";
     cin >> numbers[i];
    }
    
 
    // display numbers user entered
    cout << "NUMBERS: [" << numbers[0];
    for (int i = 1; i < numbersSize; i++) {
       cout << ", " << numbers[i];
    }
    cout << "]" << endl;
       
    // Prompt for an integer to search for
    cout << "Enter a value: ";
    int key = 0;
    cin >> key;
       
    int keyIndex = BinarySearch(numbers, numbersSize, key);
    if (keyIndex == -1) {
       cout << key << " was not found." << endl;
    }
    else {
       cout << "Found " << key << " at index ";
       cout << keyIndex << "." << endl;
    }
 }
 void numberGuesser (){
     // variables
     int low = 0;
     int high = 99;
     int mid;                         
     int numGuesses = 0;             // num to keep track of guesses
     const int MAX_GUESSES = 5;      // constant var for Max num of guesses
     char userResponse;     // variable for user's input of =, >, <
     bool found = false;     // flag to track if computer correctly guessed user's num
 
     // tell user how the game is set up
     cout << "You have chosen the Number Guesser!" << endl;
     cout << "You are going to think of a number between 0 and 99,";
     cout << " and I will try to guess your number in 5 attempts or less." << endl;
     cout << "If I've guessed your number, please type '='." << endl;
     cout << "If I need to guess higher, please type '>'." << endl;
     cout << "If I need to guess lower, please type '<'." << endl;
     
     mid = 50;        // first num computer guesses is 50
     // guessing loop
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
             cout << "It took me " << numGuesses << " guesses." << endl;
         } else if (userResponse == '<'){
             high = mid - 1;     
         } else if (userResponse == '>'){
             low = mid + 1;
         } else {
             cout << "Invalid response. Please enter =, <, or >." << endl;
             numGuesses--;              // decrement num guesses to not count invalid responses
         }
         mid = (low + high) / 2;        // update mid point
     }
     // if the computer didn't guess the number in 5 attempts
     if (!found){
         cout << "Unfortunately, I couldn't guess your number in 5 attempts." << endl;
     }
 }
// Declare the function prototype
void numberSearch();
void numberGuesser();

// main function to display menu to user 
// and they chose an option
int main() {
    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Binary Search Demo" << endl;
        cout << "2. Binary Guess the Number Game" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";

        if (cin >> choice) {
            switch (choice) {
                case 1:
                    cout << "Option 1 selected." << endl;
                    numberSearch();  // call function to run binary search
                    break;
                case 2:
                    cout << "Option 2 selected." << endl;
                    numberGuesser();  // call function to run number guesser game
                    break;
                case 3:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
            }
        } else {
            // input validation 
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();        // clears error of user's input
            // discards invalid input from user
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (choice != 3);

    return 0;
}

     