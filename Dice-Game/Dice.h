/**************************************************************************
 ** Program Filename: Dice.h
 ** Author: Sara Hashem
 ** Date: 4/19/2015
 ** Description: Dice class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#ifndef DICE_H
#define DICE_H
#include <vector>

using std::vector;

class Dice
{
   protected:
      int dice;
      int sides;
      int numRolls;
      vector<int> rollTotals;

   public:
      Dice();
      Dice(int);
      void setDice(int);
      void setSides(int);
      void setRolls(int);
      void roll();
      double mean();
      void median();
      void mode();
      void std_dev();
};
#endif
