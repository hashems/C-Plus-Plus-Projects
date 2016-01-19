/**************************************************************************
 ** Program Filename: Shadow.hpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Shadow derived class header file
 *************************************************************************/

#include "Character.hpp"
#ifndef SHADOW_HPP
#define SHADOW_HPP
#include <string>

using namespace std;

class Shadow : public Character
{
   public:
      // Constructor
      Shadow(string na):Character()
	    {
	       type = "Shadow";
	       name = na;
	       armor = 0;
	       strength = 12;
	    }

      // Member functions     
      virtual int attRoll();
      virtual int defend();
      virtual int regenerate();
};
#endif
