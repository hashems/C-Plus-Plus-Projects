/**************************************************************************
** Author: Sara Hashem
** Date: 1/14/2015
** Description: This program calculates and displays income from total
** ticket sales
**************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   // Define and initialize constants for seat costs
   const double CLASS_A = 15;
   const double CLASS_B = 12;
   const double CLASS_C = 9;

   // Define variables for tickets sold and total
   double a, b, c, total;

   // Prompt user for amount of Class A, B, and C seat tickets sold and
   // assign user input to variables
   cout << "How many Class A seat tickets were sold? ";
   cin >> a;
   cout << "And how many Class B seat tickets? ";
   cin >> b;
   cout << "What about Class C? ";
   cin >> c;

   // Calculate total amount earned from tickets sold
   total = (CLASS_A * a) + (CLASS_B * b) + (CLASS_C * c);

   // Print result of caculation in fixed-point two decimal notation
   cout << endl;
   cout << "Congratulations! You have earned $";
   cout << fixed << showpoint << setprecision(2) << total; 
   cout << " from ticket sales!" << endl;

   return 0;
}
