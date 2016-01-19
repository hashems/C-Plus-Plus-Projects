/**************************************************************************
 ** Program Filename: queuetest.cpp
 ** Author: Sara Hashem
 ** Date: 5/21/2015
 ** Description: Queue class test driver file
 ** Input: Integers
 ** Output: User prompts, text and integers from function calls
 *************************************************************************/

#include "Queue.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main()
{
   // Create Queue object
   Queue cue;

   // Declare variable to store user input
   int numVals, val;

   // Get number of values from user
   cout << "Enter number of values: ";
   cin >> numVals;
   cout << endl;

   // Queue Stack
   cout << "Building Queue..." << endl;
   cout << "Enter your values below:" << endl;
   for(int i = 1; i <= numVals; i++)
   {
      cin >> val;
      cue.addBack(val);
   }
   cout << endl;

   // Print Queue
   cout << "Removing " << numVals << " Nodes..." << endl;
   for(int i = 1; i <= numVals; i++)
   {
      cout << "Removing " << cue.getFront() << endl;
      cue.removeFront();
   }
   cout << endl;

   // Rebuild Queue
   cout << "Rebuilding Queue..." << endl;
   for(int i = 1; i <= numVals; i++)
   {
      cue.addBack(i);
   }
   cout << endl;
   
   // Attempt to print more Nodes than in Queue
   cout << "Attempting to remove more than " << numVals << " Nodes...";
   cout << endl;
   for(int i = 1; i <= (numVals + 1); i++)
   {
      cout << "Removing " << cue.getFront() << endl;
      cue.removeFront();
   }
   cout << endl;


   return 0;
}
