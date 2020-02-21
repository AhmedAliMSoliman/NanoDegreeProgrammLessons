#include <iostream>

void myFunction(int &val)
{
    ++val;
}

void myFunction2(int val)
{
    ++val;
}

int main()
{
    int i = 1;

    std::cout << "i = " << i << std::endl;

    myFunction(i);
    
    std::cout << "i = " << i << std::endl;
}