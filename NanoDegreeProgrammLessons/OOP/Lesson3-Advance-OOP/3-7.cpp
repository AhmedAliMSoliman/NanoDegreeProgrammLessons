// Exercise: Class Hierarchy
// Multi-level inheritance is term used for chained classes in an inheritance tree. Have a look at the example in the notebook below 
//to get a feel for multi-level inheritance.

#include <cassert>

// TODO: Declare Vehicle as the base class
class Vehicle
{
public:
    bool trunk = true;
};

// TODO: Derive Car from Vehicle
class Car : public Vehicle
{
public:
    int seats = 4;
    int windows{2};
};

// TODO: Derive Sedan from Car
class Sedan : public Car
{
public:
    int wheels;
    Sedan() : wheels(4) {}
};

// TODO: Update main to pass the tests
int main() 
{
    Sedan sedan;
    assert(sedan.trunk == true);
    assert(sedan.seats == 4);
    assert(sedan.windows == 2);
    assert(sedan.wheels == 4);
}