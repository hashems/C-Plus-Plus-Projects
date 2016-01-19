/**************************************************************************
 ** Program Filename: Item.cpp
 ** Author: Sara Hashem
 ** Date: 4/23/2015
 ** Description: Item class implementation file
 ** Input: None
 ** Output: None
 *************************************************************************/


#include "Item.h"
#include <string>

// Constructors
/**************************************************************************
 ** Function: Item Class Default Constructor
 ** Description: This function initializes an Item object with empty
 ** strings for name and unit and 0 for quant and price.
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: Item object created with empty string values and 0s
 *************************************************************************/
Item::Item()
{
   setName("");
   setUnit("");
   setQuant(0);
   setPrice(0.0);
}


/**************************************************************************
 ** Function: Item Class Constructor
 ** Description: This function initializes an Item object with string
 ** objects and values entered by user.
 ** Parameters: Two string objects, one integer, and one double
 ** Pre-Conditions: User input stored in parameter variables
 ** Post-Conditions: Item object created with values entered by user
 *************************************************************************/
Item::Item(string inName, string inUnit, int inQuant, double inPrice)
{
   setName(inName);
   setUnit(inUnit);
   setQuant(inQuant);
   setPrice(inPrice);
}



// Set methods
/**************************************************************************
 ** Function: setName
 ** Description: This function sets the private data member for name equal
 ** to the value input by the user.
 ** Parameters: One string object
 ** Pre-Conditions: User input stored in parameter variable
 ** Post-Conditions: Private data member name equal to value input by user
 *************************************************************************/
void Item::setName(string inName)
{
   name = inName;
}


/**************************************************************************
 ** Function: setUnit
 ** Description: This function sets the private data member for unit equal
 ** to the value input by the user.
 ** Parameters: One string object
 ** Pre-Conditions: User input stored in parameter variable
 ** Post-Conditions: Private data member unit equal to value input by user
 *************************************************************************/
void Item::setUnit(string inUnit)
{
   unit = inUnit;
}


/**************************************************************************
 ** Function: setQuant
 ** Description: This function sets the private data member for quant equal
 ** to the value input by the user.
 ** Parameters: One integer
 ** Pre-Conditions: User input stored in parameter variable
 ** Post-Conditions: Private data member quant equal to value input by user
 *************************************************************************/
void Item::setQuant(int inQuant)
{
   quant = inQuant;
}


/**************************************************************************
 ** Function: setPrice
 ** Description: This function sets the private data member for price equal
 ** to the value input by the user.
 ** Parameters: One double
 ** Pre-Conditions: User input stored in parameter variable
 ** Post-Conditions: Private data member price equal to value input by user
 *************************************************************************/
void Item::setPrice(double inPrice)
{
   price = inPrice;
}



// Get methods
/**************************************************************************
 ** Function: getName
 ** Description: This function returns the value stored in private data
 ** member name
 ** Parameters: None
 ** Pre-Conditions: Private data member name initialized
 ** Post-Conditions: Value stored in name returned
 *************************************************************************/
string Item::getName()
{
   return name;
}


/**************************************************************************
 ** Function: getUnit
 ** Description: This function returns the value stored in private data
 ** member unit
 ** Parameters: None
 ** Pre-Conditions: Private data member unit initialized
 ** Post-Conditions: Value stored in unit returned
 *************************************************************************/
string Item::getUnit()
{
   return unit;
}


/**************************************************************************
 ** Function: getQuant
 ** Description: This function returns the value stored in private data
 ** member quant
 ** Parameters: None
 ** Pre-Conditions: Private data member quant initialized
 ** Post-Conditions: Value stored in quant returned
 *************************************************************************/
int Item::getQuant()
{
   return quant;
}


/**************************************************************************
 ** Function: getPrice
 ** Description: This function returns the value stored in private data
 ** member price
 ** Parameters: None
 ** Pre-Conditions: Private data member price initialized
 ** Post-Conditions: Value stored in price returned
 *************************************************************************/
double Item::getPrice()
{
   return price;
}


/**************************************************************************
 ** Function: getSubtotal
 ** Description: This function calculates and returns the subtotal of an
 ** Item object
 ** Parameters: None
 ** Pre-Conditions: Private data members quant and price initialized
 ** Post-Conditions: Value stored in subtotal returned
 *************************************************************************/
double Item::getSubtotal()
{
   // Declare and initialize subtotal variable to 0.0
   double subtotal = 0.0;
   
   // Calculate subtotal
   subtotal = quant * price;

   return subtotal;
}
