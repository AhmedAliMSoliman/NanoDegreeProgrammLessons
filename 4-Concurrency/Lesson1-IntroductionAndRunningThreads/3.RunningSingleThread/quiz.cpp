#include <iostream>
#include <thread>

void ThreadFuncEVEN()
{
    //Simulate work
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    std::cout << "Even thread\n";
}

// Student
void ThreadFuncODD()
{
    //Simulate work
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    std::cout << "Odd thread\n";
}


int main()
{
    //Student 
    for (int i = 0 ; i < 6 ; i++)
    {
        if (i % 2 == 0)
        {
            std::thread t(ThreadFuncEVEN);
            t.detach();
        }
        else
        {
            std::thread t(ThreadFuncODD);
            t.detach();
        }
        
    }


    //ensurese that main does not return before the threads are finished
    std::this_thread::sleep_for(std::chrono::milliseconds(1)); //Simulate work

    std::cout << "End of main is reached" << std::endl;

    
}


// g++ example_3.cpp -pthread