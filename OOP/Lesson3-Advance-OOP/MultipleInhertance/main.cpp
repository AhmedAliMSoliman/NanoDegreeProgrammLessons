#include <iostream>
#include <cassert>
#include <string>

class Car
{
public: 
    std::string Driveing() { return "I'am Driving" ; }
};

class Boat
{
public: 
    std::string Cruise() { return "I'am Cruising" ; }
};

class Amphibious : public Car , public Boat
{

};

int main()
{
    Car car;
    Boat boat;
    Amphibious douck; 
    assert(car.Driveing() == douck.Driveing());
    assert(boat.Cruise() == douck.Cruise());
}