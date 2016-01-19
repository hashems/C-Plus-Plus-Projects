/**************************************************************************
** Author: Sara Hashem
** Date: 2/7/2015
** Description: Hero class declaration
**************************************************************************/

#ifndef HERO_HPP
#define HERO_HPP

using namespace std;

// Define interface of the Hero class
class Hero
{
   // Declare private data members
   private:
      int strength;
      int hitpoints;
      int speed;
      int money;
      int damage;

   // Public member function prototypes
   public:
      Hero();
      Hero(int, int, int, int);
      void setStrength(int);
      int getStrength();
      void setHitPoints(int);
      int getHitPoints();
      void setSpeed(int);
      int getSpeed();
      void setMoney(int);
      int getMoney();
      bool takeDamage(int);
};
#endif
