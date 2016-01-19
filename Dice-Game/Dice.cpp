/**************************************************************************
 ** Program Filename: Dice.cpp
 ** Author: Sara Hashem
 ** Date: 4/19/2015
 ** Description: Dice class implementation file
 ** Input: None
 ** Output: Integer and double values for roll(), median(), mode(), and
 ** std_dev() function calculations
 *************************************************************************/

#include <iostream>
#include "Dice.h"
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cmath>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

// Constructors
/**************************************************************************
 ** Function: Dice Class Default Constructor
 ** Description: This function intializes a Dice object with 6 sides.
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: Dice object created with a default of 6 sides
 *************************************************************************/
Dice::Dice()
{
   setSides(6);
}


/**************************************************************************
 ** Function: Dice Class Constructor
 ** Description: This function initializes a Dice object with the number of
 ** sides input by the user.
 ** Parameters: One integer
 ** Pre-Conditions: User's input stored in parameter variable
 ** Post-Conditions: Call to setSides function
 *************************************************************************/
Dice::Dice(int userSides)
{
   setSides(userSides);
}



// Set methods
/**************************************************************************
 ** Function: setDice
 ** Description: This function sets the private data member for dice equal
 ** to the number of dice input by the user or 1 if the input is invalid.
 ** Parameters: One integer
 ** Pre-Conditions: User input stored in parameter variable
 ** Post-Conditions: Private data member dice equal to user input
 *************************************************************************/
void Dice::setDice(int userDice)
{
   // Validate input
   if(userDice < 1)
   {
      dice = 1;
      cout << "Invalid number of dice. Using default value of 1.\n";
   }
   else
   {
      dice = userDice;
   }
}


/**************************************************************************
 ** Function: setSides
 ** Description: This function sets the private data member for sides
 ** equal to the number of sides input by the user or 6 if input is
 ** invalid.
 ** Parameters: One integer
 ** Pre-Conditions: User input stored in parameter variable
 ** Post-Conditions: Private data member sides equal to user input
 *************************************************************************/
void Dice::setSides(int userSides)
{
   // Validate input
   if(userSides < 2)
   {
      sides = 6;
      cout << "Invalud number of sides. Using default value of 6.\n";
   }
   else
   {
      sides = userSides;
   }
}


/**************************************************************************
 ** Function: setRolls
 ** Description: This function sets the private data member for rolls
 ** equal to the number of rolls input by the user or 1 if input is
 ** invalid.
 ** Parameters: One integer
 ** Pre-Conditions: User input stored in parameter variable
 ** Post-Conditions: Private data member rolls equal to user input
 *************************************************************************/
void Dice::setRolls(int userRolls)
{
   // Validate input
   if(userRolls < 1)
   {
      numRolls = 1;
      cout << "Invalid number of rolls. Using default value of 1.\n";
   }
   else
   {
      numRolls = userRolls;
   }
}



// roll
/**************************************************************************
 ** Function: roll
 ** Description: This function similuates the rolling of a die.
 ** Parameters: None
 ** Pre-Conditions: Private data members sides and rolls intialized
 ** Post-Conditions: Integer values for each die rolled and their totals
 *************************************************************************/
void Dice::roll()
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
	 currentRoll = (rand() % sides + 1);

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



// Statistical calculations
/**************************************************************************
 ** Function: mean
 ** Description: This function calculates the mean value of the rolls of a
 ** die
 ** Parameters: None
 ** Pre-Conditions: Integer vector created
 ** Post-Conditions: Mean value returned
 *************************************************************************/
double Dice::mean()
{
   // Declare local variables for mean and sum
   double mean = 0;
   int sum = 0;

   // Calculate mean
   for(int i = 0; i < rollTotals.size(); i++)
   {
      sum += rollTotals[i];
   }

   mean = sum / rollTotals.size();

   // Return result
   return mean;
}


/**************************************************************************
 ** Function: median
 ** Description: This function calculates the median value of the rolls of
 ** a die
 ** Parameters: None
 ** Pre-Conditions: Integer vector created
 ** Post-Conditions: Median value printed to screen
 *************************************************************************/
void Dice::median()
{
   // Declare local variable for median
   double median = 0;

   // Sort vector
   sort(rollTotals.begin(), rollTotals.end());

   // Calculate median
   // For single roll
   if(rollTotals.size() == 1)
   {
      median = rollTotals[0];
   }
   // For rolls for two or more
   else
   {
      // For an even number of values
      if((rollTotals.size() % 2) == 0)
      {
	 // Declare and intialize local variables for middle values
	 int mid1 = rollTotals[(rollTotals.size() / 2) - 1];
	 int mid2 = rollTotals[rollTotals.size() / 2];

	 median = (mid1 + mid2) / 2;
      }
      // For odd number of values
      else
      {
	 median = rollTotals[rollTotals.size() / 2];
      }
   }

   // Print results
   cout << "The median for these rolls is " << median << endl;
}


/**************************************************************************
 ** Function: mode
 ** Description: This function calculates the mode values of the rolls of
 ** a die
 ** Parameters: None
 ** Pre-Conditions: Integer vector created
 ** Post-Conditions: Mode values printed to screen
 *************************************************************************/
void Dice::mode()
{
   // Declare local variable next value and frequencies
   int next = 1, freq = 1, maxFreq = 1;

   // Sort vector
   sort(rollTotals.begin(), rollTotals.end());

   // Calculate mode
   // For single roll
   if(rollTotals.size() == 1)
   {
      cout << "The mode for these rolls is " << rollTotals.at(0) << endl;
   }

   // For two or more rolls
   else
   {
      // Find maximum frequency of values
      for(int i = 0; i < (rollTotals.size() - 1); i++, next++)
      {
	 if(rollTotals[i] == rollTotals[next])
	 {
	    freq++;

	    if(freq > maxFreq)
	    {
	       maxFreq = freq;
	    }
	 }
	 else if(rollTotals[i] != rollTotals[next])
	 {
	    freq = 1;
	 }
      }

      // Reinitialize variables for frequency and next
      freq = 1;
      next = 1;
      
      // Print results
      cout << "The mode(s) for these rolls is(are) ";
   
      for(int i = 0; i < rollTotals.size(); i++, next++)
      {
         if(freq == maxFreq)
         {
	    cout << rollTotals[i] << " ";
	 }
	 
	 if(rollTotals[i] == rollTotals[next])
	 {
	    freq++;
	 }
	 else if(rollTotals[i] != rollTotals[next])
	 {
	    freq = 1;
	 }
      }
   }
   cout << endl;
}


/**************************************************************************
 ** Function: std_dev
 ** Description: This function calculates the standard deviation value of
 ** the rolls of a die
 ** Parameters: None
 ** Pre-Conditions: Integer vector created
 ** Post-Conditions: Standard deviation value printed to screen
 *************************************************************************/
void Dice::std_dev()
{
   // Declare local variable for sum of differences and standard deviation
   double sumDiff = 0, sd = 0;

   // Calculate the sum of differences squared
   for(int i = 0; i < rollTotals.size(); i++)
   {
      sumDiff += pow((rollTotals[i] - mean()), 2);
   }

   // Calculate standard deviation
   sd = sqrt(sumDiff / (rollTotals.size() - 1));

   // Print result
   cout << "The standard deviation for these rolls is " << sd << endl;
   cout << endl;
}
