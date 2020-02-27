#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> shared_pointer_1(new int);
    std::cout << "Shared pointer count = " << shared_pointer_1.use_count() << std::endl;


    {
        std::shared_ptr<int> shared_pointer_2 = shared_pointer_1;
        std::cout << "Shared pointer count = " << shared_pointer_1.use_count() << std::endl;
    }
    
    std::cout << "Shared pointer count = " << shared_pointer_1.use_count() << std::endl;
}