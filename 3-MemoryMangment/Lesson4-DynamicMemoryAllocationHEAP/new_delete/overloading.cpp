#include <iostream>
#include <stdlib.h>

class MyClass
{
    double _mymember;
public: 
    MyClass() { std::cout << "Constroctor is called !" ; }
    ~MyClass() { std::cout << "Deconstroctor is called !" ; }
    void* operator new (size_t size)
    {
        std::cout << "new: Allocating " << size << " bytes of memory" << std::endl;
        void* p = malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        std::cout << "delete: Memory is freed again " << std::endl;
        free(p);
    }
};

int main()
{
    MyClass *p = new MyClass();
    delete p;

    return 0;
}
