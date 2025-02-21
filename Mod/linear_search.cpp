#include <iostream>
using namespace std;

double LinearSearch(double* numbers, double numbersSize, double key) {
   for (int i = 0; i < numbersSize; i++) {
      if (numbers[i] == key) {
         return i;
      }
   }
   return -1; // not found
}

int main() {
   double numbers[] = { 2.3, 4.5, 7.1, 10.0, 11.7, 32.4, 45.8, 87.9 };
   int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
   cout << "NUMBERS: [" << numbers[0];
   for (int i = 1; i < numbersSize; i++) {
      cout << ", " << numbers[i];
   }
   cout << "]" << endl;
      
   // Prompt for an integer to search for
   cout << "Enter an double value: ";
   double key = 0.0;
   cin >> key;

   int keyIndex = LinearSearch(numbers, numbersSize, key);
   if (keyIndex == -1) {
      cout << key << " was not found." << endl;
   }
   else {
      cout << "Found " << key << " at index ";
      cout << keyIndex << "." << endl;
   }
}