
#include <iostream>

class Animal
{
public:
    void Talking() const;
};

class Human : public Animal
{
public: 
    void Talking() const;
};

void Animal::Talking() const { std::cout << "Animal Talking" << std::endl; } 
void Human::Talking() const { std::cout << "Human Talking" << std::endl; } 

int main()
{
    Animal animal;
    animal.Talking();

    Human human;
    human.Talking();
}