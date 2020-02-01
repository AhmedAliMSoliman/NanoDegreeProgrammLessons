#include <iostream>
#include <cassert>

class Animal
{
public:
    virtual std::string Talk() const = 0;
};

class Dog : Animal
{
public:
    virtual std::string Talk() const override;
};

std::string Dog::Talk() const { return "Woof"; }

int main()
{
    Dog dog;
    assert(dog.Talk() == "Woof");
}