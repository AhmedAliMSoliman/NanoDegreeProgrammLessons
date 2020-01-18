
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
class Sphere {
 public:
  // Constructor

  // Accessors

 private:
  // Private members
};

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);
}