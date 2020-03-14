#include <iostream>
#include <thread>

void func()
{
    std::cout << "Hello concurrent world from main! Thread id = " << std::this_thread::get_id() << std::endl;
}

void func2()
{
    std::cout << std::this_thread::get_id() << std::endl;
}

int main()
{
    std::cout << "Hello concurrent world from main! Thread id = " << std::this_thread::get_id() << std::endl;
    func();
    func2();
}
