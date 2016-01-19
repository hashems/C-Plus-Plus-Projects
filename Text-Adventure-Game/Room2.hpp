/**************************************************************************
 ** Program Filename: Room2.hpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Room2 class header file
 *************************************************************************/

#ifndef ROOM2_HPP
#define ROOM2_HPP
#include "Room.hpp"
#include "Hero.hpp"
#include <string>

using namespace std;


class Room2 : public Room
{
   protected:
      int monsterHP;

   public:
      // Constructor
      Room2(string);

      // Member functions
      virtual Room* describe();
      virtual int findMonster();
      virtual string findItem() {}
};
#endif
