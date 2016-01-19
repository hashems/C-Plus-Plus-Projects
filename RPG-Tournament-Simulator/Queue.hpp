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
#include "Character.hpp"
#include <cstdlib>

class Queue
{
   protected:
      // Create Node struct
      struct Node
      {
	 Character *fighter;
	 Node *next;

	 // Constructor
	 Node(Character *fighter1, Node *next1 = NULL)
	 {
	    fighter = fighter1;
	    next = next1;
	 }
      };

      Node *head;
      Node *tail;

   public:
      // Constructor
      Queue();

      // Destructor
      ~Queue();

      // Operation methods
      void add(Character*);
      Character* remove();
      bool isEmpty();
};
#endif
