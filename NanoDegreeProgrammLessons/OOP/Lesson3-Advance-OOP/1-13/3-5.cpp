// Inheritance
// In this exercise you will practice building an inheritance hierarchy.

// Instructions
// Define a class Animal.
// Define 3 member variables: color, name, age.
// Define a derived class Snake that inherits from the base class Animal.
// Create a member variable length for the Snake class.
// Create a derived class Cat that inherits from the base class Animal.
// Create a member variable height for the Cat class.
// Create MakeSound() member functions for each of the derived classes.
// In the main() function instantiate Snake and Cat objects. Initialize both their unique and derived attributes. Program them to make a sound.

#include <iostream>
#include <string>
// Define base class Animal
class Animal
{
public: 
    std::string color = "Default color";
    std::string name = "Default name";
    int age = 0;
    void Print() { std::cout << "[NAME] " << name << " , [COLOR] " << color << " [AGE] " << age << std::endl; }

};

// Declare derived class Snake
class Snake : protected Animal
{
public: 
    int length = 0;
    void PrintingSnake() { Print(); }
    //void MakeSound(std::string sound) { std::cout << sound << std::endl; }

};

// Declare derived class Cat
class Cat : private Snake
{
public: 
    int height = 0;
    void PrintingCat() { Print(); }
    //void MakeSound(std::string sound) { std::cout << sound << std::endl; }

};

// Test in main()
int main()
{
    Animal animal;
    animal.Print();

    Snake snake;
    // snake.name = "Kobra";
    // snake.color = "brown";
    // snake.age = 299;
    snake.PrintingSnake();

    //snake.MakeSound("sssss");

    Cat cat;
    // cat.name = "Besa";
    // cat.color = "Yellow";
    // cat.age = 34;
    cat.PrintingCat();

    // cat.MakeSound("bbsss");
}