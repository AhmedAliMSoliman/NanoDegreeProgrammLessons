#include <iostream>
void myFunction(int &&val)
{
    std::cout << "val = " << val << std::endl;
}
int main()
{
    int i = 42;
    myFunction(42);
    return 0; 
}