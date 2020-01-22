// Instructions
// Create base class called Shape.
// Define pure virtual functions (= 0) for the base class.
// Write the derived classes.
// Inherit from class Shape.
// Override the pure virtual functions from the base class.
// Test in main()

// Example solution for Shape inheritance
#include <assert.h>
#include <cmath>

// TODO: Define pi
#define PI 3.14159;

// TODO: Define the abstract class Shape
  // TODO: Define public virtual functions Area() and Perimeter()
  // TODO: Append the declarations with = 0 to specify pure virtual functions
class Shape
{
public:
    virtual double Area() const = 0;
    virtual double Perimeter() const = 0;
};
// TODO: Define Rectangle to inherit publicly from Shape
  // TODO: Declare public constructor
  // TODO: Override virtual base class functions Area() and Perimeter()
  // TODO: Declare private attributes width and height
class Rectangle : public Shape
{
public:
    Rectangle(int a , int b) : width_(a) , height_(b) {}
    double Area() const { return width_ * height_; }
    double Perimeter() const { return 2 * (width_ + height_); }
private:
    double width_;
    double height_;
};

// TODO: Define Circle to inherit from Shape
  // TODO: Declare public constructor
  // TODO: Override virtual base class functions Area() and Perimeter()
  // TODO: Declare private member variable radius
class Circle : public Shape
{
public:
    Circle(double r) : radius_(r) {}
    double Area() const
    {
        return pow(radius_, 2) * PI ;
    }
    double Perimeter() const 
    
    {
        return 2 * radius_ * PI ;
    }

private:
    double radius_;
};

// Test in main()
int main() {
  double epsilon = 0.1; // useful for floating point equality

  // Test circle
  Circle circle(12.31);
  assert(abs(circle.Perimeter() - 77.35) < epsilon);
  assert(abs(circle.Area() - 476.06) < epsilon);

  // Test rectangle
  Rectangle rectangle(10, 6);
  assert(rectangle.Perimeter() == 32);
  assert(rectangle.Area() == 60);
}