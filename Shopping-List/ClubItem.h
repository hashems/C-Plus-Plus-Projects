/**************************************************************************
 ** Program Filename: ClubItem.h
 ** Author: Sara Hashem
 ** Date: 4/23/2015
 ** Description: ClubItem derived class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#ifndef CLUBITEM_H
#define CLUBITEM_H

class ClubItem:public Item
{
   public:
      ClubItem();
      ClubItem(string, string, int, double);
      void setPrice(double);
};
#endif
