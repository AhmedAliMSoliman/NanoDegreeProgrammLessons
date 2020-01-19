#include <cassert>
#include <iostream>
#include <string>
#include <vector>

class Wheel
{
public: 
    Wheel() : diameter(50) { }
    float diameter;
};

class Car
{
public: 
    Car() : wheels(4, Wheel()) { }
    std::vector<Wheel> wheels;

    // void PrintVector()
    // {
    //     for (int i = 0 ; i < wheels.size() ; i++)
    //     {
    //         std::cout << i << std::endl;
    //     }
    // }
};

int main()
{
    Car car;
    assert(car.wheels.size() > 1 );

    // car.PrintVector();
}