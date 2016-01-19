/**************************************************************************
 ** Program Filename: Goblin.hpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Goblin derived class header file
 *************************************************************************/

#ifndef GOBLIN_HPP
#define GOBLIN_HPP
#include "Character.hpp"
#include <string>

using std::string;


class Goblin : public Character
{
   public:
      // Constructor
      Goblin(string na):Character()
	    {
	       type = "Goblin";
	       name = na;
	       armor = 3;
	       strength = 8;
	    }

      // Member functions     
      virtual int attRoll();
      virtual int defend();
      virtual void attack(Character*);
      virtual int regenerate();
};
#endif
