/**************************************************************************
 ** Program Filename: linear.cpp
 ** Author: Sara Hashem
 ** Date: 5/7/2015
 ** Description: This program searches for a target value in 4 input files.
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


// linear function prototype
int linear(vector<int>*, int);


int main()
{
   // Create file stream objects
   ifstream in1, in2, in3, in4;
   
   // Declare variable to store input and return values
   int value, target, position1, position2, position3, position4;

   // Create vector to store file input
   vector<int> input1;
   vector<int> input2;
   vector<int> input3;
   vector<int> input4;

   // Open files
   in1.open("in1.txt");
   in2.open("in2.txt");
   in3.open("in3.txt");
   in4.open("in4.txt");

   // Process file input
   if(in1 && in2 && in3 && in4)
   {
      // Store values from files in vectors
      while(in1 >> value)
      {
	 input1.push_back(value);
      }

      while(in2 >> value)
      {
	 input2.push_back(value);
      }
      
      while(in3 >> value)
      {
	 input3.push_back(value);
      }

      while(in4 >> value)
      {
	 input4.push_back(value);
      }

      // Prompt user for target value to search for
      cout << "What value would you like to search for? ";
      cin >> target;

      // Call linear search functions and print results
      position1 = linear(&input1, target);
      position2 = linear(&input2, target);
      position3 = linear(&input3, target);
      position4 = linear(&input4, target);
      
      if(position1 > -1)
      {
	 cout << "The target value of " << target << " was found at";
	 cout << " position " << position1 << " in in1.txt" << endl;
      }
      else
      {
	 cout << "The target value of " << target << " was not found in ";
	 cout << " in1.txt" << endl;
      }

      if(position2 > -1)
      {
	 cout << "The target value of " << target << " was found at";
	 cout << " position " << position2 << " in in2.txt" << endl;
      }
      else
      {
	 cout << "The target value of " << target << " was not found in ";
	 cout << " in2.txt" << endl;
      }

      if(position3 > -1)
      {
	 cout << "The target value of " << target << " was found at";
	 cout << " position " << position3 << " in in3.txt" << endl;
      }
      else
      {
	 cout << "The target value of " << target << " was not found in ";
	 cout << " in3.txt" << endl;
      }
      
      if(position4 > -1)
      {
	 cout << "The target value of " << target << " was found at";
	 cout << " position " << position4 << " in in4.txt" << endl;
      }
      else
      {
	 cout << "The target value of " << target << " was not found in ";
	 cout << " in4.txt" << endl;
      }
   }
   else
   {
      cout << "Error: files could not be opened." << endl;
   }

   // Close files
   in1.close();
   in2.close();
   in3.close();
   in4.close();


   return 0;
}



// linear function implementation
/**************************************************************************
 ** Function: linear
 ** Description: This function performs a linear search for a value in a
 ** vector.
 ** Parameters: Pointer to a vector of integers and one integer
 ** Pre-Conditions: Vector being pointed to is not empty
 ** Post_Conditions: Integer value of position containing target value is
 ** returned.
 *************************************************************************/
int linear(vector<int>* input, int target)
{
   // Declare local variables to store index, position, and flag values
   unsigned index = 0;
   int position = -1;
   bool found = false;

   while((index < input->size()) && !found)
   {
      // If the value is found
      if(input->at(index) == target)
      {
	 // Set flag
	 found = true;

	 // Store value's index in position variable
	 position = index;
      }
      // Get next value
      index++;
   }
   return position;
}
