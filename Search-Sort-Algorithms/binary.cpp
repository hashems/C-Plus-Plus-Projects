/**************************************************************************
 ** Program Filename: binary.cpp
 ** Author: Sara Hashem
 ** Date: 5/7/2015
 ** Description: This program searches for a target value in an input file.
 ** Input: Integer target value
 ** Output: Text results of searches
 *************************************************************************/

#include <fstream>
#include <iostream>
#include <vector>

using std::ifstream;
using std::vector;
using std::cout;
using std::endl;
using std::cin;


// binary function prototype
int binary(vector<int>*, int);


int main()
{
   // Create file stream object
   ifstream in;

   // Declare variable to store input and return value
   int value, target, position;

   // Create vector to store file input
   vector<int> input;

   // Open file
   in.open("in.txt");

   // Process file input
   if(in)
   {
      // Store values from file in vector
      while(in >> value)
      {
	 input.push_back(value);
      }

      // Prompt user for target value to search for
      cout << "What value would you like to search for? ";
      cin >> target;

      // Call binary function and print result
      position = binary(&input, target);

      if(position > -1)
      {
	 cout << "The target value of " << target << " was found at";
	 cout << " position " << position << endl;
      }
      else
      {
	 cout << "The target value of " << target << " was not found.";
	 cout << endl;
      }
   }
   else
   {
      cout << "Error: file could not be opened." << endl;
   }

   // Close file
   in.close();


   return 0;
}



// binary function implementation
/**************************************************************************
 ** Function: binary
 ** Description: This function performs a binary search for a value in a
 ** vector.
 ** Parameters: Pointer to a vector of integers and one integer
 ** Pre-Conditions: Vector being pointed to is not empty
 ** Post_Conditions: Integer value of position containing target value is
 ** returned.
 *************************************************************************/
int binary(vector<int>* input, int target)
{
   // Declare local variables to store first and last elements,
   // midpoint, position, and flag
   int first = 0,
       last = (input->size() - 1),
       middle,
       position = -1;
   bool found = false;

   while(!found && (first <= last))
   {
      // Find midpoint
      middle = (first + last) / 2;
      
      // If target is at midpoint
      if(input->at(middle) == target)
      {
	 found = true;
	 position = middle;
      }

      // If target is in lower half
      else if(input->at(middle) > target)
      {
	 last = middle - 1;
      }

      // If target is in upper half
      else
      {
	 first = middle + 1;
      }
   }
   return position;
}
