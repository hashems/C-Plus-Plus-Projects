/**************************************************************************
 ** Program Filename: Character.cpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Character base class implentation file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "Character.hpp"
#include <string>
#include <cstdlib>

using std::string;


// Constructor
Character::Character()
{
   type = "";
   name = "";
   damage = 0;
   hits = 0;
   achilles = false;
}



// attack
/**************************************************************************
 ** Function: attack
 ** Description: This function calculates and applies the damage dealt to
 ** a Character object.
 ** Parameters: Pointer to a Character object
 ** Pre-Conditions: Character object being pointed to is instantiated
 ** Post-Conditions: Member variables for damage strength altered for
 ** Character object being pointed to
 *************************************************************************/
void Character::attack(Character *opponent)
{
   // If opponent's achilles has been hit
   if(achilles)
   {
      // Calculate attack
      int att = attRoll();
      att /= 2;

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
   
   else if(!achilles)
   {
      // Calculate damage
      opponent->damage = (attRoll() - opponent->defend()) - opponent->armor;

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
