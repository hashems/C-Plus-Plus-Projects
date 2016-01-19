/**************************************************************************
 ** Program Filename: Stack.cpp
 ** Author: Sara Hashem
 ** Date: 5/21/2015
 ** Description: Stack class implementation file
 ** Input: None
 ** Output: Error messages text printed to screen
 *************************************************************************/

#include "Stack.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;


// push
/**************************************************************************
 ** Function: push
 ** Description: This function pushes a new Node to the top of the Stack.
 ** Parameters: One integer
 ** Pre-Conditions: Stack object instantiated
 ** Post-Conditions: New Node pushed to top of Stack
 *************************************************************************/
void Stack::push(int num)
{
   top = new Node(num, top);
}



// peek
/**************************************************************************
 ** Function: peek
 ** Description: This function returns the value at the top of the Stack.
 ** Parameters: None
 ** Pre-Conditions: Stack object instantiated
 ** Post-Conditions: Value at top of Stack returned
 *************************************************************************/
int Stack::peek()
{
   if(isEmpty())
   {
      cout << "The Stack is empty! No more Nodes!" << endl;
      exit(1);
   }
   else
   {
      return top->value;
   }
}



// pop
/**************************************************************************
 ** Function: pop
 ** Description: This function pops the Node at the top of the Stack
 ** and replaces it with the next Node.
 ** Parameters: None
 ** Pre-Conditions: Stack object instantiated
 ** Post-Conditions: Node at top of Stack popped
 *************************************************************************/
void Stack::pop()
{
   // Declare local variable to store Node to be deleted
   Node *temp;

   if(isEmpty())
   {
      cout << "The Stack is empty! No more Nodes!" << endl;
   }
   else
   {
      temp = top;
      top = top->next;
      delete temp;
   }
}



// isEmpty
/**************************************************************************
 ** Function: isEmpty
 ** Description: This function returns true if the Stack is empty and false
 ** otherwise.
 ** Parameters: None
 ** Pre-Conditions: Stack object instantiated
 ** Post-Conditions: Returns true if Stack is empty
 *************************************************************************/
bool Stack::isEmpty()
{
   if(!top)
   {
      return true;
   }
   else
   {
      return false;
   }
}



// Destructor
Stack::~Stack()
{
   while(!isEmpty())
   {
      pop();
   }
}
