/**************************************************************************
 ** Program Filename: main.cpp
 ** Author: Sara Hashem
 ** Date: 4/23/2015
 ** Description: This program creates a shopping List given the information
 ** for each item.
 ** Input: Characters, strings, integers, and double values for storing and
 ** processing user input
 ** Output: Prompts and results from calls to class functions
 *************************************************************************/

#include "Item.h"
#include "ClubItem.h"
#include "List.h"
#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::endl;
using std::cin;
using std::getline;

int main()
{
   // Create Item object
   Item userItem;


   // Create ClubItem object
   ClubItem userClubItem;


   // Create List object
   List userList;


   // Declare variables for user input and choice
   char clubCard, clubItem;
   string inName, inUnit;
   int choice, inQuant, itemNum;
   double inPrice;


   // Prompt user for input
   cout << endl;
   cout << "Let's go shopping! You can add, remove, or display the ";
   cout << "Items in your List. When you're through, you may quit.";
   cout << endl;

   cout << endl;
   cout << "First off, are you a Club Card carrier? [y/n] ";
   cin >> clubCard;


   // Display menu and get user's choice
   do
   {
      cout << endl;
      cout << "~~~ List ~~~" << endl;
      cout << "1.  Add Item" << endl;
      cout << "2.  Remove Item" << endl;
      cout << "3.  Display List" << endl;
      cout << "4.  Quit" << endl;
      cout << endl;
      cout << "What would you like to do? ";
      cin >> choice;
      cin.ignore();
      cout << endl;


      // Process user choice
      if(choice != 4)
      {
	 switch(choice)
	 {
	    case 1:  // Get user input
		     cout << "Name: ";
		     getline(cin, inName);
		     cout << "Unit: ";
		     cin >> inUnit;
		     cout << "Quantity: ";
		     cin >> inQuant;
		     cout << "Price Per Unit: ";
		     cin >> inPrice;

		     // If user has club card
		     if(tolower(clubCard) == 'y')
		     {
			// Determine if Item is a ClubItem
			cout << "Is " << inName << " a Club Item? [y/n] ";
			cin >> clubItem;
			
			if(tolower(clubItem) == 'y')
			{
			   // Call set methods for ClubItem object
			   userClubItem.setName(inName);
			   userClubItem.setUnit(inUnit);
			   userClubItem.setQuant(inQuant);
			   userClubItem.setPrice(inPrice);

			   // Call addItem function for ClubItem
			   userList.addItem(userClubItem);
			}
			else
			{
			   userItem.setName(inName);
			   userItem.setUnit(inUnit);
			   userItem.setQuant(inQuant);
			   userItem.setPrice(inPrice);
			   
			   // Call addItem function for Item
			   userList.addItem(userItem);
			}
		     }
		     else
		     {
			// Call set methods for Item object
			userItem.setName(inName);
			userItem.setUnit(inUnit);
			userItem.setQuant(inQuant);
			userItem.setPrice(inPrice);

			// Call addItem function for Item
			userList.addItem(userItem);
		     }
		     break;

	    case 2:  // Prompt user for item number
		     cout << "Which Item number would you like to ";
		     cout << "remove? ";
		     cin >> itemNum;
	    
		     // Call removeItem function
		     userList.removeItem(itemNum);
		     break;

	    case 3:  // Call displayList function
		     userList.displayList();

		     // Call totalPrice function
		     userList.totalPrice();
		     break;
	 }
      }
   } while(choice != 4);


   return 0;
}
