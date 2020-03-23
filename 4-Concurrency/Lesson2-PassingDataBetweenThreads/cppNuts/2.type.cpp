#include <iostream>
#include <thread>

void Func(int x)
{
    while (x --> 0)
    {
        std::cout << x << std::endl;
    }
}

// // 1. Function pointer (fuction name without()! )
// // ==============================================
// int main()
// {
//     std::thread t1(Func, 10);
//     t1.join();

//     return 0;
// }

// 2. Laambda (Directly inject lasmbda function at thread creation time)
// ==============================================
// int main()
// {
//     // auto Func_Lambda = [](int x) {
//     //     while (x --> 0) {
//     //         std::cout << x << std::endl;
//     //     }
//     // };

//     std::thread t1([](int x) { while (x --> 0) {std::cout << x << std::endl; } } , 10);
//     t1.join();

//     return 0;
// }

// // 3. Functor (Function Object)
// // ==============================================

// class Base
// {
// public: 
//     void operator()(int x)
//     {
//         while (x --> 0)
//         {
//             std::cout << x << std::endl;
//         }
//     }    
// };

// int main()
// {
//     std::thread t((Base()) , 10);
//     t.join();
//     return 0;
// }


// // 4. Non-static member function 
// // ==============================================

// class Base
// {
// public: 
//     void run(int x)
//     {
//         while (x --> 0)
//         {
//             std::cout << x << std::endl;
//         }
//     }    
// };

// int main()
// {
//     Base b;
//     std::thread t(&Base::run , &b , 10);
//     t.join();
//     return 0;
// }

// 5. Static member function 
// ==========================
class Base
{
public: 
    static void run(int x)
    {
        while (x --> 0)
        {
            std::cout << x << std::endl;
        }
    }    
};

int main()
{
    Base b;
    std::thread t(&Base::run , 10);
    t.join();
    return 0;
}