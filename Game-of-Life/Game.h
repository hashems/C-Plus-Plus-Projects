/**************************************************************************
 ** Program Filename: Game.h
 ** Author: Sara Hashem
 ** Date: 4/11/2015
 ** Description: Game class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include <iostream>
#ifndef GAME_H
#define GAME_H


class Game
{
   private:
      char world[24][44];
      char copy[24][44];

   public:
      // Constructor
      Game();
      
      // Oscillator function prototypes
      void oscillator1();
      void oscillator2();
      void oscillator3();
      void oscillator4();
      
      // Glider function prototypes
      void glider1();
      void glider2();
      void glider3();
      void glider4();
      
      // Glider Gun function prototypes
      void gun1();
      void gun2();

      // Rules function prototype
      void rules();

      // Print function prototype
      void print();

      // Reset function prototype
      void reset();
};
#endif
