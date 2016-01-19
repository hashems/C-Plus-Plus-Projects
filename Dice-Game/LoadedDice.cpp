/**************************************************************************
 ** Program Filename: LoadedDice.cpp
 ** Author: Sara Hashem
 ** Date: 4/19/2015
 ** Description: LoadedDice class implementation file
 ** Input: None
 ** Output: Integer values for roll() function calculations
 *************************************************************************/

#include <iostream>
#include "Dice.h"
#include "LoadedDice.h"
#include <cstdlib>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// Constructors
/**************************************************************************
 ** Function: LoadedDice Class Default Constructor
 ** Description: This function initializes a LoadedDice object with 6
 ** sides.
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: LoadedDice object created with a default of 2 dice
 ** with 6 sides each
 *************************************************************************/
 LoadedDice::LoadedDice()
{
   setSides(6);
}


/**************************************************************************
 ** Function: LoadedDice Class Constructor
 ** Description: This function initializes a LoadedDice object with the
 ** number of sides input by the user.
 ** Parameters: Two integers
 ** Pre-Conditions: User input stored in parameter variables
 ** Post-Conditions: Call to setDice and setSides functions
 *************************************************************************/
LoadedDice::LoadedDice(int userSides):Dice(sides)
{
   setSides(userSides);
}



// roll (overloaded)
/**************************************************************************
 ** Function: roll
 ** Description: This function similuates the rolling of a die.
 ** Parameters: None
 ** Pre-Conditions: Private data members sides and rolls intialized
 ** Post-Conditions: Integer values for each die rolled and their totals
 *************************************************************************/
void LoadedDice::roll()
{
   // Declare local variables for accumulator and roll values
   int currentRoll, sum;

   // For each roll
   for(int i = 1; i <= numRolls; i++)
   {
      // Initialize accumulator to 0
      sum = 0;

      // Record results
      cout << "Roll #" << i << ":   ";

      // For each die
      for(int x = 1; x <= dice; x++)
      {
	 // Calculate random value and store in variable
	 currentRoll = 2 * (rand() % sides + 1);

	 if(currentRoll >= sides)
	 {
	    currentRoll = sides;
	 }

	 // Record results
	 cout << "Die " << x << ": " << currentRoll << ",  ";

	 // Calculate sum
	 sum += currentRoll;
      }
      cout << endl;
      
      // Store currentRoll in vector
      rollTotals.push_back(sum);
   }

   // Print roll totals
   cout << "The totals for these roll is ";
   for(int i = 0; i < rollTotals.size(); i++)
   {
      cout << rollTotals[i] << " ";
   }
   cout << endl;
}
