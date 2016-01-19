/**************************************************************************
 ** Program Filename: functions.cpp
 ** Author: Sara Hashem
 ** Date: 6/3/2015
 ** Description: Implementation file for Fibonacci and factorial functions
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "functions.hpp"


// iFib
/**************************************************************************
 ** Function: iFib
 ** Description: This function calculates the nth Fibonacci number using an
 ** iterative approach.
 ** Parameters: One double value
 ** Pre-Conditions: None
 ** Post-Conditions: Double value returned
 ** Citation: Code modified from FibonacciIter obtained from 
 ** xoax.net/cpp/ref/cpp_examples/incl/fibonacci_numbers/
 *************************************************************************/
double iFib(double n)
{
   if((n == 0) || (n == 1))
   {
      return n;
   }

   double a = 0, b = 1, c = 0;
   for(double i = 2; i <= n; i++)
   {
      c = a + b;
      a = b;
      b = c;
   }
   return c;
}



// rFib
/**************************************************************************
 ** Function: rFib
 ** Description: This function calculates the nth Fibonacci number using a
 ** recursive approach.
 ** Parameters: One double value
 ** Pre-Conditions: None
 ** Post-Conditions: Double value returned
 ** Citation: Code modified from FibonacciRecur obtained from 
 ** xoax.net/cpp/ref/cpp_examples/incl/fibonacci_numbers/
 *************************************************************************/
double rFib(double n)
{
   if((n == 0) || (n == 1))
   {
      return n;
   }
   else
   {
      return rFib(n - 1) + rFib(n - 2);
   }
}



// rFac
/**************************************************************************
 ** Function: rFac
 ** Description: This function calculates the nth factorial using a non
 ** tail recrusive approach.
 ** Parameters: One double value
 ** Pre-Conditions: None
 ** Post-Conditions: Double value returned
 ** Citation: Code modified from rfactorial obtained from Lab 10
 ** instructions
 *************************************************************************/
double rFac(double n)
{
   if(n == 1)
   {
      return 1;
   }
   else
   {
      return n * rFac(n - 1);
   }
}



// hFac
/**************************************************************************
 ** Function: hFac
 ** Description: This function assists the tail recursive factorial
 ** function by stepping back through the factorial sequence.
 ** Parameters: Two double values
 ** Pre-Conditions: None
 ** Post-Conditions: Double value returned
 ** Citation: Code modified from factorialHelper obtained from Lab 10
 ** instructions
 *************************************************************************/
double hFac(double n, double result)
{
   if(n == 1)
   {
      return result;
   }
   else
   {
      return hFac(n - 1, n * result);
   }
}



// trFac
/**************************************************************************
 ** Function: trFac
 ** Description: This function calculates the nth factorial using a tail
 ** recrusive approach.
 ** Parameters: One double value
 ** Pre-Conditions: None
 ** Post-Conditions: Double value returned
 ** Citation: Code modified from factorial obtained from Lab 10
 ** instructions
 *************************************************************************/
double trFac(double n)
{
   return hFac(n, 1);
}
