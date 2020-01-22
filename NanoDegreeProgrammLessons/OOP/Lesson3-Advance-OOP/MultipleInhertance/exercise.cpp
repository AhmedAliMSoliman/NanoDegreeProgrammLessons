// // Instructions
// // Review class Dog, which inherits from both Animal and Pet.
// // Declare a class Cat, with a member attribute color, that also inherits from both Animal and Pet.
// // Instantiate an object of class Cat.
// // Configure that object to pass the tests in main().

// Exercise
// In the code below, the Dog class inherits from both Animal and Pet. Once you have examined the code below, add a 
// Cat class that also inherits from Animal and Pet.
// The Cat class should have the attribute string color. Design the Cat class to pass the tests in the main() function.

#include <iostream>
#include <string>
#include <assert.h>

class Animal {
public:
    double age;
};

class Pet {
public:
    std::string name;
};

// Dog derives from *both* Animal and Pet
class Dog : public Animal, public Pet {
public:
    std::string breed;
};

class Cat : public Animal, public Pet {
public:
    //Cat(std::string color, int age, std::string name) : color(color) , Animal::age(age) , Pet::name(name)  {}
    std::string color;
};

int main()
{
    Cat cat;
    cat.color = "balck";
    cat.age = 10;
    cat.name = "Max";
    
    assert(cat.color == "black");
    assert(cat.age == 10);
    assert(cat.name == "Max");
}