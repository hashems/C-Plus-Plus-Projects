/**************************************************************************
 ** Program Filename: Queue.cpp
 ** Author: Sara Hashem
 ** Date: 5/21/2015
 ** Description: Queue class implementation file
 ** Input: None
 ** Output: Error messages text printed to screen
 *************************************************************************/

#include "Queue.hpp"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;


// Concstructor
Queue::Queue()
{
   front = NULL;
   back = NULL;
}



// addBack
/**************************************************************************
 ** Function: addBack
 ** Description: This function adds a new Node to the back of the Queue.
 ** Parameters: One integer
 ** Pre-Conditions: Queue object instantiated
 ** Post-Conditions: New Node added to back of Queue
 *************************************************************************/
void Queue::addBack(int num)
{
   if(isEmpty())
   {
      front = new Node(num);
      back = front;
   }
   else
   {
      back->next = new Node(num);
      back = back->next;
   }
}



// getFront
/**************************************************************************
 ** Function: getFront
 ** Description: This function returns the value at the front of the Queue.
 ** Parameters: None
 ** Pre-Conditions: Queue object instantiated
 ** Post-Conditions: Value at front of Queue returned
 *************************************************************************/
int Queue::getFront()
{
   if(isEmpty())
   {
      cout << "The Queue is empty! No more Nodes!" << endl;
      exit(1);
   }
   else
   {
      return front->value;
   }
}



// removeFront
/**************************************************************************
 ** Function: removeFront
 ** Description: This function removes the Node at the top of the Queue and
 ** replaces it with the next Node.
 ** Parameters: None
 ** Pre-Conditions: Queue object instantiated
 ** Post-Conditions: Node at front of Queue removed
 *************************************************************************/
void Queue::removeFront()
{
   // Declare local variable to store Node to be deleted
   Node *temp;

   if(isEmpty())
   {
      cout << "The Queue is empty! No more Nodes!" << endl;
   }
   else
   {
      temp = front;
      front = front->next;
      delete temp;
   }
}



// isEmpty
/**************************************************************************
 ** Function: isEmpty
 ** Description: This function returns true if the Queue is empty and false
 ** otherwise.
 ** Parameters: None
 ** Pre-Conditions: Queue object instantiated
 ** Post-Conditions: Returns true if Queue is empty
 *************************************************************************/
bool Queue::isEmpty()
{
   if(front == NULL)
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
   while(!isEmpty())
   {
      removeFront();
   }
}
