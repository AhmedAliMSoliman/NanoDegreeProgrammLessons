#include <iostream>
#include <thread>

int main()
{
    unsigned int nCoress = std::thread::hardware_concurrency(); 
    std::cout << "This machine supports concurrency with " << nCoress << std::endl;
}
