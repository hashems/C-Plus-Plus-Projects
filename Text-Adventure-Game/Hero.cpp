/**************************************************************************
 ** Program Filename: Hero.cpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Hero class implementation file
 ** Input: None
 ** Output: Text printed from functions
 *************************************************************************/

#include "Hero.hpp"
#include "Room.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;


// Constructor
Hero::Hero()
{
   hp = 10;
}



// setLocation
/**************************************************************************
 ** Function: setLocation
 ** Description: This function sets the user's location to the current Room
 ** Parameters: None
 ** Pre-Conditions: Room and Hero objects instantiated
 ** Post-Conditions: Text printed to screen
 *************************************************************************/
void Hero::setLocation(Room* room)
{
   location = room;
   cout << "You find yourself in " << location->name << "." << endl;
}



// addItem
/**************************************************************************
 ** Function: addItem
 ** Description: This function adds an item to the user's pack.
 ** Parameters: One string object
 ** Pre-Conditions: Hero object instantiated
 ** Post-Conditions: Prompts and text printed to screen
 *************************************************************************/
void Hero::addItem(string item)
{
   // Declare local variables to store user input
   char ans1, ans2;
   string drop;

   // Get user answer
   cout << "Do you want to pick up the " << item << "? [y/n] ";
   cin >> ans1;
   ans1 = tolower(ans1);

   // Process user answer
   if(ans1 == 'y')
   {
      if(pack.size() > 7)
      {
	 cout << "Oh no! Your pack is too heavy! You must remove ";
	 cout << "something before you can add anymore items." << endl;
	 cout << "Do you want to remove something? [y/n] ";
	 cin >> ans2;
	 ans2 = tolower(ans2);
	 
	 if(ans2 == 'y')
	 {
	    // Show inventory
	    cout << "Your pack currently contains:" << endl;
	    for(int i = 0; i < pack.size(); i++)
	    {
	       cout << pack.at(i) << endl;
	    }
	    cout << "What would you like to remove? ";
	    cin >> drop;
	    // Drop item
	    dropItem(drop);
	 }
	 else if(ans2 == 'n')
	 {
	    cout << "Moving on..." << endl;
	 }
      }
      // Add item
      else
      {
	 cout << "Adding " << item << " ..." << endl;
	 pack.push_back(item);
      }
   }
   else if(ans1 == 'n')
   {
      cout << "Moving on..." << endl;
   }
}



// dropItem
/**************************************************************************
 ** Function: dropItem
 ** Description: This function removes and item from the user's pack.
 ** Parameters: One string object
 ** Pre-Conditions: Hero object instantiated
 ** Post-Conditions: Prompts and text printed to screen
 *************************************************************************/
void Hero::dropItem(string item)
{
   // Search for item
   for(int i = 0; i < pack.size(); i++)
   {
      if(pack[i] == item)
      {
	 string temp = pack[i];
	 pack[i] = pack[pack.size() - 1];
	 pack[pack.size() - 1] = temp;
      }
   }

   // Remove item and print result
   cout << "Removing " << pack[pack.size() - 1] << " ..." << endl;
   pack.pop_back();
}
