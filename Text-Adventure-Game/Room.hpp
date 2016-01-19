/**************************************************************************
 ** Program Filename: Room.hpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: Room class header file
 *************************************************************************/

#ifndef ROOM_HPP
#define ROOM_HPP
#include <string>
#include <cstdlib>

using namespace std;


class Room
{
   public:
      // Member variables
      Room *north;
      Room *south;
      Room *east;
      Room *west;

      string name;
      bool found;

      // Constructor
      Room()
      {
	 north = NULL;
	 south = NULL;
	 east = NULL;
	 west = NULL;
	 found = false;
      }

      // Destructor
      ~Room();

      // Member functions
      virtual Room* describe() = 0;
      virtual string findItem() = 0;
      virtual Room* move(char);

      // Friend class
      friend class Hero;
};
#endif
