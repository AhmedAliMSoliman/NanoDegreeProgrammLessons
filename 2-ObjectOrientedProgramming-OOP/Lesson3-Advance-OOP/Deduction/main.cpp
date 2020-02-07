#include <vector>
#include <assert.h>

template <typename T>
T Max(T a , T b)
{
    return a > b ? a : b;
}

int main()
{
    //Removing <int> and <double> and let the compiler "deduce" the type !!
    assert(Max(2 , 4) == 4);
    assert(Max(-1.2 , -2.3) == -1.2);

    //What about vector !
    // Only when compling with c++ 17 // -std=c++17
    std::vector vec{1 , 2 , 3};
    assert(vec.size() == 3);
}