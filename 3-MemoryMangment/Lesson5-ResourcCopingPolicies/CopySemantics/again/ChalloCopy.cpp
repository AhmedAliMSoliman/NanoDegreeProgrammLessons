#include <iostream>

class Copy
{
private:
    int* _var;

public:
    Copy()
    {
        _var = (int*)malloc(sizeof(int));
    }
    ~Copy() { free(_var); }

    void PrintObjectAddress()
    {
        std::cout << this << std::endl;
    }
    void PrintVariableAddress()
    {
        std::cout << _var << std::endl;
    }
};

int main()
{
    Copy copy1;
    Copy copy2(copy1);
    Copy copy3 = copy2;

    copy1.PrintObjectAddress();
    copy1.PrintVariableAddress();

    copy3.PrintObjectAddress();
    copy3.PrintVariableAddress();

}



