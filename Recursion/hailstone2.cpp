/**************************************************************************
** Author: Sara Hashem
** Date: 3/4/2015
** Description: This program calculates the number of steps it takes a
** value to reach 1 within the hailstone sequence using a recursive
** function.
**************************************************************************/

#include <iostream>
using namespace std;

// Function prototype
int hailstone(int);

int main()
{
   // Declare variables to store user input and return value of function
   int num, stepsTaken;

   // Prompt user for input and store in variable
   cout << "Please enter a positive integer and I'll tell you how many ";
   cout << "steps it will take" << endl;
   cout << "to reach 1 within the hailstone sequence: ";
   cin >> num;

   // Call to hailstone function, passing
   // user input as arugment
   // Store return value in variable
   stepsTaken = hailstone(num);

   // Print results
   cout << "It would take " << stepsTaken << " steps for " << num;
   cout << " to reach 1 within the hailstone sequence." << endl;
   
   return 0;
}


/**************************************************************************
** Description: This function calculates the number of steps it takes an
** integer to reach 1 within the hailstone sequence using recursion.
** Parameters: This function's parameter is an integer.
**************************************************************************/
int hailstone(int value)
{
   // Declare local variable for counter and initialize to 0
   int steps = 0;

   // Base case
   if(value == 1)
   {
      return steps;
   }
   // Recursive case
   else
   {
      if((value % 2) == 0)
      {
	 value /= 2;
	 return hailstone(value) + 1;
      }
      else
      {
	 value = (value * 3) + 1;
	 return hailstone(value) + 1;
      }
   }
}
