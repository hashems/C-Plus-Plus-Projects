/**************************************************************************
 ** Program Filename: Blue.cpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Blue derived class implentation file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "Character.hpp"
#include "Blue.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;


// attRoll (overridden)
/**************************************************************************
 ** Function: attRoll
 ** Description: This function calculates a Blue Man's attack roll and
 ** returns that value.
 ** Parameters: None
 ** Pre-Conditions: Blue object instantiated
 ** Post-Conditions: Attack value returned
 *************************************************************************/
int Blue::attRoll()
{
   // Declare local variable to store each roll
   int roll, attack = 0;

   for(int i = 3; i <= 6; i++)
   {
      roll = (rand() % 30 + 3);
      attack += roll;
   }
   return attack;
}



// defend (overridden)
/**************************************************************************
 ** Function: defend
 ** Description: This function calculates a Goblin's defense roll and
 ** returns that value.
 ** Parameters: None
 ** Pre-Conditions: Goblin object instantiated
 ** Post-Conditions: Defense value returned
 *************************************************************************/
int Blue::defend()
{
   // Declare local variable to store each roll
   int roll, defense = 0;

   for(int i = 3; i <= 9; i++)
   {
      roll = (rand() % 18 + 3);
      defense += roll;
   }
   return defense;
}



// regenerate (overridden)
/**************************************************************************
 ** Function: regenerate
 ** Description: This function calculates a Blue's regeneration and
 ** updates its strength.
 ** Parameters: None
 ** Pre-Conditions: Blue object instantiated
 ** Post-Conditions: Regen value returned
 *************************************************************************/
int Blue::regenerate()
{
   // Declare local variable to store return value
   int regen = 0;
   
   regen = (rand() % 10 + 1);

   // Update strength
   strength += regen;

   if((strength > 36) || (strength > 24))
   {
      strength = 36;
   }
   else if((strength >= 24) || (strength > 12))
   {
      strength = 24;
   }
   else if((strength >= 12) || (strength > 0))
   {
      strength = 12;
   }


   return regen;
}
