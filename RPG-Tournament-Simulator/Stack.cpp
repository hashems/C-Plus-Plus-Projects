/**************************************************************************
 ** Program Filename: Stack.cpp
 ** Author: Sara Hashem
 ** Date: 5/17/2015
 ** Description: Stack class implementation file
 ** Input: None
 ** Output: Integers printed to screen from print function
 *************************************************************************/

#include "Stack.hpp"
#include "Character.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;


// Constructor
Stack::Stack()
{
   head = NULL;
}



// add
/**************************************************************************
 ** Function: add
 ** Description: This function adds a new node to the front of the Stack
 ** Parameters: One pointer to a Character
 ** Pre-Conditions: Stack object instantiated
 ** Post-Conditions: New node added to the front of the Stack
 *************************************************************************/
void Stack::add(Character *loser)
{
   // If the list is empty
   if(head == NULL)
   {
      head = new Node(loser);
   }

   // If the list is not empty
   else
   {
      head = new Node(loser, head);
   }
}



// remove
/**************************************************************************
 ** Function: remove
 ** Description: This function removes the head of the Stack
 ** Parameters: None
 ** Pre-Conditions: Stack object instantiated
 ** Post-Conditions: New node added to the front of the Stack
 *************************************************************************/
Character* Stack::remove()
{
   // Create Node pointer
   Node *ptr;

   // Declare local variable to store return value
   Character *loser;

   if(!isEmpty())
   {
      loser = head->loser;
      ptr = head;
      head = head->next;
      delete ptr;
   }
   
   return loser;
}


/*
// getWinners
Character* Stack::getWinners(Node first)
{
   Node *ptr, *prev;

   if(!isEmpty())
   {
      if(head->hits == first->hits)
      {
	 ptr = head;
	 head = head->next;
	 delete ptr;
      }
      else
      {
	 ptr = head;
	 
	 while(ptr != NULL && ptr->hits != first->hits)
	 {
	    prev = ptr;
	    ptr = ptr->next;
	 }

	 if(ptr)
	 {
	    prev->next = ptr->next;
	    delete ptr;
	 }
      }
   }
}
*/


// isEmpty
/**************************************************************************
 ** Function: isEmpty
 ** Description: This function returns true if the Stack is empty and
 ** false otherwise.
 ** Parameters: None
 ** Pre-Conditions: Stack object instantiated
 ** Post-Conditions: Boolean value returned
 *************************************************************************/
bool Stack::isEmpty()
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


/*
// compare
void Stack::compare()
{  
   Node *ptr, *first;

   Character *one, *two, *three;

   for(int i = 1; i <= 3; i++)
   {
      first = head;
      ptr = head->next;

      while(!isEmpty())
      {
	 if(ptr->hits > first->hits)
	 {
	    first = ptr;
	 }
	 ptr = ptr->next;
      }
      
      getWinners(first);
   }

   
   // Print results
   first = remove(head);
   second = remove(head);
   third = remove(head);
 
   cout << "Third Place: " << third->name << ", the " << third->type;
   cout << " with a total of " << third->hits << " hits!" << endl;
   
   cout << "Second Place: " << second->name << ", the " << second->type;
   cout << " with a total of " << second->hits << " hits!" << endl;
   
   cout << "First Place: " << first->name << ", the " << first->type;
   cout << " with a total of " << first->hits << " hits!" << endl;
}
*/


// Destructor
Stack::~Stack()
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
