#include <iostream>
#include <chrono>
#include <thread>
// using namespace std;

void Run(int count)
{
    while (count --> 0)
    {
        std::cout << count << " CppNuts" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "Thresd Finshe" << std::endl;
    }
}

int main()
{
    std::thread t1(Run, 3);

    std::cout << "main() function!" << std::endl;
    
    t1.join();
    // t1.detach();

    // if (t1.joinable())
    // {
    //     t1.join();
    // }

    if (t1.joinable())
    {
        t1.detach();
    }
    std::cout << "End of main" << std::endl;
}