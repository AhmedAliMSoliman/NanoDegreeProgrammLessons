#include <vector>
#include <thread>

int main()
{
    std::vector<std::thread> threads;

    // Srtat up n threads
    int nThreads = 4;
    for (int i = 0 ; i < nThreads ; ++i)
    {
        threads.emplace_back(std::thread([]() 
        {
            while (true);
        }));
    }

    // wait for threads to finish before leafing main
    std::for_each(threads.begin(), threads.end(), [] (std::thread &t) 
        {
        t.join();
        }
    );
}
