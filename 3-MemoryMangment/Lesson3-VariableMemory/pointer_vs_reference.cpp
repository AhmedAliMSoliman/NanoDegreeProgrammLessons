// Pointers vs. References
// As we have seen in the examples above, the use of pointers and references to directly manipulate function 
// arguments in a memory-effective way is very similar. Let us compare the two methods in the code on the right.

// As can be seen, pointer and reference are both implemented by using a memory address. In the case of AddFour
// the caller does not even realize that val might be modified while with AddSix, the reference to val has to 
//be explicitly written by using &.

// If passing by value needs to be avoided, both pointers and references are a way to achieve this. 
//The following selection of properties contrasts the two methods so it will be easier to decide which to 
//use from the perspective of the use-case at hand:

// Pointers can be declared without initialization. This means we can pass an uninitialized pointer to a function who then internally performs the initialization for us.

// Pointers can be reassigned to another memory block on the heap.

// References are usually easier to use (depending on the expertise level of the programmer). Sometimes however, if a third-party function is used without properly looking at the parameter definition, it might go unnoticed that a value has been modified.

#include <iostream>

void AddFour(int &val)
{
    val += 4;
}

void AddSix(int *val)
{
    *val += 6; 
}

int main()
{
    int val = 0;
    AddFour(val);
    AddSix(&val);

    std::cout << "val = " << val << std::endl;
 
    return 0;
}