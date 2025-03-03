/*
Laura K. Jackson
CSC 249
2.H1 - Factorial functions: Iterative & Recursive 
3.2.2025
*/

#include <iostream>
using namespace std;

// calculating factorial of n using a for loop
int factNum(int n){
    int result = 1;     // initialize to 1, not 0
    for (int i = 2; i <= n; i++)    // i=2 because n * 1 will always equal 1
        result = result * i;    // result *= i
    return result;
}

// calculating factorial of n using recursion
// FIXME: delete "else" clause?
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else {
        return n * factorial(n - 1);    // recursion
    }
}

// main function
int main(){
  
    // have user enter a number to calculate its factorial
    cout << "Enter a positive number: ";
    int num = 0;
    cin >> num;

    // iterative (for loop) 
    cout << "Using iteration... ";
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    // recursion
    cout << "Using recursion... ";
    cout << "Factorial of " << num << " is " << factNum(num) << endl;

    return 0;
}