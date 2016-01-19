/**************************************************************************
** Author: Sara Hashem
** Date: 3/4/2015
** Description: This program prints the elements of an array in reverse
** order using a recursive function.
**************************************************************************/

#include <iostream>
using namespace std;

// Function prototype
void reverse(int [], int);

int main()
{
   // Declare variables to store array size and new array
   int size = 0;
   int *nums;

   // Prompt user for number of integers and store in variable
   cout << "Give me any set of integers in any order and I'll print ";
   cout << "them in reverse order!" << endl;
   cout << "How many integers would you like to enter? ";
   cin >> size;

   // Create new array of size entered by user
   nums = new int[size];

   // Prompt user to enter integers and store in new array
   cout << "Please enter your " << size << " integers:" << endl;
   for(int i = 0; i < size; i++)
   {
      cin >> nums[i];
   }
   cout << endl;
   
   // Call to reverse function, passing 
   // pointer to array and size as arguments
   reverse(nums, size);
   
   // Free dynamically allocated memory
   delete [] nums;
   nums = 0;

   return 0;
}


/**************************************************************************
** Description: This function reverses the order of elements in an array
** and prints them using recursion.
** Parameters: This functions parameters are a pointer to an array of
** integers and an integer.
**************************************************************************/
void reverse(int nums[], int size)
{
   // Base case
   if(size == 1)
   {
      cout << nums[0] << endl;
   }
   // Recursive case
   else
   {
      cout << nums[size - 1] << " ";
      reverse(nums, (size - 1));
   }
}
