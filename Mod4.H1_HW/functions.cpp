#include <iostream>
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

int numbers() {
   
   // start with empty vector of 8 numbers
   int numbers[8];
   int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

   // take user's input for nums in vector
   for (int i=0; i < numbersSize; i++){
    cout << "Enter number " << i + 1 << ": ";
    cin >> numbers[i];
   }
   cout << "]" << endl;


   // display numbers user entered
   cout << "NUMBERS: [" << numbers[0];
   for (int i = 1; i < numbersSize; i++) {
      cout << ", " << numbers[i];
   }
   cout << "]" << endl;
      
   // Prompt for an integer to search for
   cout << "Enter a value: ";
   int key = 0.0;
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
            cout << "It took me " << numGuesses << " guesses." << endl;
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
    // if the computer didn't guess the number in 5 attempts
    if (!found){
        cout << "Unfortunately, I couldn't guess your number in 5 attempts." << endl;
    }
}
    