/**************************************************************************
 ** Program Filename: Queue.cpp
 ** Author: Sara Hashem
 ** Date: 5/17/2015
 ** Description: Queue class implementation file
 ** Input: None
 ** Output: Integers printed to screen from print function
 *************************************************************************/

#include "Queue.hpp"
#include "Character.hpp"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;


// Constructor
Queue::Queue()
{
   head = NULL;
   tail = NULL;
}



// add
/**************************************************************************
 ** Function: add
 ** Description: This function adds a new node to the back of the Queue
 ** Parameters: One Character object
 ** Pre-Conditions: Queue object instantiated
 ** Post-Conditions: New node added to the back of the Queue
 *************************************************************************/
void Queue::add(Character *fighter)
{
   // Create new node
   Node *ptr = new Node(fighter);

   // If the list is empty
   if(head == NULL)
   {
      head = tail = ptr;
   }

   // If the list is not empty
   else
   {
      // Swap new node with tail node
      tail->next = ptr;
      ptr->next = NULL;

      // Make new node the tail node
      tail = ptr;
      tail->next = NULL;
   }
}



// remove
/**************************************************************************
 ** Function: remove
 ** Description: This function removes the head node from the Queue
 ** Parameters: None
 ** Pre-Conditions: Queue object instantiated
 ** Post-Conditions: Head node removed from the Queue
 *************************************************************************/
Character* Queue::remove()
{
   // Create Node pointer
   Node *ptr;
   
   // Declare local variable to store return value
   Character *fighter;

   fighter = head->fighter;
   ptr = head;
   head = head->next;
   delete ptr;
   
   return fighter;
}



// isEmpty
/**************************************************************************
 ** Function: isEmpty
 ** Description: This function returns true if the Queue is empty and
 ** false otherwise.
 ** Parameters: None
 ** Pre-Conditions: Queue object instantiated
 ** Post-Conditions: Boolean value returned
 *************************************************************************/
bool Queue::isEmpty()
{
   if(head == NULL)
   {
      return true;
   }
   else
   {
      return false;
   }
}


// Destructor
Queue::~Queue()
{
   // Start at the head of the list
   Node *ptr = head;
   while(ptr != NULL)
   {
      // Keep track of node to be deleted
      Node *garbage = ptr;

      // Get the next node
      ptr = ptr->next;

      // Delete garbage node
      delete garbage;
   }
}
