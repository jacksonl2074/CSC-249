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
    int result = 1;
    for (int i = 2; i <= n; i++)
        result = result * i;
    return result;
}

// calculating factorial of n using recursion
// FIXME: delete "else" clause?
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// main function
int main(){
    int num = 5;
    // iterative (for loop) 
    cout << "Using a for loop ";
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    // recursion
    cout << "Using recursion ";
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}