/**************************************************************************
 ** Program Filename: FileFilter.cpp
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: FileFilter class implementation file
 ** Input: Characters from input file
 ** Output: Characters to output file
 *************************************************************************/

#include "FileFilter.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;


// doFilter
/**************************************************************************
 ** Function: doFilter
 ** Description: This function reads data from an input file and passes it
 ** to the pure virtual transform function.
 ** Parameters: References to one input file and one output file
 ** Pre-Conditions: Input and output stream objects created
 ** Post-Conditions: Data read from input file; call to pure virtual
 ** transform function
 *************************************************************************/
void FileFilter::doFilter(ifstream &in, ofstream &out)
{
   // Declare local variable to print results
   char transCh;

   // Read in characters from input file
   in.get(ch);
   while(!in.fail())
   {
      // Call transform function and store return value
      transCh = transform(ch);

      // Print for testing
      out.put(transCh);
      in.get(ch);
   }
   out << endl;
}
