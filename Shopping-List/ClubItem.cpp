/**************************************************************************
 ** Program Filename: ClubItem.cpp
 ** Author: Sara Hashem
 ** Date: 4/23/2015
 ** Description: CLubItem derived class implementation file
 ** Input: None
 ** Output: None
 *************************************************************************/

#include "Item.h"
#include "ClubItem.h"

// Constructors
/**************************************************************************
 ** Function: ClubItem Class Default Constructor
 ** Description: This function initializes a ClubItem object with empty
 ** strings for name and unit and 0 for quant and price.
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: ClubItem object created with empty string values and
 ** 0s
 *************************************************************************/
ClubItem::ClubItem()
{
   setName("");
   setUnit("");
   setQuant(0);
   setPrice(0.0);
}


/**************************************************************************
 ** Function: ClubItem Class Constructor
 ** Description: This function initializes a ClubItem object with string
 ** objects and values based on user input.
 ** Parameters: Two string objects, one integer, and one double
 ** Pre-Conditions: User input stored in parameter variables
 ** Post-Conditions: ClubItem object created with values based on user
 *  input
 *************************************************************************/
ClubItem::ClubItem(string inName, string inUnit, 
		   int inQuant, double inPrice)
{
   setName(inName);
   setUnit(inUnit);
   setQuant(inQuant);
   setPrice(0.0);
}



// setPrice (overloaded)
/**************************************************************************
 ** Function: setPrice (overloaded))
 ** Description: This function sets the private data member for price equal
 ** to 90% of the value input by the user.
 ** Parameters: One double
 ** Pre-Conditions: User affirms club card and club item status; user input
 ** stored in parameter variable and
 ** Post-Conditions: Private data member price equal to 90% of the value
 ** input by user
 *************************************************************************/
void ClubItem::setPrice(double inPrice)
{
   price = (inPrice - (inPrice * 0.10));
}
