/**************************************************************************
 ** Program Filename: main.cpp
 ** Author: Sara Hashem
 ** Date: 4/11/2015
 ** Description: This program displays iterations of various patterns of
 ** the Game of Life.
 ** Input: User's choice
 ** Output: 40 x 20 array with characters representing dead and live cells;
 ** 50 times
 *************************************************************************/

#include <iostream>
#include "Game.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
   // Create Game object
   Game user;

   // Declare variable for user input
   int choice;

   // Display rules and prompt user for choice
   cout << "Welcome to the Game of Life!" << endl;
   cout << endl;
   cout << "There are four simple rules to the game:" << endl;
   cout << "1: If an occupied cell has less than 2 neighbors, it dies.";
   cout << endl;
   cout << "2: If an occupied cell has more than 3 neighbors, it dies.";
   cout << endl;
   cout << "3: If an empty cell has exactly 3 neighbors, a cell is born.";
   cout << endl;
   cout << "4: Deaths [.] and births [O] are instantaneous." << endl;
   cout << endl;
   cout << "First, choose which pattern and position you'd like to begin ";
   cout << "the game with." << endl;
   cout << "You may also choose to reset or quit the game." << endl;
   
   // Display menu and get user's choice
   do
   {
      cout << endl;
      cout << "~~~~ Pattern & Position Menu ~~~~" << endl;
      cout << "1.   Oscillator in Upper Left Quadrant" << endl;
      cout << "2.   Oscillator in Upper Right Quadrant" << endl;
      cout << "3.   Oscillator in Lower Left Quadrant" << endl;
      cout << "4.   Oscillator in Lower Right Quadrant" << endl;
      cout << "5.   Glider in Upper Left Quadrant" << endl;
      cout << "6.   Glider in Upper Right Quadrant" << endl;
      cout << "7.   Glider in Lower Left Quadrant" << endl;
      cout << "8.   Glider in Lower Right Quadrant" << endl;
      cout << "9.   Glider Gun in Upper Half" << endl;
      cout << "10.  Glider Gun in Lower Half" << endl;
      cout << "11.  Reset Game" << endl;
      cout << "12.  Quit and Play the REAL Game of Life" << endl;
      cout << endl;
      cout << "What would you like to do? ";
      cin >> choice;
      cout << endl;
   
      // Validate input
      // While input is invalid, prompt for new choice
      while((choice < 1) || (choice > 12))
      {
	 cout << "Invalid choice. Please choose again: ";
	 cin >> choice;
      }
      
      // Process user's choice
      if(choice != 12)
      {
	 switch(choice)
	 {

	    // For each case, call appropriate function
	    case 1: user.oscillator1();
		    // Call rules and print functions 10 times
		    for(int i = 0; i < 10; i++)
		    {
		       user.rules();
		       user.print();
		    }
		    break;
	    case 2: user.oscillator2();
		    // Call rules and print functions 10 times
		    for(int i = 0; i < 10; i++)
		    {
		       user.rules();
		       user.print();
		    }
		    break;
	    case 3: user.oscillator3();
		    // Call rules and print functions 10 times
		    for(int i = 0; i < 10; i++)
		    {
		       user.rules();
		       user.print();
		    }
		    break;
	    case 4: user.oscillator4();
		    // Call rules and print functions 10 times
		    for(int i = 0; i < 10; i++)
		    {
		       user.rules();
		       user.print();
		    }
		    break;
	    case 5: user.glider1();
		    // Call rules and print functions 85 times
		    for(int i = 0; i < 85; i++)
		    {
		       user.rules();
		       user.print();
		    }
		    break;
	    case 6: user.glider2();
		    // Call rules and print functions 85 times
		    for(int i = 0; i < 85; i++)
		    {
		       user.rules();
		       user.print();
		    }
		    break;
	    case 7: user.glider3();
		    // Call rules and print functions 85 times
		    for(int i = 0; i < 85; i++)
		    {
		       user.rules();
		       user.print();
		    }
		    break;
	    case 8: user.glider4();
		    // Call rules and print functions 85 times
		    for(int i = 0; i < 85; i++)
		    {
		       user.rules();
		       user.print();
		    }
		    break;
	    case 9: user.gun1();
		    // Call rules and print functions 50 times
		    user.print();
		    for(int i = 0; i < 50; i++)
		    {
		       user.rules();
		       user.print();
		    }
		    break;

	    case 10: user.gun2();
		     // Call rules and print functions 50 times
		     for(int i = 0; i < 50; i++)
		     {
		        user.rules();
		        user.print();
		     }
		     break;
	    case 11: user.reset();
		     break;
	 }
      }
   } while(choice != 12);

   return 0;
}
