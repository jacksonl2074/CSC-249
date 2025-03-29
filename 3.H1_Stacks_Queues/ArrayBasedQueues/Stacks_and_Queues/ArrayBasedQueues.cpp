/*
Laura K. Jackson
CSC 249 - 3.H1 Stacks & Queues in Practice (From 3.21 Zybooks)
3.23.2025
*/


#include <iostream>
#include "ArrayQueue.h"
using namespace std;

int main() {
   // Make two queues, one bounded to 4 items and the other bounded
   ArrayQueue boundedQueue(4);
   ArrayQueue unboundedQueue;
        
   // Enqueue 8 items in each
   cout << "Enqueueing values 1 through 7 to each queue" << endl;
   for (int i = 1; i <= 7; i++) {
      boundedQueue.Enqueue(i);
      unboundedQueue.Enqueue(i);
   }
       
   // Dequeue two items from each queue
   cout << "Dequeuing twice" << endl;
   for (int i = 0; i < 2; i++) {
      cout << "  Dequeued " << boundedQueue.Dequeue();
      cout << " from bounded queue" << endl;
      cout << "  Dequeued " << unboundedQueue.Dequeue();
      cout << " from unbounded queue" << endl;
   }

   // Enqueue 4 more items
   cout << "Enqueueing values: 5, 10, 15 and 25" << endl;
   for (int i = 5; i <= 25; i+=5) {
      boundedQueue.Enqueue(i);
      unboundedQueue.Enqueue(i);
   }
        
   // Display contents of each queue
   cout << "Bounded queue (maxLength=";
   cout << boundedQueue.GetMaxLength();
   cout << ") contents:" << endl;
   while (boundedQueue.GetLength() > 0) {
      cout << "  " << boundedQueue.Dequeue() << endl;
   }
   cout << "Unbounded queue contents:" << endl;
   while (unboundedQueue.GetLength() > 0) {
      cout << "  " << unboundedQueue.Dequeue() << endl;
   }
}