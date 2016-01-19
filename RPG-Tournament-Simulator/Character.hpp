/**************************************************************************
 ** Program Filename: Character.hpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: Character base class header file
 *************************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <vector>

using std::string;
using std::vector;

class Character
{
   public:
      // Constructor
      Character();
   
      // Members variables
      string type;
      string name;
      int armor;
      int strength;
      int damage;
      int hits;
      bool achilles;
      
      // Member functions
      virtual int attRoll() = 0;
      virtual int defend() = 0;
      virtual void attack(Character*);
      virtual int regenerate() = 0;
      
      // Friend functions
      friend int combat(Character*, Character*);
};
#endif
