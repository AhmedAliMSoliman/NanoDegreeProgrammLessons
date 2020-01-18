
// Declare:
// A constructor function that takes the radius as an argument
// A member function that returns the volume

// Directions
// Define a class called Sphere.
// Add one private member variable: radius.
// Define a constructor to initialize the radius.
// Define an accessor method that returns the radius.
// Define a member function to return the volume of the sphere.
// Write a main() function to initialize an object of type Sphere.

#include <cassert>
#include <cmath>
#include <stdexcept>

// TODO: Define class Sphere
class Sphere 
{
 public:
  // Constructor
  Sphere(int r) : radius_(r) , volume_(pi_ * 4/3 * pow(radius_,3))
  {
    Validator();
  }

  // Accessors
  float Radius()
  {
    return radius_;
  }
  float Volume()
  {
    return volume_;
  }


 private:
  // Private members
  float pi_{3.14};
  int radius_;
  float volume_;
  void Validator()
  {
    if (radius_ < 0)
       throw std::invalid_argument("Invalid raduis");
  }

};

// Test
int main(void) 
{
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);

}