/*
Laura K. Jackson
CSC 249
4.H1 - Binary Search portion
4.13.2025
*/

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

int main() {
   
   // start with empty vector of 8 numbers
   int numbers[8];
   int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

   // take user's input for nums in vector in sorted order
   cout << "Please enter 8 numbers in ascending order." << endl;
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
   cout << "Enter a value to search for: ";
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
/*
int main() {
   // Call the number search function
   numbers();
   
   return 0;
}
   */
// int BinarySearch(int* numbers, int numbersSize, int key);
// void numbers();