#include <iostream>
#include <thread>

void ThreadFunctiin()
{
    //Simulate work
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work -1- the thread function\n";

    //Simulate work
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work -2- the thread function\n";
}

int main()
{
    //create thred
    std::thread t(ThreadFunctiin);

    //do somthing in main
    std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
    std::cout << "Finished work -1- in main function\n";

    std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
    std::cout << "Finished work -2- in main function\n";

    //wait for thread to finish
    t.join();
}


// g++ example_3.cpp -pthread