/**************************************************************************
 ** Program Filename: List.cpp
 ** Author: Sara Hashem
 ** Date: 4/23/2015
 ** Description: List class implementation file
 ** Input: None
 ** Output: Prompts and results from removeItem, displayList, and
 ** totalPrice functions
 *************************************************************************/

#include "Item.h"
#include "List.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::fixed;
using std::showpoint;
using std::setprecision;

// addItem
/**************************************************************************
 ** Function: addItem
 ** Description: This function adds an Item object to a vector of Item
 ** objects.
 ** Parameters: One Item object
 ** Pre-Conditions: Item object instantiated
 ** Post-Conditions: Item object added to vector
 *************************************************************************/
void List::addItem(Item userItem)
{
   list.push_back(userItem);
}



// removeItem
/**************************************************************************
 ** Function: removeItem
 ** Description: This function removes an Item object from a vector of Item
 ** objects.
 ** Parameters: One integer
 ** Pre-Conditions: Item object instantiated, user input stored in
 ** parameter variable
 ** Post-Conditions: Item object removed from vector, result printed to
 ** screen
 *************************************************************************/
void List::removeItem(int itemNum)
{
   for(int i = 0; i < list.size(); i++)
   {
      if(i == (itemNum - 1))
      {
	 list.erase(list.begin() + (itemNum - 1));
      }
   }

   cout << "Item #" << itemNum << " has been removed." << endl;
}



// displayList
/**************************************************************************
 ** Function: displayList
 ** Description: This function displays the contents of a vector of Items.
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: List and Item information printed to screen.
 *************************************************************************/
void List::displayList()
{
   int itemNum = 1;

   if(list.size() == 0)
   {
      cout << "Your List is empty. Please add an Item." << endl;
   }

   else
   {
      cout << "Your List:" << endl;

      for(int i = 0; i < list.size(); i++)
      {
	 cout << fixed << showpoint << setprecision(2);
	 cout << "Item #" << itemNum << ": "  << list[i].getName() << endl;
	 cout << "Unit: " << list[i].getUnit() << endl;
	 cout << "Quantity: " << list[i].getQuant() << endl;
	 cout << "Unit Price: $" << list[i].getPrice() << endl;
	 cout << "Subtotal: $" << list[i].getSubtotal() << endl;
	 cout << endl;
	 
	 itemNum++;
      }
   }
}



// totalPrice
/**************************************************************************
 ** Function: totalPrice
 ** Description: This function calculates and displays the total price of a
 ** List object.
 ** Parameters: None
 ** Pre-Conditions: List object instantiated
 ** Post-Conditions: Total price printed to screen.
 *************************************************************************/
void List::totalPrice()
{
   // Declare and initialize accumulator to 0.0
   double total = 0.0;

   // Calculate total
   for(int i = 0; i < list.size(); i++)
   {
      total += list[i].getSubtotal();
   }

   // Print results
   cout << fixed << showpoint << setprecision(2);
   cout << "List Total: $" << total << endl;
}
