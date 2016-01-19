/**************************************************************************
 ** Program Filename: Room.cpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Room class implementation file
 ** Input: None
 ** Output: Text printed from functions
 *************************************************************************/

#include "Room.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


// Destructor
Room::~Room()
{
   delete this;
}



// move
/**************************************************************************
 ** Function: move
 ** Description: This function simulates the user's movement from Room to
 ** Room.
 ** Parameters: One char
 ** Pre-Conditions: Room object instantiated
 ** Post-Conditions: Pointer to Room updated or text printed to screen and
 ** prompt for new selection printed to screen
 *************************************************************************/
Room* Room::move(char door)
{
   if(door == 'n' || door == 'N')
   {
      if(this->north == NULL)
      {
	 cout << "Looks like you've hit a dead end. ";
	 cout << "Try a different door [n, s, e, w]: ";
	 cin >> door;
	 door = tolower(door);
	 move(door);
      }
      else
      {
	 return this->north;
      }
   }
   else if(door == 's' || door == 'S')
   {
      if(this->south == NULL)
      {
	 cout << "Looks like you've hit a dead end. ";
	 cout << "Try a different door [n, s, e, w]: ";
	 cin >> door;
	 door = tolower(door);
	 move(door);
      }
      else
      {
	 return this->south;
      }
   }
   else if(door == 'e' || door == 'E')
   {
      if(this->east == NULL)
      {
	 cout << "Looks like you've hit a dead end. ";
	 cout << "Try a different door [n, s, e, w]: ";
	 cin >> door;
	 door = tolower(door);
	 move(door);
      }
      else
      {
	 return this->east;
      }
   }
   else if(door == 'w' || door == 'W')
   {
      if(this->west == NULL)
      {
	 cout << "Looks like you've hit a dead end. ";
	 cout << "Try a different door [n, s, e, w]: ";
	 cin >> door;
	 door = tolower(door);
	 move(door);
      }
      else
      {
	 return this->west;
      }
   }
   else
   {
      cout << "Please enter 'n', 's', 'e', or 'w': ";
      cin >> door;
      door = tolower(door);
      move(door);
   }
}
