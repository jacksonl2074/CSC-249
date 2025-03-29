/*
Laura K. Jackson
CSC 249 - 3.H1 Stacks & Queues in Practice (From 3.22 Zybooks)
3.23.2025
*/

#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main() {
    int numbers[] = { 72, 34, 41, 57, 64, 18, 49, 77, 74 };
       
    // Initialize a new Stack and add numbers
    Stack numStack;
    for (int number : numbers) {
       numStack.Push(number);
    }
 
    // Output stack
    cout << "Stack after initial pushes:   ";
    numStack.Print(cout);
       
    // Pop and print, push 92 and print, pop and print again
    numStack.Pop();
    cout << "Stack after first pop:        ";
    numStack.Print(cout);
    numStack.Push(92);
    cout << "Stack after pushing 92:       ";
    numStack.Print(cout);
    numStack.Pop();
    cout << "Stack after second pop:       ";
    numStack.Print(cout);
       
    // Print a blank line before the Queue demo
    cout << endl;
       
    // Initialize a new Queue and add numbers
    Queue numQueue;
    for (int number : numbers) {
        numQueue.Enqueue(number);
    }
 
    // Output queue
    cout << "Queue after initial enqueues: ";
    numQueue.Print(cout);
       
    // Dequeue 72 and print
    numQueue.Dequeue();
    cout << "Queue after first dequeue:    ";
    numQueue.Print(cout);
       
    // Enqueue 92 and print
    numQueue.Enqueue(92);
    cout << "Queue after enqueueing 92:    ";
    numQueue.Print(cout);
       
    // Dequeue 34 and print
    numQueue.Dequeue();
    cout << "Queue after second dequeue:   ";
    numQueue.Print(cout);
 }
