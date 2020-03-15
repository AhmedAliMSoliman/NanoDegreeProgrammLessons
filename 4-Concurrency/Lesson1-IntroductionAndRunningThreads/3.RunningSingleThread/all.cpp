#include <iostream>
#include <thread>

void ThreadFunction()
{
    //Stimulate work! 
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << std::this_thread::get_id() << std::endl;
    std::cout << "Finish work in thread function! " << std::endl;
}

int main()
{

    //Print the thread ID
    std::cout << "Concurrent wrold from main!, this thread ID is: (" << std::this_thread::get_id() << ") " << std::endl;

    //Retrieve the number of avaiable CPU
    unsigned int nCores = std::thread::hardware_concurrency();
    std::cout << "This machine supports concurrency with (" << nCores << ") cores! " << std::endl;

    //Create a thread object (t)
    std::thread t(ThreadFunction);

    //Do somththing in main:
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Finish work in thread main! " << std::endl;

    //wait for thread to finish
    t.join();

}
