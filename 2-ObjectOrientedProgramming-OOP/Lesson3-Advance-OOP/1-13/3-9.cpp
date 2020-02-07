#include <cassert>
#include <string>

class Water {};
class Alkohol {};
class Coffee {};
class Soda {};

class Human
{
public:
    std::string condition{"happy"};

    void Drink(Water water) { condition = "hydrated"; }
    void Drink(Alkohol alkohol) { condition = "imparied"; }
    void Drink(Coffee coffee) { condition = "alert"; }
    void Drink(Soda soda) { condition = "cavities"; }
};

int main()
{
    Human david;
    assert(david.condition == "happy");
    david.Drink(Water());
    assert(david.condition == "hydrated");
    david.Drink(Alkohol());
    assert(david.condition == "imparied");
    david.Drink(Coffee());
    assert(david.condition == "alert");
    david.Drink(Soda());
    assert(david.condition == "cavities");    
}