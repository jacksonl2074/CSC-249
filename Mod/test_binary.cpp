#include <iostream>
using namespace std;

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

int main() {
   double numbers[] = { 2.3, 4.5, 7.1, 10.6, 11.7, 32.4, 45.8, 87.9 };
   int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
   cout << "NUMBERS: [" << numbers[0];
   for (int i = 1; i < numbersSize; i++) {
      cout << ", " << numbers[i];
   }
   cout << "]" << endl;
      
   // Prompt for a value to search for
   cout << "Enter a value: ";
   double key = 0.0;
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
