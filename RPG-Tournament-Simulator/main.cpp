/**************************************************************************
 ** Program Filename: main.cpp
 ** Author: Sara Hashem
 ** Date: 5/24/2015
 ** Description: This program simulates a tournament among Character
 ** fighters.
 ** Input: Integers for fighter and Character selection
 ** Output: User prompts, error messages, text from functions calls
 *************************************************************************/

#include "Character.hpp"
#include "Goblin.hpp"
#include "Barbarian.hpp"
#include "Reptile.hpp"
#include "Blue.hpp"
#include "Shadow.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "combat.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;


int main()
{
   // Create Queue objects for player 1 and 2 lineups
   Queue player1, player2;

   // Create Stack object for losers
   Stack losers, all;

   // Create pointers to Character objects
   Character *fighter1, *fighter2, *loser;
   Character *first = new Goblin("");
   Character *second = new Goblin("");
   Character *third = new Goblin("");
   
   // Generate seed for rand function
   srand(time(NULL));

   // Declare variables to store user input and return value
   int charNum, choice, result;
   string name;

   // Prompt user for number of characters for player 1
   cout << "Please enter the number of Characters you would like to do ";
   cout << "battle: ";
   cin >> charNum;

   // Validate input
   if(charNum < 1)
   {
      cout << "You need at least 1 Character." << endl;
      charNum = 1;
   }
   
   // Display menu of Characters for Player 2
   cout << "~~~ CHARACTERS ~~~" << endl;
   cout << "1.  Goblin" << endl;
   cout << "2.  Barbarian" << endl;
   cout << "3.  Reptile Person" << endl;
   cout << "4.  Blue Men" << endl;
   cout << "5.  Shadow" << endl;

   // Prompt Player 1 for Character lineup choices
   // Get first Character
   cout << "Player 1, please enter the first Character in your lineup ";
   cout << "from the choices" << endl;
   cout << "above: ";
   cin >> choice;
   
   // Process first choice
   if((choice < 1) || (choice > 5))
   {
      cout << "Please choose a number 1 through 5: ";
      cin >> choice;
   }
   else if(choice == 1)
   {
      cout << "Name your Goblin: ";
      cin >> name;
      fighter1 = new Goblin(name);
      player1.add(fighter1);
   }
   else if(choice == 2)
   {
      cout << "Name your Barbarian: ";
      cin >> name;
      fighter1 = new Barbarian(name);
      player1.add(fighter1);
   }
   else if(choice == 3)
   {
      cout << "Name your Reptile Person: ";
      cin >> name;
      fighter1 = new Reptile(name);
      player1.add(fighter1);
   }
   else if(choice == 4)
   {
      cout << "Name your Blue Men: ";
      cin >> name;
      fighter1 = new Blue(name);
      player1.add(fighter1);
   }
   else if(choice == 5)
   {
      cout << "Name your Shadow: ";
      cin >> name;
      fighter1 = new Shadow(name);
      player1.add(fighter1);
   }

   // Get remaining Characters
   for(int i = 0; i < (charNum - 1); i++)
   {
      cout << "Enter your next Character choice: ";
      cin >> choice;

      // Process choice
      if((choice < 1) || (choice > 5))
      {
	 cout << "Please choose a number 1 through 5: ";
	 cin >> choice;
      }
      else if(choice == 1)
      {
	 cout << "Name your Goblin: ";
	 cin >> name;
	 fighter1 = new Goblin(name);
	 player1.add(fighter1);
      }
      else if(choice == 2)
      {
	 cout << "Name your Barbarian: ";
	 cin >> name;
	 fighter1 = new Barbarian(name);
	 player1.add(fighter1);
      }
      else if(choice == 3)
      {
	 cout << "Name your Reptile Person: ";
	 cin >> name;
	 fighter1 = new Reptile(name);
	 player1.add(fighter1);
      }
      else if(choice == 4)
      {
	 cout << "Name your Blue Men: ";
	 cin >> name;
	 fighter1 = new Blue(name);
	 player1.add(fighter1);
      }
      else if(choice == 5)
      {
	 cout << "Name your Shadow: ";
	 cin >> name;
	 fighter1 = new Shadow(name);
	 player1.add(fighter1);
      }
   }


   // Display menu of Characters for Player 2
   cout << "~~~ CHARACTERS ~~~" << endl;
   cout << "1.  Goblin" << endl;
   cout << "2.  Barbarian" << endl;
   cout << "3.  Reptile Person" << endl;
   cout << "4.  Blue Men" << endl;
   cout << "5.  Shadow" << endl;

   // Prompt Player 2 for Character lineup choices
   // Get first Character
   cout << "Player 2, please enter the first Character in your lineup ";
   cout << "from the choices" << endl;
   cout << "above: ";
   cin >> choice;
   
   // Process first choice
   if((choice < 1) || (choice > 5))
   {
      cout << "Please choose a number 1 through 5: ";
      cin >> choice;
   }
   else if(choice == 1)
   {
      cout << "Name your Goblin: ";
      cin >> name;
      fighter2 = new Goblin(name);
      player2.add(fighter2);
   }
   else if(choice == 2)
   {
      cout << "Name your Barbarian: ";
      cin >> name;
      fighter2 = new Barbarian(name);
      player2.add(fighter2);
   }
   else if(choice == 3)
   {
      cout << "Name your Reptile Person: ";
      cin >> name;
      fighter2 = new Reptile(name);
      player2.add(fighter2);
   }
   else if(choice == 4)
   {
      cout << "Name your Blue Men: ";
      cin >> name;
      fighter2 = new Blue(name);
      player2.add(fighter2);
   }
   else if(choice == 5)
   {
      cout << "Name your Shadow: ";
      cin >> name;
      fighter2 = new Shadow(name);
      player2.add(fighter2);
   }

   // Get remaining Characters
   for(int i = 0; i < (charNum - 1); i++)
   {
      cout << "Enter your next Character choice: ";
      cin >> choice;

      // Process choice
      if((choice < 1) || (choice > 5))
      {
	 cout << "Please choose a number 1 through 5: ";
	 cin >> choice;
      }
      else if(choice == 1)
      {
	 cout << "Name your Goblin: ";
	 cin >> name;
	 cout << endl;
	 fighter2 = new Goblin(name);
	 player2.add(fighter2);
      }
      else if(choice == 2)
      {
	 cout << "Name your Barbarian: ";
	 cin >> name;
	 cout << endl;
	 fighter2 = new Barbarian(name);
	 player2.add(fighter2);
      }
      else if(choice == 3)
      {
	 cout << "Name your Reptile Person: ";
	 cin >> name;
	 cout << endl;
	 fighter2 = new Reptile(name);
	 player2.add(fighter2);
      }
      else if(choice == 4)
      {
	 cout << "Name your Blue Men: ";
	 cin >> name;
	 cout << endl;
	 fighter2 = new Blue(name);
	 player2.add(fighter2);
      }
      else if(choice == 5)
      {
	 cout << "Name your Shadow: ";
	 cin >> name;
	 cout << endl;
	 fighter2 = new Shadow(name);
	 player2.add(fighter2);
      }
   }

   // While both Queues still have fighters
   while((!player1.isEmpty()) && (!player2.isEmpty()))
   {
      // Get head Nodes from each Queue
      fighter1 = player1.remove();
      fighter2 = player2.remove();

      // Call combat function, passing fighters as paramaters
      // Store return value
      result = combat(fighter1, fighter2);

      // Add loser to Stack and winner to back of Queue
      if(result == 1)
      {
	 losers.add(fighter1);
	 
	 player2.add(fighter2);

	 all.add(fighter2);
      }
      else if(result == 2)
      {
	 losers.add(fighter2);
	 
	 player1.add(fighter1);

	 all.add(fighter1);
      }
   }
   
   // Update finalists
   if(fighter1->hits >= first->hits)
   {
      first = fighter1;
   }
   else if(fighter2->hits >= first->hits)
   {
      first = fighter2;
   }
   else if((fighter1->hits >= second->hits) && 
	    (fighter1->hits < first->hits))
   {
      second = fighter1;
   }
   else if((fighter2->hits >= second->hits) && 
	    (fighter2->hits < first->hits))
   {
      second = fighter2;
   }
   else if((fighter1->hits >= third->hits) && 
	    (fighter1->hits < second->hits))
   {
      third = fighter1;
   }
   else if((fighter2->hits >= third->hits) && 
	    (fighter2->hits < second->hits))
   {
      third = fighter2;
   }

   // Declare the winner
   if(player1.isEmpty())
   {
      cout << "Player 2 is the winner!" << endl;
      cout << endl;
   }
   else if(player2.isEmpty())
   {
      cout << "Player 1 is the winner!" << endl;
      cout << endl;
   }

   // Print losers Stack
   cout << "And the losers are..." << endl;
   
   int i = 1;
   while(!(losers.isEmpty()))
   {
      loser = losers.remove();
      all.add(loser);

      cout << i << ".  " << loser->name << ", the " << loser->type << endl;

      i++;
   }
   cout << endl;

   // Get and tournament results
   cout << "Third Place: " << third->name << ", the " << third->type;
   cout << " with a total of " << third->hits << " hits!" << endl;
   
   cout << "Second Place: " << second->name << ", the " << second->type;
   cout << " with a total of " << second->hits << " hits!" << endl;
   
   cout << "First Place: " << first->name << ", the " << first->type;
   cout << " with a total of " << first->hits << " hits!" << endl;


   return 0;
}
