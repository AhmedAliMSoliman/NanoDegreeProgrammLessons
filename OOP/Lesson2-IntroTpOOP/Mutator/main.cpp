//Exercise: Car Class
//In this lab you will create a setter method that receives data as an argument and converts it to a
// different type. Specifically, you will receive a string as input and convert it to a character array.

//Create a class called Car.
//Create 3 member variables: horsepower, weight and brand. The brand attribute must be a character array.
//Create accessor and mutator functions for all member data. The mutator function for brand must accept a C++ string
// as a parameter and convert that string into a C-style string (a character array ending in null character) to set the value of brand.
//The accessor function for the brand must return a string, so in this function you first will need to convert brand to std::string, and then return it.

#include <string>
#include <cstring>
#include <iostream>

class Car {
    // TODO: Declare private attributes
    private:
    int horseEPower;
    int weight;
    std::string brand;
        
    // TODO: Declare getter and setter for brand
    public:
    void SetHorsePower(int x); 
    void SetWeight(int x);
    void SetBrand(char*);

    int GetHorseePower();
    int GetWeight();
    std::string GetBrand();
};

// Define setters
// Define getters

// void Car::SetHorsePower(int x) {}
// void Car::SetWeight(int x) {}
void Car::SetBrand(char* string) 
{ brand = string ; }
// int Car::GetHorseePower() {}
// int Car::GetWeight() {}
std::string Car::GetBrand() 
{ 
    return brand;
}

// Test in main()
int main() 
{
    Car car;
    char brandi[] = "Peugeot";
    car.SetBrand(brandi);
    std::cout << car.GetBrand() << "\n";   
}