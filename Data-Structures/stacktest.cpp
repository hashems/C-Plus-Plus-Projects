/**************************************************************************
 ** Program Filename: stacktest.cpp
 ** Author: Sara Hashem
 ** Date: 5/21/2015
 ** Description: Stack class test driver file
 ** Input: Integers
 ** Output: User prompts, text and integers from function calls
 *************************************************************************/

#include "Stack.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main()
{
   // Create Stack object
   Stack stack;

   // Declare variable to store user input
   int numVals, val;

   // Get number of values from user
   cout << "Enter number of values: ";
   cin >> numVals;
   cout << endl;

   // Build Stack
   cout << "Building Stack..." << endl;
   cout << "Enter your values below:" << endl;
   for(int i = 1; i <= numVals; i++)
   {
      cin >> val;
      stack.push(val);
   }
   cout << endl;

   // Print Stack
   cout << "Removing " << numVals << " Nodes..." << endl;
   for(int i = 1; i <= numVals; i++)
   {
      cout << "Removing " << stack.peek() << endl;;
      stack.pop();
   }
   cout << endl;

   // Rebuild Stack
   cout << "Rebuilding Stack..." << endl;
   for(int i = 1; i <= numVals; i++)
   {
      stack.push(i);
   }
   cout << endl;
   
   // Attempt to print more Nodes than in Stack
   cout << "Attempting to remove more than " << numVals << " Nodes...";
   cout << endl;
   for(int i = 1; i <= (numVals + 1); i++)
   {
      cout << "Removing " << stack.peek() << endl;
      stack.pop();
   }
   cout << endl;


   return 0;
}
