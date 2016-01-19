/**************************************************************************
 ** Program Filename: Shadow.cpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Shadow derived class implentation file
 ** Input: None
 ** Output: Text confirming successful evasion in defend function.
 *************************************************************************/

#include "Character.hpp"
#include "Shadow.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;


// attRoll (overridden)
/**************************************************************************
 ** Function: attRoll
 ** Description: This function calculates a Shadow's attack roll and
 ** returns that value.
 ** Parameters: None
 ** Pre-Conditions: Shadow object instantiated
 ** Post-Conditions: Attack value returned
 *************************************************************************/
int Shadow::attRoll()
{
   // Declare local variable to store each roll
   int roll, attack = 0;

   for(int i = 1; i <= 2; i++)
   {
      roll = (rand() % 10 + 1);
      attack += roll;
   }
   return attack;
}



// defend (overridden)
/**************************************************************************
 ** Function: defend
 ** Description: This function calculates a Shadow's defense roll and
 ** returns that value. If the Shadow successfully evades an attack, their
 ** defense value is set to 1000 and a confirming line of text is printed.
 ** Parameters: None
 ** Pre-Conditions: Goblin object instantiated
 ** Post-Conditions: Defense value returned
 *************************************************************************/
int Shadow::defend()
{
   // Declare local variable to store each roll
   int roll, defense = 0;

   // 50% chance of being attacked
   if(rand() % 2 < 1)
   {
      defense = 1000;

      // Print result
      cout << "Evasion successful! No damage taken!" << endl;
   }

   else
   {
      for(int i = 1; i <= 1; i++)
      {
	 roll = (rand() % 6 + 1);
	 defense += roll;
      }
   }
   return defense;
}



// regenerate (overridden)
/**************************************************************************
 ** Function: regenerate
 ** Description: This function calculates a Shadow's regeneration and
 ** updates its strength.
 ** Parameters: None
 ** Pre-Conditions: Shadow object instantiated
 ** Post-Conditions: Regen value returned
 *************************************************************************/
int Shadow::regenerate()
{
   // Declare local variable to store return value
   int regen = 0;
   
   regen = (rand() % 10 + 1);

   // Update strength
   strength += regen;

   if(strength > 12)
   {
      strength = 12;
   }

   return regen;
}
