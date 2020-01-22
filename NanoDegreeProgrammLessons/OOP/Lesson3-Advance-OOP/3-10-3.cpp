// Instructions
// Define class Point.
// Declare a prototype of overload method for + operator.
// Confirm the tests pass.

#include <assert.h>
#include <iostream>

// TODO: Define Point class
  // TODO: Define public constructor
  // TODO: Define + operator overload
  // TODO: Declare attributes x and y

// QUESTION: Everting work just after a and b initilized = 0 in the constructor paramiter !!!

class Point
{
public: 
    Point(int a=0 , int b=0) : x_(a) , y_(b) {}

    Point operator+(const Point& plus)
    {
        Point sum;
        sum.x_ = x_ + plus.x_;
        sum.y_ = y_ + plus.y_;
        return sum;
    }
private: 
    int x_ ;
    int y_ ; 
};

// Test in main()
int main() 
{
  Point p1(10, 5);
  Point p2(2, 4);
//   Point p3 = p1 + p2; // An example call to "operator +";
//   assert(p3.x == p1.x + p2.x);
//   assert(p3.y == p1.y + p2.y);
}