#include <iostream>

int main()
{
    int i = 1; 
    int j = 2; 
    int k = i + j; 
    int &&l = i + j; 

    std::cout << "k = " << k << ", l = " << l << std::endl;


    std::cout << &i << std::endl;
    std::cout << &j << std::endl;
    std::cout << &k << std::endl;
    std::cout << &l << std::endl;

    return 0; 
}