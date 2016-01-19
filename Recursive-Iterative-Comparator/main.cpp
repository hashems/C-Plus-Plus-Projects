/**************************************************************************
 ** Program Filename: main.cpp
 ** Author: Sara Hashem
 ** Date: 6/3/2015
 ** Description: This program compares the run times of recursive and
 ** iterative functions.
 ** Input: One double value
 ** Output: User prompts and results printed from function calls
 *************************************************************************/

#include "functions.hpp"
#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

int main()
{
   // Declare variable to store user input
   double val;

   // Get value from user
   cout << "Enter a number: ";
   cin >> val;
   
   /* Fibonacci algorithm section */
   cout << "~~~ Fibonacci Algorithm Test ~~~" << endl;

   // Iterative Fibonacci

   // Get start time
   /* Use of high precision clock code modified from code found at
      en.cppreference.com/w/cpp/chrono/high_resolution_clock/now
   */
   auto start1 = std::chrono::high_resolution_clock::now();

   // Call iterative function
   cout << "Iterative Fibonacci algorithm result: " << iFib(val) << endl;

   // Get end time
   auto end1 = std::chrono::high_resolution_clock::now();

   // Calculate runtime in seconds
   std::chrono::duration<double> diff1 = end1 - start1;

   // Print results
   cout << "Runtime is ";
   cout << std::fixed << diff1.count() << " seconds";
   cout << endl;
   cout << endl;


   // Recursive Fibonacci

   // Get start time
   auto start2 = std::chrono::high_resolution_clock::now();

   // Call recursive function
   cout << "Recursive Fibonacci algorithm result: " << rFib(val) << endl;

   // Get end time
   auto end2 = std::chrono::high_resolution_clock::now();

   // Calculate runtime in seconds
   std::chrono::duration<double> diff2 = end2 - start2;

   // Print results
   cout << "Runtime is ";
   cout << diff2.count() << " seconds";
   cout << endl;
   cout << endl;


   /* Factorial algorithm section */
   cout << "~~~ Facortial Algorithm Test ~~~" << endl;

   // Not tail recursive factorial

   // Get start time
   auto start3 = std::chrono::high_resolution_clock::now();

   // Call not tail recursive function
   cout << "Not tail recursive factorial algorithm result: ";
   cout << rFac(val) << endl;

   // Get end time
   auto end3 = std::chrono::high_resolution_clock::now();

   // Calculate runtime in seconds
   std::chrono::duration<double> diff3 = end3 - start3;

   // Print results
   cout << "Runtime is ";
   cout << diff3.count() << " seconds";
   cout << endl;
   cout << endl;

   
   // Tail recursive factorial

   // Get start time
   auto start4 = std::chrono::high_resolution_clock::now();

   // Call not tail recursive function
   cout << "Tail recursive factorial algorithm result: ";
   cout << trFac(val) << endl;

   // Get end time
   auto end4 = std::chrono::high_resolution_clock::now();

   // Calculate runtime in seconds
   std::chrono::duration<double> diff4 = end4 - start4;

   // Print results
   cout << "Runtime is ";
   cout << diff4.count() << " seconds";
   cout << endl;
   
   
   return 0;
}
