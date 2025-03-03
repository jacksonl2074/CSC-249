/*
Laura K. Jackson
CSC 249
2.H1 - Binary Search: Iteratively & Recursively
3.2.2025
*/

#include <iostream>
using namespace std;

// iterative function 
int BinarySearch(double* numbers, int numbersSize, double key) {
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

// recursive function
int recurBinary(double* numbers, int low, int high, double key){

    if (low > high)
        return -1;
    int mid = (low + high) / 2;

    if (numbers[mid] < key){
        return recurBinary(numbers, mid + 1, high, key);
    }
    else if (numbers[mid] > key){
        return recurBinary(numbers, low, mid - 1, key);
    }
    return mid;
}

// main function
int main() {
   double numbers[] = { 4.5, 8.2, 16.3, 18.6, 24.7, 30.4, 39.8, 56.9 };
   int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

   // print out all the numbers in the array
   cout << "NUMBERS: [" << numbers[0];
   for (int i = 1; i < numbersSize; i++) {
      cout << ", " << numbers[i];
   }
   cout << "]" << endl;
      
   // Prompt user for a value (double) to search for
   cout << "Enter a value: ";
   double key = 0.0;
   cin >> key;
   
   cout << "Using iteration..." << endl;
   int keyIndex = BinarySearch(numbers, numbersSize, key);
   if (keyIndex == -1) {
      cout << key << " was not found." << endl;
   }
   else {
      cout << "Found " << key << " at index ";
      cout << keyIndex << "." << endl;
   }

   cout << "Using recursion..." << endl;
   int indexKey = recurBinary(numbers, 0, numbersSize - 1, key);
   if (indexKey == -1) {
    cout << key << " was NOT found." << endl;
 }
 else {
    cout << "Found " << key << " at INDEX ";
    cout << indexKey << "." << endl;
 }
}