// Instructions
// Overloading can happen outside of an object-oriented context, too. In this exercise, you will practice overloading a normal 
// function that is not a class member.

// Create a function hello() that outputs, "Hello, World!"
// Create a class Human.
// Overload hello() by creating a function hello(Human human). This function should output, "Hello, Human!"
// Create 2 more classes and use those classes to further overload the hello() function.
#include <iostream>

class Human {};
class Animal {};
class Bird {};
// TODO: Write hello() function
void Hello() { std::cout << "Hello, World!" << std::endl; }

// TODO: Overload hello() three times
void Hello(Human human) { std::cout << "Hello, Human!" << std::endl; }
void Hello(Animal animal) { std::cout << "Hello, Animal!" << std::endl; }
void Hello(Bird bird) { std::cout << "Hello, Bird!" << std::endl; }

void Inst()
{
    Bird bird;
    Hello(bird);
}
// TODO: Call hello() from main()
int main()
{
    Hello();
    // Instaiate and pass object to function !
    Human human;
    Hello(human);

    Hello(Animal());

    Inst();
    
}