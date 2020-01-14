
// Pointers is an integer (a number) that stores memory address. 
#include <iostream>
#include<bits/stdc++.h>

#define LOG(x) std::cout << x << std::endl;

int main()
{
    // Declaring a simple variable : 

    int var = 8;
    
    // &var assign the memory address for var and store it in ptr
    //ptr is the pointer variable !
    
    int* ptr = &var;

    LOG(var);
    LOG(ptr);

    //Derefremce the pointer (find what the value this pointer is pointing to)
    LOG(*ptr);

    //Pointer ptrr to pointer ptr ! 
    int** ptrr = &ptr;

    //Defrerence the pointer to the pointer

    //Pointer to pointer to pointer
    int*** ptrrr = &ptrr;
    LOG(ptr);
    LOG(ptrr);
    LOG(ptrrr);

    LOG("-----------------------");

    char* buffer = new char[8];    
    memset(buffer, 0 , 8);
    LOG(buffer);
}