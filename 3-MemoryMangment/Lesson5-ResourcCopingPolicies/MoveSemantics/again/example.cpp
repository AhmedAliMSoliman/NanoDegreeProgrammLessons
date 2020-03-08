#include <stdlib.h>
#include <iostream>

class MyMovableClass
{
private:
    int _size;
    int* _data;

public:
    // ctr
    MyMovableClass(size_t size)
    {
        _size = size;
        _data = new int[_size];
        std::cout << "CREATING instance of the class at " << this << " allocated with size = " << _size * sizeof(int) << " bytes " << std::endl;
    }
    // [1] dstr
    ~MyMovableClass()
    {
        std::cout << "DELETING instance of the class at " << this << std::endl;
        delete _data;
    }
    // [2] copy str 
    MyMovableClass(const MyMovableClass &source)
    {
        _size = source._size;
        _data = new int[_size];
        *_data = *source._data;
        std::cout << "COPYING content of instant " << &source << " to instance " << this << std::endl;
    }
    // [3] Copy assignment operator 
    MyMovableClass &operator=(const MyMovableClass &source)
    {
        std::cout << "ASSINGING content of instant " << &source << " to instance " << this << std::endl;
        if (this == &source)
        {
            return *this;
        }
        delete[] _data;
        _data = new int[source._size];
        *_data = *source._data;
        _size = source._size;
        return *this;
    }
    // [4] Move ctr 
    
};

int main()
{   
    MyMovableClass obj1(10);        //Regual conrructor 
    MyMovableClass obj2(obj1);      //Copy conrtuctor 
    obj2 = obj1;

    return 0;    
}