/**************************************************************************
 ** Program Filename: Goblin.cpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Goblin derived class implentation file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "Character.hpp"
#include "Goblin.hpp"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;
using std::string;


// attRoll (overridden)
/**************************************************************************
 ** Function: attRoll
 ** Description: This function calculates a Goblin's attack roll and
 ** returns that value.
 ** Parameters: None
 ** Pre-Conditions: Goblin object instantiated
 ** Post-Conditions: Attack value returned
 *************************************************************************/
int Goblin::attRoll()
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
 ** Description: This function calculates a Goblin's defense roll and
 ** returns that value.
 ** Parameters: None
 ** Pre-Conditions: Goblin object instantiated
 ** Post-Conditions: Defense value returned
 *************************************************************************/
int Goblin::defend()
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



// attack (overridden)
/**************************************************************************
 ** Function: attack
 ** Description: This function calculates and applies the damage dealt to
 ** a Character object from a Goblin object. If the Goblin rolls a natural
 ** 12 to attack, the opponent's achilles tendon has been hit and their
 ** attack is halved for the remainder of combat (only for non-Goblin
 ** opponents).
 ** Parameters: Pointer to a Character object
 ** Pre-Conditions: Character object being pointed to is instantiated
 ** Post-Conditions: Member variables for damage strength altered for
 ** Character object being pointed to
 *************************************************************************/
void Goblin::attack(Character *opponent)
{
   // Calculate attack
   int att = attRoll();

   // If opponent is not a Goblin and attack roll is 12
   if((opponent->type != "GOBLIN") && (opponent->type != "GOBLIN") && 
      (att == 12))
   {
      // Set flag
      opponent->achilles = true;
      cout << opponent->type << "'s achilles has been cut! Attack ";
      cout << "halved for the remainder of combat!" << endl;

      // Calculate damage
      opponent->damage = (att - opponent->defend()) - opponent->armor;
      
      if(opponent->damage < 0)
      {
	 opponent->damage = 0;
      }
      
      // Apply damage
      opponent->strength -= opponent->damage;
      
      if(opponent->strength < 0)
      {
	 opponent->strength = 0;
      }
   }

   // If opponent is a Goblin and attack roll is not 12
   else
   {
      // Set flag
      opponent->achilles = false;

      // Calculate damage
      opponent->damage = (att - opponent->defend()) - opponent->armor;
      
      if(opponent->damage < 0)
      {
	 opponent->damage = 0;
      }
      
      // Apply damage
      opponent->strength -= opponent->damage;
      
      if(opponent->strength < 0)
      {
	 opponent->strength = 0;
      }
   }
}



// regenerate (overridden)
/**************************************************************************
 ** Function: regenerate
 ** Description: This function calculates a Goblin's regeneration and
 ** updates its strength.
 ** Parameters: None
 ** Pre-Conditions: Goblin object instantiated
 ** Post-Conditions: Regen value returned
 *************************************************************************/
int Goblin::regenerate()
{
   // Declare local variable to store return value
   int regen = 0;
   
   regen = (rand() % 10 + 1);

   // Update strength
   strength += regen;

   if(strength > 8)
   {
      strength = 8;
   }

   return regen;
}
