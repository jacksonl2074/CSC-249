/*
Laura K. Jackson
CSC 249
4.T1 - Local Maximum
3.30.2025
*/

#include <iostream>
#include <chrono>   // Include chrono library to add a timer
using namespace std;
using namespace chrono;

int main(){
    const int SIZE = 6;
    int values[SIZE] = {1, 4, 7, 5, 3, 4};

    int current;

    // Could add in optional user input

    // Start timer
    auto start = high_resolution_clock::now();

    int current_max = values[0]; // start with the first value

    cout << "V = ";
    for (int i=0; i < SIZE; i++){
        cout << values[i] << " ";
    }
    cout << endl;
    cout << "Now finding maximum n in V" << endl;

    for (int i=0; i < SIZE; i++){
        current = values[i]; // for each n in V
        cout << current << endl;
        if (current > current_max){
            current_max = current;
            cout << "\t" << "current_max now: " << current_max << endl;
        }
    }
    // done - current_max is global maximum
    cout << "Largest value in V is: " << current_max << endl;

    // stop timer
    auto stop = high_resolution_clock::now();

    // calculate elasped time
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Program execution time: " << duration.count() << " microseconds" << endl;

    cout << endl;
}