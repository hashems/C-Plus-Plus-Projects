/**************************************************************************
 ** Program Filename: Upper.h
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: Upper class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "FileFilter.h"
#ifndef UPPER_H
#define UPPER_H

using namespace std;

class Upper:public FileFilter
{
   public:
      char transform(char);
};
#endif
