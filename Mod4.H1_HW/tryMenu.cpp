#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
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
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (choice != 3);

    return 0;
}
