/**************************************************************************
 ** Program Filename: Room3.hpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Room3 class header file
 *************************************************************************/

#ifndef ROOM3_HPP
#define ROOM3_HPP
#include "Room.hpp"
#include "Hero.hpp"
#include <string>

using namespace std;


class Room3 : public Room
{
   public:
      // Constructor
      Room3(string);

      // Member functions
      virtual Room* describe();
      virtual string findItem() {}
};
#endif
