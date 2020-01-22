#include <string>
#include <cassert>

class Animal
{
public:
    virtual std::string Talk() const = 0;
};

class Cat : public Animal
{
public: 
    std::string Talk() const;    
};

std::string Cat::Talk() const 
{
    return "MEOW";
}

class Lion : public Cat 
{
public: 
    std::string Talk() const;
};

std::string Lion::Talk() const 
{
    return "ROAR";
}

int main()
{
    Cat cat;
    assert(cat.Talk() == "MEOW");
    Lion lion;
    assert(lion.Talk() == "ROAR");
    
    return EXIT_SUCCESS;
}