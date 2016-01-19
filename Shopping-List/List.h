/**************************************************************************
 ** Program Filename: List.h
 ** Author: Sara Hashem
 ** Date: 4/23/2015
 ** Description: List class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#ifndef LIST_H
#define LIST_H
#include <vector>

using std::vector;

class List
{
   private:
      vector<Item> list;
      int itemNum;

   public:
      void setItemNum(int);
      void addItem(Item);
      void removeItem(int);
      void displayList();
      void totalPrice();
};
#endif
