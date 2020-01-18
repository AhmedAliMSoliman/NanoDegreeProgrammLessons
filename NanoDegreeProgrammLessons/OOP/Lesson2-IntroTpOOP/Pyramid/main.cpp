// Exercise: Pyramid Class
// Create a class: Pyramid.
// Create 3 attributes: length, width, and height.
// Create a constructor to initialize all the attributes.
// Create accessor and mutator functions for all attributes.
// Think about the appropriate invariants and enforce them by throwing exceptions.
// Create a member function to calculate the volume of the pyramid.
// Optional: create a member function to calculate the surface area of the pyramid.

#include <cassert>
#include <stdexcept>

// TODO: Define class Pyramid
class Pyramid
{
public:
    // constructor
    Pyramid(int l , int w , int h) : length_(l) , width_(w) , height_(h) 
    { Validate(); }

    // accessors
    int Length() const { return length_ ; }
    int Width() const { return width_ ; }
    int Height() const { return height_ ; }

    // mutators
    void Length(int le) { length_ = le ; Validate(); }
    void Width(int wi) { width_ = wi ; Validate(); }
    void Height(int he) { height_ = he ; Validate(); }
    
     // public Volume() function
     float Volume() const 
     { 
         return Length() * Width() * Height() / 3.0 ; 
     }

// private class members
private:
    int length_;
    int width_;
    int height_;
    void Validate()
    {
        if(length_ <= 0 || width_ <= 0 || height_ <= 0 )
            throw std::invalid_argument("Negative Dimension");
    }
};
// public class members
// constructor
// accessors
// mutators
// public Volume() function
// private class members

// Test
int main() {
  Pyramid pyramid(4, 5, 6);
  assert(pyramid.Length() == 4);
  assert(pyramid.Width() == 5);
  assert(pyramid.Height() == 6);
  assert(pyramid.Volume() == 40);

  bool caught{false};
  try {
    Pyramid invalid(2, 2, 3);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}