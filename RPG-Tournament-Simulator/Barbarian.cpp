/**************************************************************************
 ** Program Filename: Barbarian.cpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Barbarian derived class implentation file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "Character.hpp"
#include "Barbarian.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;


// attRoll (overridden)
/**************************************************************************
 ** Function: attRoll
 ** Description: This function calculates a Barbarian's attack roll and
 ** returns that value.
 ** Parameters: None
 ** Pre-Conditions: Barbarian object instantiated
 ** Post-Conditions: Attack value returned
 *************************************************************************/
int Barbarian::attRoll()
{
   // Declare local variable to store each roll
   int roll, attack = 0;

   for(int i = 1; i <= 2; i++)
   {
      roll = (rand() % 6 + 1);
      attack += roll;
   }
   return attack;
}



// defend (overridden)
/**************************************************************************
 ** Function: defend
 ** Description: This function calculates a Barbarian's defense roll and
 ** returns that value.
 ** Parameters: None
 ** Pre-Conditions: Barbarian object instantiated
 ** Post-Conditions: Defense value returned
 *************************************************************************/
int Barbarian::defend()
{
   // Declare local variable to store each roll
   int roll, defense = 0;

   for(int i = 1; i <= 2; i++)
   {
      roll = (rand() % 6 + 1);
      defense += roll;
   }
   return defense;
}



// regenerate (overridden)
/**************************************************************************
 ** Function: regenerate
 ** Description: This function calculates a Barbarian's regeneration and
 ** updates its strength.
 ** Parameters: None
 ** Pre-Conditions: Barbarian object instantiated
 ** Post-Conditions: Regen value returned
 *************************************************************************/
int Barbarian::regenerate()
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
