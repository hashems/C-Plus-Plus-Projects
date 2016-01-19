/**************************************************************************
 ** Program Filename: Stack.hpp
 ** Author: Sara Hashem
 ** Date: 5/21/2015
 ** Description: Stack class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#ifndef STACK_HPP
#define STACK_HPP
#include <cstdlib>

class Stack
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
      
      Node *top;

   public:
      // Constructor
      Stack() {top = NULL;}

      // Destructor
      ~Stack();

      // Member functions
      void push(int);
      int peek();
      void pop();
      bool isEmpty();
};
#endif
