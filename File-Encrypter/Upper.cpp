/**************************************************************************
 ** Program Filename: Upper.cpp
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: Upper class implementation file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "FileFilter.h"
#include "Upper.h"
#include <cstdlib>

using namespace std;

// transform (overridden)
/**************************************************************************
 ** Function: transform (overridden)
 ** Description: This function converts a character to uppercase and
 ** returns that character value.
 ** Parameters: One character
 ** Pre-Conditions: Upper object created; character value stored in
 ** parameter variable
 ** Post-Conditions: Character value returned
 *************************************************************************/
char Upper::transform(char ch)
{
   char upCh;

   upCh = toupper(ch);

   return upCh;
}
