/**************************************************************************
 ** Program Filename: combat.cpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: combat function implentation file
 ** Input: None
 ** Output: Text from function calls
 *************************************************************************/

#include "Character.hpp"
#include "combat.hpp"
#include <iostream>

using std::cout;
using std::endl;


// combat
/**************************************************************************
 ** Function: combat
 ** Description: This function has two Characters attack each other until
 ** one of them has a strength of 0 or less. Text is printed to confirm
 ** damage and strength totals and updates when a Character has been
 ** knocked out.
 ** Parameters: Two pointers to Character objects
 ** Pre-Conditions: Character objects being pointed to are instantiated 
 ** Post-Conditions: Text printed to screen.
 *************************************************************************/
int combat(Character *fighter1, Character *fighter2)
{
   // Declare local varibale to store return value
   int result = 0;

   while((fighter1->strength != 0) && (fighter2->strength != 0))
   {
      // Call attack functions
      fighter1->attack(fighter2);
      fighter2->attack(fighter1);
   
      // Print results
      cout << fighter2->name << " has taken " << fighter2->damage;
      cout << " damage this round. Remaining Strength: ";
      cout << fighter2->strength << endl;

      if(fighter2->damage > 0)
      {
	 fighter1->hits++;
      }
      
      cout << fighter1->name << " has taken " << fighter1->damage;
      cout << " damage this round. Remaining Strength: ";
      cout << fighter1->strength << endl;
      
      if(fighter1->damage > 0)
      {
	 fighter2->hits++;
      }
      
      // For Blue Men
      if(fighter1->type == "band of Blue Men")
      {
	 if((fighter1->strength <= 24) || (fighter1->strength <= 12))
	 {
	    cout << "One Blue Man has perished." << endl;
	 }
      }
      
      if(fighter2->type == "band of Blue Men")
      {
	 if((fighter2->strength <= 24) || (fighter2->strength <= 12))
	 {
	    cout << "One Blue Man has perished." << endl;
	 }
      }

      // Print results
      if(fighter2->strength == 0)
      {
	 // Print result and return
	 cout << fighter2->name << ", the " << fighter2->type;
	 cout << ", has perished." << endl;

	 // Regenerate winner's strength and print result
	 cout << fighter1->name << " recovered ";
	 cout << fighter1->regenerate() << " Strength points. ";
	 cout << " Remaining Strength: " << fighter1->strength << endl;
	 cout << endl;
	 
	 result = 2;
      }

      else if(fighter1->strength == 0)
      {
	 // Print result and return
	 cout << fighter1->name << ", the " << fighter1->type;
	 cout << ", has perished." << endl;

	 // Regenerate winner's strength and print result
	 cout << fighter2->name << " recovered ";
	 cout << fighter2->regenerate() << " Strength points. ";
	 cout << " Remaining Strength: " << fighter2->strength << endl;
	 cout << endl;
	 
	 result = 1;
      }
   }

   return result;
}
