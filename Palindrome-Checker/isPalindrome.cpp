/**************************************************************************
** Author: Sara Hashem
** Date: 1/31/2015
** Description: This program prompts the user for a string, uses a function
** to determine if the string is a palindrome or not, and outputs the
** result.
**************************************************************************/

#include <iostream>
#include <string>
using namespace std;

// Function prototype
bool palindrome(string);

int main()
{
   // Declare variable for user input
   string word;

   // Prompt user for string and store in variable
   cout << "Please enter a word and I'll tell you if it's a palindrome or ";
   cout << "not: ";
   cin >> word;

   // Call palindrome function, passing user input as argument
   palindrome(word);

   // Print result
   if (palindrome(word))      // Function returned true
   {
      cout << "The word " << word << " is a palindrome!" << endl;
   }
   else			      // Function returned false
   {
      cout << "Sorry, but the word " << word << " is not a palindrome.";
      cout << endl;
   }

   return 0;
}


/**************************************************************************
** Description: This function passes a string as an argument and returns
** true if the string is a palindrome and false otherwise.
** Parameters: This function's parameter is a string.
**************************************************************************/
bool palindrome(string str)
{
   // Compare each letter in the string to the letter
   // in the opposite position
   for (int x = 0; x <= (str.length() - 1); x++)
   {
      // If the letters are the same, return true
      if (str.at(x) == str.at((str.length() - 1) - x))
      {
	 // The word is a palindrome
	 return true;
      }
    
      // If the letters are not the same, return false
      else
      {
	 // The word is not a palindrome
	 return false;
      }
   }
}
