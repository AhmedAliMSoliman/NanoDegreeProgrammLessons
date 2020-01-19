#include <iostream>
#include <string>

class Animal 
{
public:
    void Talk()
    { std::cout << "Talk\n" ; }
};

class Human : public Animal
{
public: 
    void Talk(std::string content) const 
    {
        std::cout << content << "\n";
    }
};

class Baby : private Human
{
public: 
    void Cry()
    {
        Talk("Waaaaaaay");
    }
};

int main()
{
    Animal animal;
    animal.Talk();

    Human human;
    human.Talk("Hellow");

    Baby baby;
    baby.Cry();
    baby.Talk("way inherited from Human");
}