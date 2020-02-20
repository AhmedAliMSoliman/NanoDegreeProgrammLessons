#include <iostream>

class MYCLASS
{
private:
    int *_intvariable;
public: 
    MYCLASS()
    {
        _intvariable = (int*)malloc(sizeof(int));
    }
    ~MYCLASS()
    {
        free(_intvariable);
    }

    void PrintObjectMemAddress()
    {
        std::cout << "This object memory address: " << this << std::endl;
    }
    void PrintVariableAddress()
    {
        std::cout << "Variable address: " << _intvariable << std::endl;
    }
};

int main()
{
    MYCLASS firstObj;
    firstObj.PrintObjectMemAddress();
    firstObj.PrintVariableAddress();

    MYCLASS secondObj(firstObj);
    secondObj.PrintObjectMemAddress();
    secondObj.PrintVariableAddress();

}