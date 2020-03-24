#include <iostream>
#include <thread>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

typedef unsigned long long uul;

uul OddSum = 0;
uul EvenSum = 0;

void FinedEven(uul start , uul end)
{
    for (uul i = start ; i <= end ; ++i)
    {
        if ((i & 1) == 0)
        {
            EvenSum += i;
        }
    }
}

void FinedOdd(uul start , uul end)
{
    for (uul i = start ; i <= end ; ++i)
    {
        if ((i & 1) == 1)
        {
            OddSum += i;
        }
    }
}

int main()
{
    uul start = 0;
    uul end = 1900000000;

    auto startTime = high_resolution_clock::now();

    std::thread t1(FinedEven, start , end);
    std::thread t2(FinedOdd, start , end);

    t1.join();
    t2.join();

    // FinedOdd(start , end);
    // FinedEven(start , end);

    auto FinishTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(FinishTime - startTime);

    cout << "OddSum : " << OddSum << endl;
    cout << "EvenSum : " << EvenSum << endl;
    cout << duration.count()/1000000 << " sec" << endl;
}