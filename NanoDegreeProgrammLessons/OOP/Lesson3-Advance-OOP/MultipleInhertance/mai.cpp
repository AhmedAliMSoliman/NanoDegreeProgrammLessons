#include <iostream>
#include <cassert>
#include <string>

class Car
{
public: 
    std::string Driveing() { return "I'am Driving" ; }
};

class Boat : public Car
{
public: 
    std::string Cruise() { return "I'am Cruising" ; }
};

class Amphibious : public Boat
{

};

int main()
{
    Car car;
    Boat boat;
    Amphibious douck; 

    assert(car.Driveing() == douck.Driveing());
}