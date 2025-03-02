/*
Laura K. Jackson
CSC 249
2.H1 - Recursive Factorial Search
3.2.2025
*/

#include <iostream>
using namespace std;

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

// calculating factorial of n using a for loop
int factNum(int n){
    int 
}

int main(){
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}