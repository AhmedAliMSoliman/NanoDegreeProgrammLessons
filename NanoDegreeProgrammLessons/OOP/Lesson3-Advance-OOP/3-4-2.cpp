// Instructions
// Update the derived classes so that one has protected inheritance and one has private inheritance.
// Try to access a protected member from main(). Is it possible?
// Try to access a private member from main(). Is it possible?
// Try to access a member of the base class from within the derived class that has protected inheritance. Is it possible?
// Try to access a member of the base class from within the derived class that has private inheritance. Is it possible?


// This example demonstrates the privacy levels
// between parent and child classes
#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : protected Vehicle {
public:
    bool kickstand = true;
    void PrintPrint() {Print(); }
};

class Scooter : private Vehicle {
public:
    bool electric = false;
    void PrintPrint() {Print(); }
};

int main() 
{
    Car car;
    car.Print();
    
    Bicycle bicycle;
    bicycle.PrintPrint();

    Scooter scooter;
    scooter.PrintPrint();
};