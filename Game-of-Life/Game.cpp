/**************************************************************************
 ** Program Filename: Game.cpp
 ** Author: Sara Hashem
 ** Date: 4/11/2015
 ** Description: Game class implementation file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include <iostream>
#include "Game.h"

using std::cout;
using std::endl;

// Constructor
/**************************************************************************
 ** Function: Constructor
 ** Description: This function initializes the world array with a central
 ** fixed oscillator and the rest of the cells with dead cell characters.
 ** Parameters: None
 ** Pre-Conditions: Uninitalized array
 ** Post-Conditions: Array initialized with central fixed oscillator and
 ** dead cell characters.
 *************************************************************************/
Game::Game()
{
   // Initialize all cells with dead symbols
   for(int r = 0; r < 24; r++)
   {
      for(int c = 0; c < 44; c++)
      {
	 world[r][c] = '.';
      }
      cout << endl;
   }
   
   // Initialize array with central fixed oscillator for rules testing
   world[11][20] = world[11][21] = world[11][22] = 'O';
}



// Oscillator functions
/**************************************************************************
 ** Function: oscillator1
 ** Description: This function initializes parts of the world array with a
 ** fixed oscillator pattern in the upper left quadrant.
 ** Parameters: None
 ** Pre-Conditions: Array without fixed oscillator in upper left quadrant
 ** Post-Conditions: Array with fixed oscillator in upper left quadrant
 *************************************************************************/
void Game::oscillator1()
{
   world[5][5] = world[5][6] = world[5][7] = 'O';
}


/**************************************************************************
 ** Function: oscillator2
 ** Description: This function initializes parts of the world array with a
 ** fixed oscillator pattern in the upper right quadrant.
 ** Parameters: None
 ** Pre-Conditions: Array without fixed oscillator in upper right quadrant
 ** Post-Conditions: Array with fixed oscillator in upper right quadrant
 *************************************************************************/
void Game::oscillator2()
{
   world[5][25] = world[5][26] = world[5][27] = 'O';
}


/**************************************************************************
 ** Function: oscillator3
 ** Description: This function initializes parts of the world array with a
 ** fixed oscillator pattern in the lower left quadrant.
 ** Parameters: None
 ** Pre-Conditions: Array without fixed oscillator in lower left quadrant
 ** Post-Conditions: Array with fixed oscillator in lower left quadrant
 *************************************************************************/
void Game::oscillator3()
{
   world[15][5] = world[15][6] = world[15][7] = 'O';
}


/**************************************************************************
 ** Function: oscillator4
 ** Description: This function initializes parts of the world array with a
 ** fixed oscillator pattern in the lower right quadrant.
 ** Parameters: None
 ** Pre-Conditions: Array without fixed oscillator in lower right quadrant
 ** Post-Conditions: Array with fixed oscillator in lower right quadrant
 *************************************************************************/
void Game::oscillator4()
{
   world[15][25] = world[15][26] = world[15][27] = 'O';
}



// Glider functions
/**************************************************************************
 ** Function: glider1
 ** Description: This function initializes parts of the world array with a
 ** glider pattern in the upper left quadrant.
 ** Parameters: None
 ** Pre-Conditions: Array without glider in upper left quadrant
 ** Post-Conditions: Array with glider in upper left quadrant
 *************************************************************************/
void Game::glider1()
{
   world[5][4] = world[6][5] = world[6][6] = world[5][6] = 
   world[4][6] = 'O';
}


/**************************************************************************
 ** Function: glider2
 ** Description: This function initializes parts of the world array with a
 ** glider pattern in the upper right quadrant.
 ** Parameters: None
 ** Pre-Conditions: Array without glider in upper right quadrant
 ** Post-Conditions: Array with glider in upper right quadrant
 *************************************************************************/
void Game::glider2()
{
   world[5][24] = world[6][25] = world[6][26] = world[5][26] = 
   world[4][26] = 'O';
}


/**************************************************************************
 ** Function: glider3
 ** Description: This function initializes parts of the world array with a
 ** glider pattern in the lower left quadrant.
 ** Parameters: None
 ** Pre-Conditions: Array without glider in lower left quadrant
 ** Post-Conditions: Array with glider in lower left quadrant
 *************************************************************************/
void Game::glider3()
{
   world[15][4] = world[16][5] = world[16][6] = world[15][6] = 
   world[14][6] = 'O';
}


/**************************************************************************
 ** Function: glider4
 ** Description: This function initializes parts of the world array with a
 ** glider pattern in the lower right quadrant.
 ** Parameters: None
 ** Pre-Conditions: Array without glider in lower right quadrant
 ** Post-Conditions: Array with glider in lower right quadrant
 *************************************************************************/
void Game::glider4()
{

   world[15][24] = world[16][25] = world[16][26] = world[15][26] = 
   world[14][26] = 'O';
}



// Glider gun functions
/**************************************************************************
 ** Function: gun1
 ** Description: This function initializes parts of the world array with a
 ** glider gun pattern in the upper half.
 ** Parameters: None
 ** Pre-Conditions: Array without glider gun in upper half
 ** Post-Conditions: Array with glider gun in upper half
 *************************************************************************/
