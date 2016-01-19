/**************************************************************************
 ** Program Filename: Hero.hpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Hero class header file
 *************************************************************************/

#ifndef HERO_HPP
#define HERO_HPP
#include "Room.hpp"
#include <string>
#include <vector>

using namespace std;


class Hero
{
   public:
      // Member variables
      Room *location;
      int hp;
      vector<string> pack;
      
      // Constructor
      Hero();
      
      // Member functions
      void setLocation(Room*);
      void addItem(string);
      void dropItem(string);

      // Friend class
      friend class Room;
};
#endif
