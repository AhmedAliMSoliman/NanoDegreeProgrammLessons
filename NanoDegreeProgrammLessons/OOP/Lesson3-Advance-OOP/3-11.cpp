#include <iostream>

//This just interface class !!!
class Animal 
{
public:
    virtual void Talk() const = 0;
};

class Human : public Animal
{
public:
    void Talk() const
    {
        std::cout << "Hello\n";
    }
};
class Babe : public Animal
{
public:
    void Talk() const
    {
        std::cout << "Way\n";
    }
};

int main()
{
    Human human;
    human.Talk();
    Babe babe;
    babe.Talk();
}