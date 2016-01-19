/**************************************************************************
** Author: Sara Hashem
** Date: 1/14/2015
** Description: This progam converts temperatures in degrees Celsius to
** degrees Fahrenheit
**************************************************************************/

#include <iostream>
using namespace std;

int main()
{
   // Define variables for Celsius and Fahrenheit
   double C, F;

   // Prompt user for temperature in degrees Celsius and assign to
   // varibale
   cout << "Please enter a temperature in degrees Celsius: ";
   cin >> C;

   // Calculate temperature in Fahrenheit from user input and given
   // formula and assign to varibale
   F = ((9.0 * C) / 5.0) + 32.0;

   // Print result of calculation
   cout << endl;
   cout  << "That would be " << F << " degrees Fahrenheit." << endl;

   return 0;
}
