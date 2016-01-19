/**************************************************************************
 ** Program Filename: Copy.h
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: Copy class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "FileFilter.h"
#ifndef COPY_H
#define COPY_H

class Copy:public FileFilter
{
   public:
      char transform(char);
};
#endif
