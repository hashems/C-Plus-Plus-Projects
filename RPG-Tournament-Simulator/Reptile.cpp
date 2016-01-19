/**************************************************************************
 ** Program Filename: Reptile.cpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Reptile derived class implentation file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "Character.hpp"
#include "Reptile.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;


// attRoll (overridden)
/**************************************************************************
 ** Function: attRoll
 ** Description: This function calculates a Reptile Person's attack roll
 ** and returns that value.
 ** Parameters: None
 ** Pre-Conditions: Reptile object instantiated
 ** Post-Conditions: Attack value returned
 *************************************************************************/
int Reptile::attRoll()
{
   // Declare local variable to store each roll
   int roll, attack = 0;

   for(int i = 1; i <= 3; i++)
   {
      roll = (rand() % 6 + 1);
      attack += roll;
   }
   return attack;
}



// defend (overridden)
/**************************************************************************
 ** Function: defend
 ** Description: This function calculates a Reptile Person's defense roll
 ** and returns that value.
 ** Parameters: None
 ** Pre-Conditions: Reptile object instantiated
 ** Post-Conditions: Defense value returned
 *************************************************************************/
int Reptile::defend()
{
   // Declare local variable to store each roll
   int roll, defense = 0;

   for(int i = 1; i <= 1; i++)
   {
      roll = (rand() % 6 + 1);
      defense += roll;
   }
   return defense;
}



// regenerate (overridden)
/**************************************************************************
 ** Function: regenerate
 ** Description: This function calculates a Reptile's regeneration and
 ** updates its strength.
 ** Parameters: None
 ** Pre-Conditions: Reptile object instantiated
 ** Post-Conditions: Regen value returned
 *************************************************************************/
int Reptile::regenerate()
{
   // Declare local variable to store return value
   int regen = 0;
   
   regen = (rand() % 10 + 1);

   // Update strength
   strength += regen;

   if(strength > 18)
   {
      strength = 18;
   }

   return regen;
}
