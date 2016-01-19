/**************************************************************************
 ** Program Filename: Encrypt.cpp
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: Encrypt class implementation file
 ** Input: One integer value to store userKey
 ** Output: User prompt for userKey integer value
 *************************************************************************/

#include "FileFilter.h"
#include "Encrypt.h"
#include <fstream>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;

// Constructors
/**************************************************************************
 ** Function: Encrypt class default constructor
 ** Description: This is the default constructor for the Encrypt class
 ** Parameters: None
 ** Pre-Conditins: None
 ** Post-Conditions: Encrypt object created
 *************************************************************************/
Encrypt::Encrypt()
{

}


/**************************************************************************
 ** Function: Encrypt class constructor
 ** Description: This constructor stores the user's input in the key data
 ** member.
 ** Parameters: One integer
 ** Pre-Conditions: Integer value stored in parameter variable
 ** Post-Conditions: Encrypt object created with user's input stored in key
 ** private data member
 *************************************************************************/
Encrypt::Encrypt(int userKey)
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
 ** Pre-Conditions: Encrypt object created
 ** Post-Conditions: User prompted and input stored in userKey key data
 ** members
 *************************************************************************/
void Encrypt::keyPrompt()
{
   // Prompt user for input
   cout << "Enter key: ";
   cin >> userKey;

   key = userKey;
}



// transform (overridden)
/**************************************************************************
 ** Function: transform (overridden)
 ** Description: This functions encrypts a single character and returns the
 ** encrypted character.
 ** Parameters: One character
 ** Pre-Conditions: Encrypt object created; character value stored in
 ** parameter variable
 ** Post-Conditions: Character value returned
 *************************************************************************/
char Encrypt::transform(char ch)
{
   // Declare local variable to store return value
   char enCh;

   // Create encrypted character
   if(isalpha(ch) && islower(ch))
   {
      enCh = (((ch - 97) + key) % 26) + 97;
   }
   else if(isalpha(ch) && isupper(ch))
   {
      enCh = (((ch - 65) + key) % 26) + 65;
   }
   else
   {
      enCh = ch;
   }

   return enCh;
}
