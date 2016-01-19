/**************************************************************************
 ** Program Filename: Blue.hpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Blue derived class header file
 *************************************************************************/

#include "Character.hpp"
#ifndef BLUE_HPP
#define BLUE_HPP
#include <string>

using namespace std;

class Blue : public Character
{
   public:
      // Constructor
      Blue(string na):Character()
	    {
	       type = "band of Blue Men";
	       name = na;
	       armor = 9;
	       strength = 36;
	    }

      // Member functions     
      virtual int attRoll();
      virtual int defend();
      virtual int regenerate();
};
#endif
