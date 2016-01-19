/**************************************************************************
** Author: Sara Hashem
** Date: 1/28/2015
** Description: This program prompts the user for a positive integer, uses
** a function to determine if the integer is a prime number or not, and
** outputs the result.
**************************************************************************/

#include <iostream>
using namespace std;

// Function prototype
bool isPrime (int);

int main ()
{
   // Declare variable for user input
   int num;

   // Prompt user for a positive integer and store in variable
   cout << "Please enter a positive integer and I'll tell you whether it ";
   cout << "is a prime number" << endl;
   cout << "or not: ";
   cin >> num;

   // Call isPrime function, passing user input as argument
   isPrime (num);

   // Print result
   if (isPrime(num))
   {
      cout << num << " is a prime number." << endl;
   }
   else
   {
      cout << num << " is not a prime number." << endl;
   }
   
   return 0;
}


/**************************************************************************
** Description: This function returns true if the value passed is prime and
** false otherwise.
** Parameters: This function's parameter is an integer.
**************************************************************************/

bool isPrime (int value)
{   
   // 1 is not prime
   if (value == 1)
   {
      return false;
   }
   // 2 and 3 are prime
   else if ((value == 2) || (value == 3))
   {
      return true;
   }
   // All other even values are not prime
   else if ((value % 2) == 0)
   {
      return false;
   }
   // For all other odd values
   else if ((value % 2) != 0)
   {
      // Test all integers between 3 and the value
      for (int x = 3; x < value; x++)
      {
	 // If the value is divisible by any integer,
	 // it is not prime
	 if ((value % x) == 0)
	 {
	    return false;
	 }
	 // Otherwise, the value is prime
	 else
	 {
	    return true;
	 }
      }
   }
}
