/**************************************************************************
** Author: Sara Hashem
** Date: 3/4/2015
** Description: This program converts binary numbers to decimal and
** decimal numbers to binary using a recursive function.
**************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

// Function prototypes
void print_menu();

int bin_to_dec(string, int, int);

int bin_helper(string);

string dec_to_bin(int);

int main()
{
   // Declare variable to store user input and return value of function
   int choice, dec = 0;
   string binary;
   char decimal[100];

   // Prompt user for choice
   cout << "Let's convert binary numbers to decimal and vice versa!";
   cout << endl;
   cout << "Choose Option 1 for binary-to-decimal conversion, Option ";
   cout << "2 for" << endl;
   cout << "decimal-to-binary conversion, or Option 3 to quit ";
   cout << "the program." << endl;

   do
   {
      // Display menu and get user's choice
      print_menu();	// Call to print_menu function
      cout << "What would you like to do? ";
      cin >> choice;
      cout << endl;

      // Process user's choice
      if(choice != 3)
      {
	 switch(choice)
	 {
	    case 1: // Prompt user for binary string and store in variable
	       cout << "Please enter a binary number: ";
	       cin >> binary;
	       
	       // Validate input
	       for(int i = 0; i < binary.length(); i++)
	       {
		  if(binary[i] != '1' && binary[i] != '0')
		  {
		     cout << "Invalid input." << endl;
		     // Display menu and get user's choice
		     print_menu();
		     cout << "What would you like to do? ";
		     cin >> choice;
		     cout << endl;
		  }
	       }
	       // Print result
	       cout << "That's " << bin_helper(binary);
	       cout << " in decimal notation.";
	       cout << endl;
	       break;

	    case 2: // Prompt user for decimal string and store in variable
	       cout << "Please enter a decimal number: ";
	       cin >> decimal;

	       // Validate input
	       for(int i = 0; i < strlen(decimal); i++)
	       {
		  if(!isdigit(decimal[i]))
		  {
		     cout << "Invalid input." << endl;
		     // Display menu and get user's choice
		     print_menu();
		     cout << "What would you like to do? ";
		     cin >> choice;
		     cout << endl;
		     i = 0;
		  }
		  else
		  {
		     // Convert string to integer and store in variable 
		     dec = atoi(decimal);
		  }
	       }
		  // Further input validation
		  if(dec < 1)
		  {
		     cout << "Invalid input." << endl;
		  }
		  else
		  {
		     // Print result
		     cout << "That's " << dec_to_bin(dec);
		     cout << " in binary notation." << endl;
		  }
	       break;

	    default: // Validate user's choice
	       cout << "Your choice is invalid." << endl;
	       break;
	 }
      }
   } while(choice != 3);

   return 0;
}


/**************************************************************************
** Description: This function prints a menu.
** Parameters: This functions has no parameters.
**************************************************************************/
void print_menu()
{
   cout << endl;
   cout << "~~~ Conversion Menu ~~~" << endl;
   cout << "1.  Binary - to - Decimal Conversion" << endl;
   cout << "2.  Decimal - to - Binary Conversion" << endl;
   cout << "3.  Quit" << endl;
   cout << endl;
}


/**************************************************************************
** Description: This function is a helper function. It passes a string and
** variables representing the first and last positions of the string to
** the recursive bin_to_dec function and returns the value of that
** function.
** Parameter: This function's parameter is a string object.
**************************************************************************/
int bin_helper(string binary)
{
   int i = 0;
   int last = binary.length() - 1;

   return bin_to_dec(binary, i, last);
}


/**************************************************************************
** Description: This function converts a binary number to a decimal number.
** Parameters: This function's parameters are a string object and an
** integer.
**************************************************************************/
int bin_to_dec(string binary, int i, int last)
{
   // Base cases
   if(i == last)
   {
      if(binary[i] == '0')
      {
	 return 0;
      }
      else
      {
	 return 1;
      }
   }
   // Recursive case
   else
   {
      int dec;
      if(binary[i] == '0')
      {
	 dec = 0;
      }
      else
      {
	 dec = pow(2, (last - i));
      }
      return dec + bin_to_dec(binary, ++i, last--);
   }
}


/**************************************************************************
** Description: This function converts a decimal number to a binary number.
** Parameters: This function's parameter is an integer.
**************************************************************************/
string dec_to_bin(int decimal)
{
   string bin = "";
   
   // Base cases
   if(decimal == 0)
   {
      bin = '0';
      return bin;
   }
   else if(decimal == 1)
   {
      bin = '1';
      return bin;
   }
   // Recursive case
   else
   {
      string bin = "";
      if((decimal % 2) == 0)
      {
	 bin = '0';
      }
      else
      {
	 bin = '1';
      }
      return dec_to_bin(decimal / 2) + bin;
   }
}
