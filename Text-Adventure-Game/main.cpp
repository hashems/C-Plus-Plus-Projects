/**************************************************************************
 ** Program Filename: main.cpp
 ** Author: Sara Hashem
 ** Date: 6/8/2015
 ** Description: This program is a text adventure game.
 ** Input: None
 ** Output: User prompts and text printed from functions
 *************************************************************************/

#include "Room.hpp"
#include "Room1.hpp"
#include "Room2.hpp"
#include "Room3.hpp"
#include "Hero.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


/*
   ~~~ Dungeon Map ~~~
   
   +-----+		   +-----+        +-----+
   |cave1|		   |cave4|        |cave6|
   +-----+		   +-----+        +-----+
      |			      |		     |
   +---------+  +-----+  +---------+  +---------+
   |corridor1|--|cave3|--|corridor2|--|corridor3|
   +---------+  +-----+  +---------+  +---------+
      |			      |		        |
   +-----+		   +-----+         +----+  
   |cave2|		   |cave5|---------|trez|
   +-----+		   +-----+         +----+

*/



int main()
{
   // Generate seed for rand functions
   srand(time(NULL));

   // Create objects
   Hero you;

   Room *corridor1 = new Room1("a large cooridor", "hand axe");
   Room *corridor2 = new Room1("a narrow cooridor", "dead rat");
   Room *corridor3 = new Room1("a small cooridor", "rusty helmet");
   Room *cave1 = new Room2("a small cavern");
   Room *cave2 = new Room2("a small cavern");
   Room *cave3 = new Room2("a large cave");
   Room *cave4 = new Room2("a small cavern");
   Room *cave5 = new Room2("a small cavern");
   Room *cave6 = new Room2("a small cavern");
   Room *trez = new Room3("a massive cavern");

   // Initialize pointers
   corridor1->north = cave1;
   corridor1->south = cave2;
   corridor1->east = cave3;
   corridor2->north = cave4;
   corridor2->south = cave5;
   corridor2->east = corridor3;
   corridor3->north = cave6;
   corridor3->south = trez;
   cave1->south = corridor1;
   cave2->north = corridor1;
   cave3->east = corridor2;
   cave3->west = corridor1;
   cave4->south = corridor2;
   cave5->north = corridor2;
   cave5->east = trez;
   cave6->south = corridor3;
   trez->north = corridor3;
   trez->west = cave5;

   // Set the scene
   cout << "Lore of ancient treasure finds its way to your ears one eve. ";
   cout << "As you sip your " << endl;
   cout << "ale and ponder the great good you could with such riches, ";
   cout << "a drunkard plops " << endl;
   cout << "himself down beside you and begins to babble on about a ";
   cout << "cave system just south " << endl;
   cout << "of town. 'You want real riches?' he practically belches in ";
   cout << "your ear. 'My golds' " << endl;
   cout << "on them there rundown ole mines. Overrun with beasties, but ";
   cout << "still fulla secrets" << endl;
   cout << "...and gooold!' Gold just so happens to be your middle name. ";
   cout << "You down your ale, " << endl;
   cout << "bunk down for the night, and get ready for your " << endl;
   cout << "next " << endl;
   cout << "   great " << endl;
   cout << "      adventure..." << endl << endl;

   cout << "The morning finds you standing outside the yawning entrance ";
   cout << "to the very same " << endl;
   cout << " dilapidated mine system that old fool mentioned last night. ";
   cout << "Around town, " << endl;
   cout << "people have whispered of a great treasure lying in the east ";
   cout << "of the caves, where " << endl;
   cout << "the foreman is said to have perished protecting his ";
   cout << "last material possesions " << endl;
   cout << "in this world. " << endl << endl;
   cout << "You step in..." << endl << endl;

   you.setLocation(corridor1->describe());
   if(corridor1->found == true)
   {
      you.addItem(corridor1->findItem());
   }
      
   int i = 0;
   for(; i <= 8; i++)
   {
      you.setLocation(you.location->describe());
      if(you.location->found == true)
      {
	 you.addItem(you.location->findItem());
      }
      
      if(i >= 5)
      {
	 // Print hint
	 cout << endl;
	 cout << "HINT: Oh yeah! That old fool said to go east..." << endl;
	 cout << endl;
      }

      if(you.location == trez)
      {
	 cout << "Congratulations! You've found the hidden treasure and ";
	 cout << "won the game!" << endl;
      }
   }

   if(i > 8)
   {
      cout << "Time's up! Game over!" << endl;
   }
   

   return 0;
}
