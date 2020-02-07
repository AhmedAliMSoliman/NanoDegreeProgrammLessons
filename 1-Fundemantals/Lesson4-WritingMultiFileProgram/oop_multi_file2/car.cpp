#include <iostream>
#include <string>
using std::string;
using std::cout;


    void Car::PrintCarData()
    {
        cout << "SUCCESSESS ----- The distance that the " << color << " car " << number << " has traveled is: " << distance << "\n";
    }

    void Car::IncrementDistance() 
    {
        distance++;
    }