/*
Laura K. Jackson
CSC 249 - 3.T1 Singly Linked Lists (From 3.6 Zybooks)
3.9.2025
*/

#include <iostream>
#include "singlylinkedlist.h"
using namespace std;

int main() {
   LinkedList numList;
   Node* nodeA = new Node(16);
   Node* nodeB = new Node(93);
   Node* nodeC = new Node(56);
   Node* nodeD = new Node(89);
   Node* nodeE = new Node(32);
   Node* nodeF = new Node(27);

   numList.Append(nodeB);   // Add 93
   numList.Append(nodeC);   // Add 56, make the tail
   numList.Append(nodeE);   // Add 32, make the tail

   numList.Prepend(nodeA);  // Add 16, make the head

   numList.InsertAfter(nodeC, nodeD);  // Insert 89 after 56
   numList.InsertAfter(nodeE, nodeF);  // Insert 27 after tail (32)

   // Output list
   cout << "List after adding nodes: ";
   numList.PrintList(cout);

   // Remove the tail node, then the head node
   numList.RemoveAfter(nodeE);
   numList.RemoveAfter(nullptr);

   // Output final list
   cout << "List after removing nodes: ";
   numList.PrintList(cout);
   
   // LinkedList destructor frees remaining nodes
}