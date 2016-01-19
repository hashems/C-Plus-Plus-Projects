/**************************************************************************
 ** Program Filename: main.cpp
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: This program is a ciphertext file filter.
 ** Input: None
 ** Output: Error messages for unopened files
 *************************************************************************/

#include "FileFilter.h"
#include "Copy.h"
#include "Encrypt.h"
#include "Upper.h"
#include "Group.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

int main()
{
   // Create file stream objects
   ifstream in;
   ofstream out;


   // Create objects

   /* (Can be uncommented for error checking)
   Copy userCopy;
   Encrypt userEncrypt;
   Upper userUpper;
   */

   Group userGroup;


   // Open files
   in.open("in.txt");
   out.open("out.txt");

   if(!in)
   {
      cout << "in.txt could not be opened." << endl;
   }

   if(!out)
   {
      cout << "out.txt could not be opened." << endl;
   }


   // Call doFilter and keyPrompt functions

   /* (Can be uncommented for error checking)
   userCopy.doFilter(in, out);
   
   userEncrypt.keyPrompt();
   userEncrypt.doFilter(in, out);

   userUpper.doFilter(in, out);
   */

   userGroup.keyPrompt();
   userGroup.doFilter(in, out);
   

   // Close files
   in.close();
   out.close();


   return 0;
}
