/**************************************************************************
 ** Program Filename: Barbarian.hpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Barbarian derived class header file
 *************************************************************************/

#include "Character.hpp"
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include <string>

using namespace std;

class Barbarian : public Character
{
   public:
      // Constructor
      Barbarian(string na):Character()
	    {
	       type = "Barbarian";
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
