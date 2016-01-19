/**************************************************************************
** Author: Sara Hashem
** Date: 2/9/2015
** Description: LineSegment class declaration
**************************************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

using namespace std;

// Define interface of the LineSegment class
class LineSegment
{
   // Declare private data members
   private:
      Point endPoint1;
      Point endPoint2;
   
   // Public member function prototypes
   public:
      LineSegment();
      LineSegment(Point, Point);
      void setEnd1(Point);
      Point getEnd1();
      void setEnd2(Point);
      Point getEnd2();
      double length();
      double slope();
};
#endif
