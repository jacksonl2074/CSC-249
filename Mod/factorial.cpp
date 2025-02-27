/*
Laura K. Jackson
CSC 249
2.H1 - Recursive Factorial Search
3.2.2025
*/

#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 1){
        return 1
    }
    else {
        return n * factorial(n - 1)
    }

}