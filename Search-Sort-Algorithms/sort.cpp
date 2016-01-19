/**************************************************************************
 ** Program Filename: sort.cpp
 ** Author: Sara Hashem
 ** Date: 5/7/2015
 ** Description: This program sorts the values in 4 input files and prints
 ** them to a file.
 ** Input: String value
 ** Output: Integer values printed to file; text confirmation of values
 ** written to file.
 *************************************************************************/

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using std::ifstream;
using std::ofstream;
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;


// sort function prototype
void sort(vector<int>*);


int main()
{
   // Create file stream objects
   ifstream in1, in2, in3, in4;
   ofstream out;

   // Declare variable to store input
   string filename;
   int value;

   // Create vector to store file input
   vector<int> input;

   // Prompt user for output filename
   cout << "Output filename: ";
   cin >> filename;

   // Open files
   in1.open("in1.txt");
   in2.open("in2.txt");
   in3.open("in3.txt");
   in4.open("in4.txt");
   out.open(filename.c_str());

   // Process file input
   if(in1 && in2 && in3 && in4 && out)
   {
      // Store values from files in vector
      while(in1 >> value)
      {
	 input.push_back(value);
      }

      while(in2 >> value)
      {
	 input.push_back(value);
      }

      while(in3 >> value)
      {
	 input.push_back(value);
      }

      while(in4 >> value)
      {
	 input.push_back(value);
      }
   
      // Call sort function
      sort(&input);

      // Print results to output file
      for(unsigned i = 0; i < input.size(); i++)
      {
	 out << input.at(i) << " ";
      }

      cout << "New data has been written to " << filename << "." << endl;
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
   out.close();


   return 0;
}



// sort function implementation
/**************************************************************************
 ** Function: sort
 ** Description: This function sorts the values in a vector in ascending
 ** order.
 ** Parameters: Pointer to a vector of integers
 ** Pre-Conditions: Vector being pointed to is not empty
 ** Post_Conditions: Vector values sorted in ascending order.
 *************************************************************************/
void sort(vector<int>* input)
{
   // Declare local variables to store start, minIndex, and minVal
   unsigned start;
   int minIndex, minVal;

   for(start = 0; start < (input->size() - 1); start++)
   {
      minIndex = start;
      minVal = input->at(start);

      for(unsigned index = (start + 1); index < input->size(); index++)
      {
	 if(input->at(index) < minVal)
	 {
	    minVal = input->at(index);
	    minIndex = index;
	 }
      }
      input->at(minIndex) = input->at(start);
      input->at(start) = minVal;
   }
}
