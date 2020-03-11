#include <iostream>
#include <thread>

void ThreadFunctiin()
{
    //Simulate work
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Finished work the thread function\n";
}

int main()
{
    //create thred
    std::thread t(ThreadFunctiin);

    //do somthing in main
    std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
    std::cout << "Finished work in main function\n";

    //wait for thread to finish
    t.join();
}


// g++ example_3.cpp -pthread