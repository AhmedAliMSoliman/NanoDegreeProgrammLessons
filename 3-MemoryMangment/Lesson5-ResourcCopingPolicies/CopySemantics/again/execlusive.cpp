#include <iostream>

class Execlusve
{
private:
    int* _var;
public:
    Execlusve()
    {
        _var = (int*)malloc(sizeof(int));
        std::cout << "Memory allacted!" << std::endl;
    }
    ~Execlusve()
    {
        if (_var != nullptr)
        {
            free(_var);
            std::cout << "Memory Deallacted!" << std::endl;
        }
    }

    Execlusve(Execlusve &arguu)
    {
        _var = arguu._var;
        arguu._var = nullptr;
    }
   
    Execlusve &operator= (Execlusve &arguu)
    {
        _var = arguu._var;
        arguu._var = nullptr;
        return *this;
    }
};

int main()
{
    Execlusve exe1;
    Execlusve exe2(exe1);
}