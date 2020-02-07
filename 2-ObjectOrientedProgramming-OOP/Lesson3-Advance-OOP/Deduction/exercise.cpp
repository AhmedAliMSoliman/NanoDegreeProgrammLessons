// Instructions
// Use a template to overload the # operator.
// Confirm that the tests pass.

#include <assert.h>

// TODO: Declare a generic, templatized average function

template <typename T>
T average (T a , T b)
{
    return (a + b) / 2;
}

int main() 
{
    assert(average(2.0,5.0) == 3.5); 
    assert(average(2,4) == 3);
}