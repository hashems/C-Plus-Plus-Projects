/**************************************************************************
 ** Program Filename: Group.cpp
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: Group class implementation file
 ** Input: One integer value to store userKey
 ** Output: User prompt for userKey integer value
 *************************************************************************/

#include "FileFilter.h"
#include "Group.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

// Constructors
/**************************************************************************
 ** Function: Group class default constructor
 ** Description: This is the default constructor for the Group class
 ** Parameters: None
 ** Pre-Conditins: None
 ** Post-Conditions: Group object created
 *************************************************************************/
Group::Group()
{

}


/**************************************************************************
 ** Function: Group class constructor
 ** Description: This constructor stores the user's input in the key data
 ** member.
 ** Parameters: One integer
 ** Pre-Conditions: Integer value stored in parameter variable
 ** Post-Conditions: Group object created with user's input stored in key
 ** private data member
 *************************************************************************/
Group::Group(int userKey)
{
   key = userKey;
}



// keyPrompt
/**************************************************************************
 ** Function: keyPrompt
 ** Description: This (rather unneccessary) function prompts the user for
 ** an integer, stores that value in the userKey data member, then stores
 ** that value in the key data member. (Please note that this function was
 ** only created to satisfy the slightly confusing wording in the lab
 ** description.)
 ** Parameters: None
 ** Pre-Conditions: Group object created
 ** Post-Conditions: User prompted and input stored in userKey key data
 ** members
 *************************************************************************/
void Group::keyPrompt()
{
   cout << "Enter key: ";
   cin >> userKey;

   key = userKey;
}



// transform (overridden)
/**************************************************************************
 ** Function: transform (overridden)
 ** Description: This functions encrypts a single character and returns the
 ** encrypted uppercase character.
 ** Parameters: One character
 ** Pre-Conditions: Group object created; character value stored in
 ** parameter variable
 ** Post-Conditions: Character value returned
 *************************************************************************/
char Group::transform(char ch)
{
   // Declare local variable to store return value
   char enCh;

   // Create encrypted character
   if(isalpha(ch))
   {
      ch = toupper(ch);

      enCh = (((ch - 65) + key) % 26) + 65;
   }
   else
   {
      enCh = ch;
   }

   return enCh;
}


// doFilter (overridden)
/**************************************************************************
 ** Function: doFilter (overridden)
 ** Description: This function outputs encrypted characters with spaces
 ** between groups of 5.
 ** Parameters: References to input and output files
 ** Pre-Conditions: Input file in directory; Group object created
 ** Post-Conditions: Encrypted characters printed to output file.
 *************************************************************************/
void Group::doFilter(ifstream &in, ofstream &out)
{
   // Declare local variable to print results
   char ch, grCh;

//   in.ignore();

   // Read in characters from input file
   in.get(ch);

   int i = 0;
   while(!in.fail())
   {
      // Call transform function and store return value
      grCh = transform(ch);
   
      if((grCh != ' ') && (grCh != '\n') && (grCh != 9))
      {
	 out.put(grCh);
	 i++;
      }

      if((i % 5) == 0)
      {
	 out.put(' ');
      }

      // Get next character
      in.get(ch);
   }
   out << endl;
}
