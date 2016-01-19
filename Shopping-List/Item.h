/**************************************************************************
 ** Program Filename: Item.h
 ** Author: Sara Hashem
 ** Date: 4/23/2015
 ** Description: Item class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#ifndef ITEM_H
#define ITEM_H
#include <string>

using std::string;

class Item
{
   protected:
      string name;
      string unit;
      int quant;
      double price;
   
   public:
      Item();
      Item(string, string, int, double);
      void setName(string);
      void setUnit(string);
      void setQuant(int);
      void setPrice(double);
      string getName();
      string getUnit();
      int getQuant();
      double getPrice();
      double getSubtotal();
};
#endif
