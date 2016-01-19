/**************************************************************************
 ** Program Filename: FileFilter.h
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: FileFilter class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#ifndef FILEFILTER_H
#define FILEFILTER_H
#include <fstream>

using namespace std;

class FileFilter
{
   protected:
      char ch;

   public:
      virtual char transform(char) = 0;
      void doFilter(ifstream &, ofstream &);
};
#endif
