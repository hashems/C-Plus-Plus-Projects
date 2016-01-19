/**************************************************************************
 ** Program Filename: LoadedDice.h
 ** Author: Sara Hashem
 ** Date: 4/19/2015
 ** Description: LoadedDice class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#ifndef LOADEDDICE_H
#define LOADEDDICE_H

class LoadedDice:public Dice
{
   public:
      LoadedDice();
      LoadedDice(int);
      void roll();
};
#endif
