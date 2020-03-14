#include <iostream>
#include <thread>

class Vehicle
{
public:
    void operator()()
    {
        std::cout << "Vechicle object has been created \n" << std::endl;
    }
};

int main()
{
    //Create thread
    std::thread t(Vehicle());   // C++'s most vexing parse 

    //do somththing in main!
    std::cout << "Finshed do something in main\n";

    //wait for thread to finish
    t.join();
}
