#include <memory>

void RawPointer()
{
    int *raw_pointer = new int;
    *raw_pointer = 1;
    delete raw_pointer;
}

void UniquePointer()
{
    std::unique_ptr<int> unique(new int);
    *unique = 2;

    //delete is not neccessary 
}