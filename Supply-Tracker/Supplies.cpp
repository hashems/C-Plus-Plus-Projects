/**************************************************************************
** Author: Sara Hashem
** Date: 2/9/2015
** Description: This program calculates the amount of supplies left in a
** factory after producing a given number of products.
**************************************************************************/

#include <iostream>
#include "Supplies.hpp"
using namespace std;

// Supplies member function implementation section

// Default constructor
Supplies::Supplies()
{
   setNumThingamajigs(100);
   setNumWatchamacallits(70);
   setNumFramistats(50);
}

// Constructor
Supplies::Supplies(int things, int wats, int frams)
{
   setNumThingamajigs(things);
   setNumWatchamacallits(wats);
   setNumFramistats(frams);
}


// Set methods
void Supplies::setNumThingamajigs(int things)
{
   numThings = things;
}

void Supplies::setNumWatchamacallits(int wats)
{
   numWats = wats;
}

void Supplies::setNumFramistats(int frams)
{
   numFrams = frams;
}


// printPartsOrder method
/**************************************************************************
** Description: This function prints the number of parts that need to be
** ordered after each product is produced.
** Parameters: This function's parameters are 3 integers.
**************************************************************************/
void Supplies::printPartsOrder()
{
   cout << "Place an order for:" << endl;
   cout << (100 - numThings)<< " Thingamajigs" << endl;
   cout << (70 - numWats) << " Watchamacallits" << endl;
   cout << (50 - numFrams) << " Framistats" << endl;
   cout << endl;
}


// produceThing1 method
/**************************************************************************
** Description: This function 'produces' a given number of thing1s and
** prints the number of parts left in stock.
** Parameters: This function's parameter is an integer.
**************************************************************************/
void Supplies::produceThing1(int numThing1)
{
   setNumThingamajigs(numThings -= (1 * numThing1));
   setNumWatchamacallits(numWats -= (2 * numThing1));
   setNumFramistats(numFrams -= (1 * numThing1));

   cout << "You've made " << numThing1 << " Thing1s!" << endl;
   cout << "You have the following parts left in stock:" << endl;
   cout << numThings << " Thingamajigs left in stock" << endl;
   cout << numWats << " Watchamacallits left in stock" << endl;
   cout << numFrams << " Framistats left in stock" << endl;
   cout << endl;
}


// produceThing2 method
/**************************************************************************
** Description: This function 'produces' a given number of thing1s and
** prints the number of parts left in stock.
** Parameters: This function's parameter is an integer.
**************************************************************************/
void Supplies::produceThing2(int numThing2)
{
   setNumThingamajigs(numThings -= (2 * numThing2));
   setNumFramistats(numFrams -= (1 * numThing2));

   cout << "You've made " << numThing2 << " Thing2s!" << endl;
   cout << "You have the following parts left in stock:" << endl;
   cout << numThings << " Thingamajigs left in stock" << endl;
   cout << numWats << " Watchamacallits left in stock" << endl;
   cout << numFrams << " Framistats left in stock" << endl;
   cout << endl;
}


// main method
int main()
{
   // Create Supplies object
   Supplies factory;

   // Declare variables to store user input
   int things, wats, frams, choice, numThing1, numThing2;

   // Prompt user for number of parts in stock
   cout << "Welcome to your very own Factory! Before we can produce ";
   cout << "anything, we'll need to" << endl;
   cout << "know how many parts are in stock." << endl;
   cout << "Please enter your Factory parts counts below." << endl;
   cout << "Thingamajigs in stock: ";
   cin >> things;
   cout << "Watchamacallits in stock: ";
   cin >> wats;
   cout << "Framistats in stock: ";
   cin >> frams;
   cout << endl;

   // Call set methods passing user input as arugments
   factory.setNumThingamajigs(things);
   factory.setNumWatchamacallits(wats);
   factory.setNumFramistats(frams);

   // Prompt user for choice
   cout << "Now, let's build something! Choose from one of the options ";
   cout << "below." << endl;
   cout << endl;

   do
   {
      // Display menu and get user's choice
      cout << " ~~~Factory Works~~~" << endl;
      cout << "1.  Produce Thing1s" << endl;
      cout << "2.  Produce Thing2s" << endl;
      cout << "3.  Print a parts order" << endl;
      cout << "4.  Quit" << endl;
      cout << endl;
      cout << "What would you like to do? ";
      cin >> choice;
      cout << endl;

      // Process user's choice
      if(choice != 4)
      {
	 switch(choice)
	 {
	    case 1: cout << "How many Thing1s would you like to produce? ";
		    cin >> numThing1;
		    cout << endl;
		    factory.produceThing1(numThing1);
		    break;
	    case 2: cout << "How many Thing2s would you like to produce? ";
		    cin >> numThing2;
		    cout << endl;
		    factory.produceThing2(numThing2);
		    break;
	    case 3: factory.printPartsOrder();
		    break;
	 }
      }
   } while(choice != 4);

   return 0;
}
