/**************************************************************************
** Author: Sara Hashem
** Date: 1/14/2015
** Description: This program calculates the monthly payment on a loan given
the monthly interest rate, number of payments so far, and total amount of
the loan
**************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   // Define variables for loan amount, monthly interest rate,
   // number of payments, monthly payment, amount paid back, and
   // interest paid
   int N;
   double L, R, P, amountPaid, interestPaid;

   // Prompt user for loan amount, monthly interest rate, and
   // number of payments
   cout << "Let's calculate the monthly payment for a loan." << endl;
   cout << "First, we'll need some information about the loan." << endl;
   cout << "What is the amount of the loan? ";
   cin >> L;
   cout << "What is the monthly interest rate for the loan? ";
   cin >> R;
   cout << "How many payments must be paid? ";
   cin >> N;

   // Convert monthly interest rate to decimal format
   R /= 100;

   // Calculate monthly payment from user input and given formula
   P = (R * pow((1 + R), N)) / (pow((1 + R), N) - 1);
   P *= L;

   // Calculate amount paid back
   amountPaid = P * N;

   // Calculate interest paid
   interestPaid = amountPaid - L;

   // Print results of calculations
   cout << endl;
   cout << "Here are the results of the calculations:" << endl;
   cout << "Loan Amount:           $" << setw(12) << fixed << showpoint;
   cout << setprecision(2) << L << endl;
   cout << "Monthly Interest Rate: " << setw(12) << (R * 100) << "%";
   cout << endl;
   cout << "Number of Payments:     " << setw(12) << N << endl;
   cout << "Monthly Payment:       $" << setw(12) << fixed << showpoint;
   cout << setprecision(2) << P << endl;
   cout << "Amount Paid Back:      $" << setw(12) << amountPaid << endl;
   cout << "Interest Paid:         $" << setw(12) << interestPaid << endl;

   return 0;
}
