#include <iostream>
#include <limits>
#include <string>
#include "functions.h"      // header file for functions

using namespace std;

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
                    break;
                case 2:
                    cout << "Option 2 selected." << endl;
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
