/**************************************************************************
 ** Program Filename: Room1.cpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Room1 class implementation file
 ** Input: One integer, one char
 ** Output: Text printed from functions
 *************************************************************************/

#include "Room.hpp"
#include "Room1.hpp"
#include "Hero.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;



// Constructor
Room1::Room1(string name1, string item1)
{
   name = name1;
   item = item1;
}



// describe
/**************************************************************************
 ** Function: describe
 ** Description: This function prints text describing a Room and calls the
 ** findItem and move functions
 ** Parameters: None
 ** Pre-Conditions: Room1 object instantiated
 ** Post-Conditions: Prompts printed to screen and findItem and move
 ** functions called
 *************************************************************************/
Room* Room1::describe()
{
   // Declare local variables to store user input
   int choice;
   char door;

   // Print description
   cout << "A long, dark corridor stretches before you. At the far end ";
   cout << "to the north, you " << endl;
   cout << "can just barely make out the shape of a large double wooden ";
   cout << "door. To the east " << endl;
   cout << "and west, you see smaller doors carved into the walls of the ";
   cout << "corridor." << endl << endl;

   // Get user's choice
   cout << "You can choose to..." << endl;
   cout << "1.  Explore the corridor" << endl;
   cout << "2.  Go through one of the doors" << endl;
   cout << "What would you like to do? ";
   cin >> choice;

   // Process user's choice
   if(choice == 1)
   {
      findItem();
      found = true;

      // Get user's door choice
      cout << "Now, which door would you like to go through? ";
      cout << "[n, s, e, w] ";
      cin >> door;
      door = tolower(door);
      // Process door choice
      return move(door);
      
   }
   else if(choice == 2)
   {
      // Get user's door choice
      cout << "Which door would you like to go through? ";
      cout << "[n, s, e, w] ";
      cin >> door;
      door = tolower(door);
      // Process door choice
      return move(door);
   }
}



// findItem
/**************************************************************************
 ** Function: findItem
 ** Description: This function returns a found item.
 ** Parameters: None
 ** Pre-Conditions: Room1 object instantiated
 ** Post-Conditions: Item string returned and text printed to screen
 *************************************************************************/
string Room1::findItem()
{
   cout << "You stumble upon a " << item << "!" << endl;
   return item;
}
