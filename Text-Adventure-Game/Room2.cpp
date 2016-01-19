/**************************************************************************
 ** Program Filename: Room2.cpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Room2 class implementation file
 ** Input: One integer, one char
 ** Output: Text printed from functions
 *************************************************************************/

#include "Room.hpp"
#include "Room2.hpp"
#include "Hero.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;


// Constructor
Room2::Room2(string name1)
{
   name = name1;
   monsterHP = 5;
}



// describe
/**************************************************************************
 ** Function: describe
 ** Description: This function prints text describing a Room and calls the
 ** findMonster and move functions
 ** Parameters: None
 ** Pre-Conditions: Room2 object instantiated
 ** Post-Conditions: Prompts printed to screen and findMonster and move
 ** functions called
 *************************************************************************/
Room* Room2::describe()
{
   // Declare local variables to store user input
   int choice;
   char door;

   // Print description
   cout << "As you swing open the heavy wooden door, a damp dark cavern ";
   cout << "greets you. You " << endl;
   cout << "hear a low, muffled sound off in the corner. Your torch ";
   cout << "highlights the outline " << endl;
   cout << "of three small openings in each wall." << endl << endl;

   // Get user's choice
   cout << "You can choose to..." << endl;
   cout << "1.  Explore the cave" << endl;
   cout << "2.  Go through one of the doors" << endl;
   cout << "What would you like to do? ";
   cin >> choice;

   // Process user's choice
   if(choice == 1)
   {
      findMonster();
      
      // Get user's door choice
      cout << "Now, where were we... Oh right, which door would you like ";
      cout << "to go through?" << endl;
      cout << "[n, s, e, w] ";
      cin >> door;
      door = tolower(door);

      // Process door choice
      return move(door);
   }
   else if(choice == 2)
   {
      findMonster();

      // Get user's door choice
      cout << "Now, where were we... Oh right, which door would you like ";
      cout << "to go through?" << endl;
      cout << "[n, s, e, w] ";
      cin >> door;
      door = tolower(door);

      // Process door choice
      return move(door);
   }
}



// findMonster
/**************************************************************************
 ** Function: findMonster
 ** Description: This function simulates combat between a Hero and a
 ** cave beasty.
 ** Parameters: None
 ** Pre-Conditions: Room2 object instantiated
 ** Post-Conditions: Text printed to screen
 *************************************************************************/
int Room2::findMonster()
{
   // Declare local variable to store damage
   int damage = 0;

   cout << "What foul beasty lurks here? Stand and fight! There is glory ";
   cout << "to be had this day!" << endl;

   // While monster is still alive
   while(monsterHP > 0)
   {
      // Monster attacks
      int monAtt = rand() % 3 + 1;
      cout << "The beast strikes! You've suffer " << monAtt;
      cout << " damage. A mere flesh wound!" << endl;
      damage += monAtt;	   // Increment damage

      // Hero attacks
      int heroAtt = rand() % 6 + 1;
      cout << "You swing with all your might! The beast suffers ";
      cout << heroAtt << "!" << endl;
      cout << " Back to the darkness from whence you came!" << endl;
      monsterHP -= heroAtt;   // Decrement monster's HP
   }
   return damage;
}
