#include <iostream>
#include <string>
using std::string;
using std::cout;

class Car 
{
public: 
    std::string color;
    int number;
    int distance = 0;

    Car (std::string c , int n) : color(c) , number(n)  {}

public: 
    void PrintCarData();
    void IncrementDistance() ;
};