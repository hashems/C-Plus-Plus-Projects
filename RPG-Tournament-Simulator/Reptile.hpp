/**************************************************************************
 ** Program Filename: Reptile.hpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Reptile derived class header file
 *************************************************************************/

#include "Character.hpp"
#ifndef REPTILE_HPP
#define REPTILE_HPP
#include <string>

using namespace std;

class Reptile : public Character
{
   public:
      // Constructor
      Reptile(string na):Character()
	    {
	       type = "Reptile Person";
	       name = na;
	       armor = 7;
	       strength = 18;
	    }
     
      // Member functions     
      virtual int attRoll();
      virtual int defend();
      virtual int regenerate();
};
#endif
