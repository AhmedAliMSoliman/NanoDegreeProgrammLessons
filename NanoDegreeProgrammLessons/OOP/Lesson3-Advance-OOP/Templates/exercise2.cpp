// Exercise: Comparison Operator
// This exercise demonstrates how a simple comparison between two variables of unknown type can work using templates. 
// In this case, by defining a template that performs a comparison using the > operator, you can compare two variables 
// of any type (both variables must be of the same type, though) as long as the operator > is defined for that type.

// Check out the notebook below to see how that works.

#include <assert.h>

// TODO: Declare a generic, templatized function Max()
template <typename T>
T Max(T a , T b)
{
    return a > b ? a : b;
}

int main() 
{ 
  assert(Max(10, 50) == 50);
  assert(Max(5.7, 1.436246) == 5.7);
}