/**************************************************************************
 ** Program Filename: Room1.hpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Room1 class header file
 *************************************************************************/

#ifndef ROOM1_HPP
#define ROOM1_HPP
#include "Room.hpp"
#include "Hero.hpp"
#include <string>

using namespace std;


class Room1 : public Room
{
   protected:
      // Member variable
      string item;

   public:
      // Constructor
      Room1(string, string);

      // Member functions
      virtual Room* describe();
      virtual string findItem();
};
#endif
