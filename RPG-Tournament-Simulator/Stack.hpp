/**************************************************************************
 ** Program Filename: Stack.hpp
 ** Author: Sara Hashem
 ** Date: 5/17/2015
 ** Description: Stack class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#ifndef STACK_HPP
#define STACK_HPP
#include "Character.hpp"
#include <cstdlib>

class Stack
{
   protected:
      // Create Node struct
      struct Node
      {
	 Character *loser;
	 Node *next;
	 
	 // Constructor
	 Node(Character *loser1, Node *next1 = NULL)
	 {
	    loser = loser1;
	    next = next1;
	 }
      };

      Node *head;
   
   public:
      // Constructor
      Stack();
      
      // Destructor
      ~Stack();
      
      // Operation methods
      void add(Character*);
      Character* remove();
      bool isEmpty();
      //void compare();
};
#endif
