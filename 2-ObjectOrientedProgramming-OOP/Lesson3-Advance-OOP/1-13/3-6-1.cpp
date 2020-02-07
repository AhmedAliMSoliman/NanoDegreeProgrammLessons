// Compisition in c++

// Instructions
// In this exercise, you will start with a LineSegment class and create a Circle class.
// Note that you will compose Circle from LineSegment, instead of inheriting Circle from LineSegment. Specifically, 
// the length attribute from LineSegment will become the circle's radius.

// 1. Create a class LineSegment.
// 2. Declare an attribute length in class LineSegment.
// 3. Define pi (3.14159) with a macro.
// 4. Create a class Circle, composed of a LineSegment that represent's the circle's radius. Use this radius to calculate the area of the 
// circle (area of a circle = pi r^2).
// 5. Verify the behavior of Circle in main().

#include <iostream>
#include <cmath>
#include <assert.h>

// Define pi
#define PI 3.14159;

// Define Line Class
struct LineSegment
{
public:
    // Define protected attribute length
    double length;
};
    
// Define Circle subclass

    // Define public setRadius() and getArea()
class Circle
{
public: 
    Circle(LineSegment& radius);
    double Area();

private:
    LineSegment& radius_;
};

Circle::Circle(LineSegment& radius) : radius_(radius) {}
double Circle::Area()
{
    return pow(Circle::radius_.length, 2) * PI;
}

// Test in main()
int main() 
{
    LineSegment radius {3};
    Circle circle(radius);
    assert(int(circle.Area()) == 28);
}