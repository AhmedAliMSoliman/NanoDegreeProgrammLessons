// Example solution for Rectangle and Square friend classes
#include <assert.h>

// Declare class Rectangle
class Rectangle;

// Define class Square as friend of Rectangle
class Square
{
public: 
    Square(int side) : side_(side) {}
private:
    int side_;
    //friend class Rectangle;
};

// Add public constructor to Square, initialize side
    // Add friend class Rectangle

    // Add private attribute side

// Define class Rectangle
    // Add public function to Rectangle: Area()
    
    // Add private attributes width, height;
class Rectangle 
{
public:
    Rectangle(const Square& square);
    int Area() const;
private:
    int width {0};
    int height {0};
};

// Define a Rectangle constructor that takes a Square
Rectangle::Rectangle(const Square& square) : width(square.side_), height(square.side_) {}

// Define Area() to compute area of Rectangle
int Rectangle::Area() const
{
    return width * height;
}

// Update main() to pass the tests
int main()
{
    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.Area() == 16); 
}