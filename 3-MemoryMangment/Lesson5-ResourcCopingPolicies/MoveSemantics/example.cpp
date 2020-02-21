#include <iostream>

class MyMovableClass
{
private:
    int _size;
    int *_data;
public:
    MyMovableClass(size_t size) // Cosntructor
    {
        _size = size;
        _data = new int[_size];
        std::cout << "CREATING instance of MyMovableClass at: " << this << " allocated with size = " << _size * sizeof(int) << std::endl;
    }
    ~MyMovableClass()           // 1: Destructor 
    {
        std::cout << "DELETEING instance of MyMovableClass at " << this << std::endl;
    }
    MyMovableClass(const MyMovableClass &source)   //2: Copy Constructor
    {
        _size = source._size;
        _data = new int[_size];
        *_data = *source._data;
        std::cout << "COPING content of instance " << &source << " to instance " << this << std::endl;
    }
    MyMovableClass &operator=(const MyMovableClass &source)   //3: Assignment Operator
    {
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
};

int main()
{
    MyMovableClass obj1(10);        //Regular Constructor 
    MyMovableClass obj2(obj1);      // Copy Constructor
    obj2 = obj2;                    // Copy Assigment Operator 
}