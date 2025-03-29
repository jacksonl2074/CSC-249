/*
Laura K. Jackson
CSC 249 - 3.L1 The Stack (From 3.18 Zybooks)
3.16.2025
*/

#include <iostream>
#include "arraystack.h"
using namespace std;

int main(int argc, char* argv[]) {
   // Make two stacks, one bounded to 4 items and the other unbounded
   ArrayStack boundedStack(4);
   ArrayStack unboundedStack;
    
   // Push 8 items to each
   cout << "Pushing values 1 through 10 to each stack" << endl;
   for (int i = 1; i <= 10; i++) {
      boundedStack.Push(i);
      unboundedStack.Push(i);
   }
   
   // Pop two items off each stack
   cout << "Popping thrice" << endl;
   for (int i = 0; i < 3; i++) {
      boundedStack.Pop();
      unboundedStack.Pop();
   }

   // Push 4 more items onto each stack
   cout << "Pushing values to each stack: 5, 10, 15 and 20" << endl;
   for (int i = 5; i <= 20; i += 5) {
      boundedStack.Push(i);
      unboundedStack.Push(i);
   }
    
   // Display contents of each stack
   cout << "Bounded stack (maxLength=" << boundedStack.GetMaxLength();
   cout << ") contents:" << endl;
   while (boundedStack.GetLength() > 0) {
      cout << "  " << boundedStack.Pop() << endl;
   }
   cout << "Unbounded stack contents:" << endl;
   while (unboundedStack.GetLength() > 0) {
      cout << "  " << unboundedStack.Pop() << endl;
   }
   
   return 0;
}