void Game::gun1()
{
   world[3][29] = world[4][27] = world[4][29] = world[5][17] = 
   world[5][18] = world[5][25] = world[5][26] = world[5][39] = 
   world[5][40] = world[6][16] = world[6][20] = world[6][25] = 
   world[6][26] = world[6][39] = world[6][40] = world[7][5] = 
   world[7][6] = world[7][15] = world[7][21] = world[7][25] = 
   world[7][26] = world[8][5] = world[8][6] = world[8][15] = 
   world[8][19] = world[8][21] = world[8][22] = world[8][27] = 
   world[8][29] = world[9][15] = world[9][21] = world[9][29] = 
   world[10][16] = world[10][20] = world[11][17] = world[11][18] = 'O';
}


/**************************************************************************
 ** Function: gun2
 ** Description: This function initializes parts of the world array with a
 ** glider gun pattern in the lower upper.
 ** Parameters: None
 ** Pre-Conditions: Array without glider gun in lower half
 ** Post-Conditions: Array with glider gun in lower half
 *************************************************************************/
void Game::gun2()
{
   world[12][29] = world[13][27] = world[13][29] = world[14][17] = 
   world[14][18] = world[14][25] = world[14][26] = world[14][39] = 
   world[14][40] = world[15][16] = world[15][20] = world[15][25] = 
   world[15][26] = world[15][39] = world[16][40] = world[16][5] = 
   world[16][6] = world[16][15] = world[16][21] = world[16][25] = 
   world[16][26] = world[17][5] = world[17][6] = world[17][15] = 
   world[17][19] = world[17][21] = world[17][22] = world[17][27] = 
   world[17][29] = world[18][15] = world[18][21] = world[18][29] = 
   world[19][16] = world[19][20] = world[20][17] = world[20][18] = 'O';
}



// Rules function
/**************************************************************************
 ** Function: rules
 ** Description: This function applies the four rules of the game to each
 ** cell in the copy array, transfers the information to the world arry, 
 ** and clears the copy array after each iteration.
 ** Parameters: None
 ** Pre-Conditions: Array initialized with characters
 ** Post-Conditions: Information copied to world array and copy array 
 ** cleared
 *************************************************************************/
void Game::rules()
{
   // Declare local accumulator variable for neighboring cell count
   int count;

   for(int r = 2; r < 24; r++)
   {
      for(int c = 2; c < 44; c++)
      {
	 count = 0;
	 if(world[r - 1][c - 1] == 'O')
	 {
	    count++;
	 }
	 if(world[r - 1][c] == 'O')
	 {
	    count++;
	 }
	 if(world[r - 1][c + 1] == 'O')
	 {
	    count++;
	 }
	 if(world[r][c + 1] == 'O')
	 {
	    count++;
	 }
	 if(world[r + 1][c + 1] == 'O')
	 {
	    count++;
	 }
	 if(world[r + 1][c] == 'O')
	 {
	    count++;
	 }
	 if(world[r + 1][c - 1] == 'O')
	 {
	    count++;
	 }
	 if(world[r][c - 1] == 'O')
	 {
	    count++;
	 }

	 // Apply rules
	 
	 // Cell death from loneliness OR overcrowding
	 if(count < 2 || count > 3)
	 {
	    copy[r][c] = '.';
	 }
	 
         // Cell is born
	 if(count == 3)
	 {
	    copy[r][c] = 'O';
	 }
	 
	 // Cell does not change, dead or alive
	 if(count == 2)
	 {
	    copy[r][c] = world[r][c];
	 }
      }
   }

   // Transfer array information from copy to world array
   for(int r = 0; r < 24; r++)
   {
      for(int c = 0; c < 44; c++)
      {
	 world[r][c] = copy[r][c];
      }
      cout << endl;
   }

   // Reset copy array
   for(int r = 0; r < 24; r++)
   {
      for(int c = 0; c < 44; c++)
      {
	 copy[r][c] = '.';
      }
   }
}



// Print function
/**************************************************************************
 ** Function: print
 ** Description: This function prints a limited range of the world array.
 ** Parameters: None
 ** Pre-Conditions: World array initialized with characters
 ** Post-Conditions: Limited range of world array printed to screen
 *************************************************************************/
void Game::print()
{
   // Only display central 40 x 20 values
   for(int r = 2; r < 22; r++)
   {
      for(int c = 2; c < 42; c++)
      {
	 cout << world[r][c];
      }
      cout << endl;
   }
}



/**************************************************************************
 ** Function: reset
 ** Description: This function reinitializes world array to dead cell 
 ** characters.
 ** Parameters: None
 ** Pre-Conditions: World array initialized with some live cells
 ** Post-Conditions: World array reinitialized to dead cell characters
 *************************************************************************/
void Game::reset()
{
   for(int r = 0; r < 24; r++)
   {
      for(int c = 0; c < 44; c++)
      {
	 world[r][c] = '.';
      }
      cout << endl;
   }
}
