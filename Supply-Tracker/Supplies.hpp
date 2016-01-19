/**************************************************************************
** Author: Sara Hashem
** Date: 2/9/2015
** Description: Supplies class declaration
**************************************************************************/

#ifndef SUPPLIES_HPP
#define SUPPLIES_HPP

using namespace std;

// Define interface of the Supplies class
class Supplies
{
   // Declare private data members
   private:
      int numThings;
      int numWats;
      int numFrams;
   
   // Publid member function prototypes
   public:
      Supplies();
      Supplies(int, int, int);
      void setNumThingamajigs(int);
      void setNumWatchamacallits(int);
      void setNumFramistats(int);
      void printPartsOrder();
      void produceThing1(int);
      void produceThing2(int);
};
#endif
