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

    Car (std::string c , int n)
    {
        color = c;
        number = n;
    }

    void PrintCarData()
    {
        cout << "The distance that the " << color << " car " << number << " has traveled is: " << distance << "\n";
    }

    void IncrementDistance() 
    {
        distance++;
    }
};

int main() 
{
    Car car_1("green" , 1);
    Car car_2("red", 2);
    Car car_3 ("blue", 3);

    car_1.IncrementDistance();

    car_1.PrintCarData();
    car_2.PrintCarData();
    car_3.PrintCarData();
}