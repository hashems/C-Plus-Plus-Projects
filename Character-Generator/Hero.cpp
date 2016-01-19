/**************************************************************************
** Author: Sara Hashem
** Date: 2/7/2015
** Description: This program prompts the user for a hero's attributes and 
** uses the input to create a Hero Object. It then prompts the user for
** damage sustained and outputs the hero's current attributes or a message
** informing the user their hero has died.
**************************************************************************/

#include <iostream>
#include "Hero.hpp"
using namespace std;

// Member function implementation section

// Default constructor
Hero::Hero()
{
   setStrength(1);
   setHitPoints(1);
   setSpeed(1);
   setMoney(1);
}

// Constructor
Hero::Hero(int str, int hp, int spd, int mon)
{
   setStrength(str);
   setHitPoints(hp);
   setSpeed(spd);
   setMoney(mon);
}


// Set and get methods
void Hero::setStrength(int str)
{
   strength = str;
}

int Hero::getStrength()
{
   return strength;
}


void Hero::setHitPoints(int hp)
{
   hitpoints = hp;
}

int Hero::getHitPoints()
{
   return hitpoints;
}


void Hero::setSpeed(int spd)
{
   speed = spd;
}

int Hero::getSpeed()
{
   return speed;
}


void Hero::setMoney(int mon)
{
   money = mon;
}

int Hero::getMoney()
{
   return money;
}


/*************************************************************************
** Description: This function calculates and returns the value of the
** Hero's remaining hit points after sustaining damage.
** Parameters: This function's parameter is an integer.
*************************************************************************/
bool Hero::takeDamage(int damage)
{
   if(hitpoints > 0)	// The hero is still alive
   {
      return true;
   }
   else			// The hero has died
   {
      return false;
   }
}



// main method

int main()
{
   // Declare Hero object and variables to store input
   Hero hero;
   int str, hp, spd, mon, damage, newDamage;

   // Prompt user for values of Hero's attributes and store in variables
   cout << "Let's create a hero! First, you'll need to enter your hero's ";
   cout << "attributes." << endl;
   cout << "Your hero's strength:   ";
   cin >> str;
   cout << "Your hero's hit points: ";
   cin >> hp;
   cout << "Your hero's speed:      ";
   cin >> spd;
   cout << "Your hero's money:      ";
   cin >> mon;
   cout << endl;
   cout << "Now, your hero is ready for battle!" << endl;

   // Call set methods passing user input as parameters
   hero.setStrength(str);
   hero.setHitPoints(hp);
   hero.setSpeed(spd);
   hero.setMoney(mon);

   cout << "But watch what comes! It's a dragon!" << endl;
   cout << "Your hero is brave! They stand and fight!" << endl;
   cout << endl;

   // Prompt user for damage until Hero runs out of hit points
   do
   {
      cout << "How much damage has you hero sustained?" << endl;
      cin >> damage;

      // Call takeDamage function passing user input has parameter
      hero.takeDamage(damage);

      // Update hitpoints by calling setHitPoints function
      hero.setHitPoints(hp -= damage);

      // Print results
      cout << "Strength:   " << hero.getStrength() << endl;
      cout << "Hit Points: " << hero.getHitPoints() << endl;
      cout << "Speed:      " << hero.getSpeed() << endl;
      cout << "Money:      " << hero.getMoney() << endl;
   
   } while(hero.takeDamage(damage));

   // Inform user Hero has died
   cout << "Your hero has met an untimely demise." << endl;

   return 0;
}
