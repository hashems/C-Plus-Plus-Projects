/**************************************************************************
 ** Program Filename: Group.h
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: Group class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "FileFilter.h"
#ifndef GROUP_H
#define GROUP_H
#include <fstream>

using namespace std;

class Group:public FileFilter
{
   private:
      int key;
      int userKey;

   public:
      Group();
      Group(int);
      void keyPrompt();
      char transform(char);
      void doFilter(ifstream &, ofstream &);
};
#endif
