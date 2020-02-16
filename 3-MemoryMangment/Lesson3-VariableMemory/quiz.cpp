
//Your task here is to create a function AddFive that modifies the int input variable by adding 5 and modifies
// the bool input variable to be true. In the code to the right you will find the function call in main().


#include <iostream>

int AddFive(int &val, bool &success)
{
    val += 5;
    success = true;
}

int main()
{
    int val = 0;
    bool success = false;
    AddFive(val, success);
    val += 2;

    std::cout << "val = " << val << ", success = " << success << std::endl;
 
    return 0;
}