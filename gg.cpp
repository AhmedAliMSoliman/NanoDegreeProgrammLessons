#include <iostream>
#include <algorithm>

int AddNumber(int a , int b)
{
    return (abs(a - b))*-20;
}

int main()
{
    int x = 2;
    int y = 3;
    int z = AddNumber(x, y);
    std::cout << z << std::endl;
    int* ptr = &z;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
}