/*
CSC 249 - 1.T.1
Laura K. Jackson
1.26.25
Prompt in Co-Pilot: Can you help me write a small C++ program based on these 2 prompts?
1. "I am a C++ programmer, and I'm taking a data structures class." 
2. "You are going to explain it to me like I'm ten, and then twenty, and then like I'm already an expert." 
It need to a simple program that illustrates a basic linear data structure in action and uses iteration.
*/


#include <iostream> // For input and output operations
#include <vector>   // For the std::vector class
using namespace std;

int main() {
    // Explain in easy terms
    cout << "Explain like I'm 10" << endl;
    

    vector<int> toyBoxes; // Create an empty vector to hold integers

    // Add elements to the vector
    toyBoxes.push_back(1);  // Add toy 1
    toyBoxes.push_back(2);  // Add toy 2
    toyBoxes.push_back(3);  // Add toy 3

    // Iterate through the vector and print each element
    for (int i = 0; i < toyBoxes.size(); ++i) {
        cout << "Toy in box " << i << ": " << toyBoxes[i] << endl;
    }

    // Remove the last element from the vector
    toyBoxes.pop_back();  // Remove the last toy

    // Iterate through the vector again and print each element
    for (int i = 0; i < toyBoxes.size(); ++i) {
        cout << "Toy in box " << i << ": " << toyBoxes[i] << endl;
    }

    // Explain in a little bit harder terms
    cout << "Explain like I'm 20" << endl;

    vector<int> myVector;

    // Adding elements to the vector using push_back
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);

    // Iterating through the vector using a for loop
    for (int i = 0; i < myVector.size(); ++i) {
        cout << "Element at index " << i << ": " << myVector[i] << endl;
    }

    // Removing the last element using pop_back
    myVector.pop_back();

    // Iterating through the vector again to see the updated list
    for (int i = 0; i < myVector.size(); ++i) {
        cout << "Element at index " << i << ": " << myVector[i] << endl;
    }

    return 0; // End the program
}
