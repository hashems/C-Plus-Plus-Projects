/**************************************************************************
 ** Program Filename: Queue.hpp
 ** Author: Sara Hashem
 ** Date: 5/21/2015
 ** Description: Queue class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP
#include <cstdlib>

class Queue
{
   protected:
      // Create Node struct
      struct Node
      {
	 int value;
	 Node *next;
	 
	 // Constructor
	 Node(int value1, Node *next1 = NULL)
	 {
	    value = value1;
	    next = next1;
	 }
      };

      Node *front;
      Node *back;

   public:
      // Constructor
      Queue();

      // Destructor
      ~Queue();

      // Member functions
      void addBack(int);
      int getFront();
      void removeFront();
      bool isEmpty();
};
#endif
