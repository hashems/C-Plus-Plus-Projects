/**************************************************************************
** Author: Sara Hashem
** Date: 3/4/2015
** Description: This program prints the sum of the values in an array
** using a recursive function.
**************************************************************************/

#include <iostream>
using namespace std;

// Function prototype
double sum(double [], int);

int main ()
{
   // Declare variables to store array size, new array,
   // and return value of function
   int size = 0;
   double *nums, total;

   // Prompt user for number of values and store in variable
   cout << "Let's calculate the sum of a set of values!" << endl;
   cout << "How many values would like to enter? ";
   cin >> size;

   // Create new array of size entered by user
   nums = new double[size];

   // Prompt user to enter values and store in new array
   cout << "Please enter your " << size << " values:" << endl;
   for(int i = 0; i < size; i++)
   {
      cin >> nums[i];
   }

   // Call to sum function, passing
   // pointer to array and size as arugments
   // Store return value in variable
   total = sum(nums, size);

   // Print results
   cout << "The sum of the values is " << total << endl;

   // Free dynamically allocated memory
   delete [] nums;
   nums = 0;
   
   return 0;
}


/**************************************************************************
** Description: This function returns the sum of the values in an array
** using recursion.
** Parameters: This function's parameters are a pointer to an array of
** doubles and an integer.
**************************************************************************/
double sum(double nums[], int size)
{
   // Declare local variable for accumulator and initialize to 0.0
   double total = 0.0;

   // Base case
   if(size == 1)
   {
      total = nums[0];
   }
   // Recursive case
   else
   {
      total = (nums[size - 1] + sum(nums, (size - 1)));
   }
   return total;
}
