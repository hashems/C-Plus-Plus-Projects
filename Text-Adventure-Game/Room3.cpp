/**************************************************************************
 ** Program Filename: Room3.cpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Room3 class implementation file
 ** Input: None
 ** Output: Text printed from functions
 *************************************************************************/

#include "Room.hpp"
#include "Room3.hpp"
#include "Hero.hpp"
#include <iostream>

using namespace std;


// Constructor
Room3::Room3(string name1)
{
   name = name1;
}



// describe
/**************************************************************************
 ** Function: describe
 ** Description: This function prints text describing a Room.
 ** Parameters: None
 ** Pre-Conditions: Room3 object instantiated
 ** Post-Conditions: Text printed to screen
 *************************************************************************/
Room* Room3::describe()
{
   cout << "As you swing open the heavy wooden door, you're momentarily ";
   cout << "blinded by the " << endl;
   cout << "glint of gold." << endl;
   cout << "Congratulations, you've found the hidden treasure! You've won ";
   cout << "the game!" << endl;
   
   return this;
}
