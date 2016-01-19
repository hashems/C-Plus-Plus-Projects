/**************************************************************************
** Author: Sara Hashem
** Date: 2/9/2015
** Description: This program prompts the user for x and y coordinates and
** uses the input to calculate the length and slope of a line segment.
**************************************************************************/

#include <iostream>
#include <cmath>
#include "Point.hpp"
#include "LineSegment.hpp"
using namespace std;

// LineSegment member function implementation section

// Default constructor
LineSegment::LineSegment()
{
   // Create default Point objects
   Point pointA, pointB;

   // Pass default Point objects to set methods
   setEnd1(pointA);
   setEnd2(pointB);
}

// Constructor
LineSegment::LineSegment(Point point1, Point point2)
{
   setEnd1(point1);
   setEnd2(point2);
}


// Set and get methods
void LineSegment::setEnd1(Point point1)
{
   endPoint1 = point1;
}

void LineSegment::setEnd2(Point point2)
{
   endPoint2 = point2;
}

Point LineSegment::getEnd1()
{
   return endPoint1;
}

Point LineSegment::getEnd2()
{
   return endPoint2;
}


// length method
/**************************************************************************
** Description: This function calculates and returns the length between the
** two endpoints of a LineSegment object.
** Parameters: This function's parameters are two Point objects.
**************************************************************************/
double LineSegment::length()
{
   double length = endPoint2.distanceTo(endPoint1);
   
   return length;
}


// slope method
/**************************************************************************
** Description: This function calculates and returns the slope of a
** LineSegment object.
** Parameters: 
**************************************************************************/
double LineSegment::slope()
{
   double yCalc = endPoint2.getYCoord() - endPoint1.getYCoord();

   double xCalc = endPoint2.getXCoord() - endPoint1.getXCoord();

   double slope = yCalc / xCalc;

   return slope;
}



// main method
int main()
{
   // Create two Point objects
   Point point1, point2;

   // Create LineSegment object
   LineSegment lineSeg;

   // Declare variables to store user input
   double userX, userY;
   
   // Prompt user for x and y coordinates for point1
   cout << "Let's calculate the length and slope of a Line Segment! ";
   cout << "First, we'll need the" << endl;
   cout << "coordinates of two Points." << endl;
   cout << "Enter the values of your first Point." << endl;
   cout << "Point 1 X coordinate: ";
   cin >> userX;
   cout << "Point 1 Y coordinate: ";
   cin >> userY;
   cout << endl;

   // Call set methods for point1
   point1.setXCoord(userX);
   point1.setYCoord(userY);

   // Prompt user for x and y coordinates for point2
   cout << "Now, enter the values of your second Point." << endl;
   cout << "Point 2 X coordinate: ";
   cin >> userX;
   cout << "Point 2 Y coordinate: ";
   cin >> userY;
   cout << endl;

   // Call set methods for point2
   point2.setXCoord(userX);
   point2.setYCoord(userY);

   // Call set methods for lineSeg
   lineSeg.setEnd1(point1);
   lineSeg.setEnd2(point2);

   // Call length and slope functions and print results
   cout << "The length of your Line Segment is " << lineSeg.length() << ".";
   cout << endl;

   // Check if slope is vertical and print result
   if(isinf(lineSeg.slope()))
   {
      cout << "Your Line Segment is vertical." << endl;
   }
   else
   {
      cout << "The slope of your Line Segment is " << lineSeg.slope();
      cout << "." << endl;
   }

   return 0;
}
