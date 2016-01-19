/**************************************************************************
 ** Program Filename: Encrypt.h
 ** Author: Sara Hashem
 ** Date: 5/1/2015
 ** Description: Encrypt class header file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "FileFilter.h"
#ifndef ENCRYPT_H
#define ENCRYPT_H

class Encrypt:public FileFilter
{
   public:
      int key;
      int userKey;

   public:
      Encrypt();
      Encrypt(int);
      void keyPrompt();
      char transform(char);
};
#endif
