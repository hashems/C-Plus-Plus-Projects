/**************************************************************************
 ** Program Filename: main.cpp
 ** Author: Sara Hashem
 ** Date: 4/19/2015
 ** Description: This program simulates the rolling of Dice objects and
 ** LoadedDice objects and performs calculations of the statistics of their
 ** rolls.
 ** Input: Integer values for the number of sides and rolls
 ** Output: User prompts and integer and double values from function calls
 *************************************************************************/

#include <iostream>
#include "Dice.h"
#include "LoadedDice.h"
#include <cstdlib>
#include <ctime>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
   // Create Dice objects
   Dice dice;

   // Create LoadedDice objects
   LoadedDice loaded;

   // Declare variables to store user input
   int userDice, userSides, userRolls;
   
   // Generate seed for rand function
   srand(time(0));

   // Prompt user for number of dice and store in variable
   cout << endl;
   cout << "Step right up! Step right up! Take a chance and roll the ";
   cout << "dice!" << endl;
   cout << "How many dice would you like to roll? ";
   cin >> userDice;

   // Prompt user for number of sides and store in variable
   cout << "How many sides on your lucky dice? ";
   cin >> userSides;

   // Prompt user for number of rolls and store in variable
   cout << "How many times would you like to roll these lucky dice? ";
   cin >> userRolls;
   cout << endl;
   cout << "Hear them rattle! Hear them roll..." << endl;
   cout << endl;


   // Dice object section
   // Call set methods for Dice object
   dice.setDice(userDice);
   dice.setSides(userSides);
   dice.setRolls(userRolls);

   // Call roll and statistics methods for Dice object
   dice.roll();
   
   cout << "The mean for these rolls is " << dice.mean() << endl;

   dice.median();
   dice.mode();
   dice.std_dev();


   // LoadedDice object section
   // Call set methods for LoadedDice object
   loaded.setDice(userDice);
   loaded.setSides(userSides);
   loaded.setRolls(userRolls);

   // Call roll and statistics methods for Dice object
   loaded.roll();
   
   cout << "The mean for these rolls is " << loaded.mean() << endl;

   loaded.median();
   loaded.mode();
   loaded.std_dev();







/*
   // Reset rollTotals vector
   rollTotals.clear();


   // LoadedDice objects section
   // Call set methods for loaded1
   load1.setSides(userSides);
   load1.setRolls(userRolls);

   // Call roll and statistics functions for loaded1
   load1.roll();

   // Store class vector values in local vector values
   for(int i = 0; i < userRolls; i++)
   {
      loaded1.push_back(load1.rolls[i]);
   }

   // Call set methods for loaded2
   load2.setSides(userSides);
   load2.setRolls(userRolls);

   // Call roll and statistics functions for loaded2
   load2.roll();

   // Store class vector values in local vector values
   for(int i = 0; i < userRolls; i++)
   {
      loaded2.push_back(load2.rolls[i]);
   }

   // Calculate totals for each roll
   for(int i = 0; i < userRolls; i++)
   {
      rollTotals.push_back(loaded1[i] + loaded2[i]);
   }

   // Calculate mean
   mean = 0;
   sum = 0;

   for(int i = 0; i < rollTotals.size(); i++)
   {
      sum += rollTotals[i];
   }

   mean = sum / rollTotals.size();

   // Print result 
   cout << "The mean for these rolls is " << mean << endl;

   // Call statistical analysis methods the LoadedDice object rolls
   median(rollTotals);
   mode(rollTotals);
   std_dev(rollTotals, mean);

   // Reset rollTotals vector
   rollTotals.clear();
*/
   return 0;
}
