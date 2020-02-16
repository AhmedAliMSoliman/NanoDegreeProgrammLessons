#include <iostream>

void MyFunc()
{
    int k = 3; 
    std::cout << &k << std::endl;
}

int main()
{
    int i = 1; 
    std::cout << &i << std::endl;

    int j = 2; 
    std::cout << &j << std::endl;

    MyFunc();

    int l = 4; 
    std::cout << &l << std::endl;

    return 0; 
}


// ‭140737367490268‬
// ‭140737367490272‬
// ‭140737367490228‬
// ‭140737367490276‬