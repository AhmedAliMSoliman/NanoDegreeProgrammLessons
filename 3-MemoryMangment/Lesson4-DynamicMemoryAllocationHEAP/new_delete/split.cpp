#include <iostream>
#include <stdlib.h>

class MyClass
{
    int _mymember;
public: 
    MyClass() ;
    ~MyClass() ;
    // void* operator new (size_t size) ;
    // void operator delete(void *p) ;
};

MyClass::MyClass() { std::cout << "Constroctor is called !" ; }
MyClass::~MyClass() { std::cout << "Deconstroctor is called !" ; }
    void* MyClass::operator new (size_t size)
    {
        std::cout << "new: Allocating " << size << " bytes of memory" << std::endl;
        void* p = malloc(size);
        return p;
    }
    void MyClass::operator delete(void *p)
    {
        std::cout << "delete: Memory is freed again " << std::endl;
        free(p);
    }

int main()
{
    MyClass *p = new MyClass();
    delete p;

    return 0;
}
