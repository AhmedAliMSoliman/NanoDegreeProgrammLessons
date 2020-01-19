// Instructions
// Add a new member variable to class Vehicle.
// Output that new member in main().
// Derive a new class from Vehicle, alongside Car and Bicycle.
// Instantiate an object of that new class.
// Print the object.

#include <iostream>
#include <string>
using std::string;

class Vehicle 
{
public:
    int wheels = 0;
    string color = "blue";
    string name;
    
    void Print() const
    {
        std::cout << "This " << name << "has the color: " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class TokTok : public Vehicle
{};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : public Vehicle {
public:
    bool kickstand = true;
};

int main() 
{
    Car car;
    car.wheels = 4;
    car.sunroof = true;
    car.name = "NormalCar";
    car.Print();
    if(car.sunroof)
        std::cout << "And a sunroof!\n";

    TokTok toktok;
    toktok.wheels = 3;
    toktok.color = "red";
    toktok.name = "Tok Tok";
    toktok.Print();
};