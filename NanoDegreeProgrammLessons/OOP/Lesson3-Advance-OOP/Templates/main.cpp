#include <iostream>
#include <assert.h>

template <typename T>
T Max(T a , T b)
{
    return a > b ? a : b;
}


int main()
{
    assert(Max<int>(2 , 4) == 4);
    assert(Max<double>(-1.2 , -2.3) == -1.2);
    assert(Max<std::string>("Ahmed" , "Mohammed") == "Mohammed");
    assert(Max<char>('a' , 'b') == 'b');
}