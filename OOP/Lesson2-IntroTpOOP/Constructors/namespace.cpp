#include <iostream>

namespace English 
{
    void Hello() { std::cout << "Hello, World!\n"; }
}  
// namespace English

namespace Spanish 
{
    void Hello() { std::cout << "Hola, Mundo!\n"; }
}  
// namespace Spanish

namespace Arabic
{
    void Hello() { std::cout << "هـــــلا\n"; }
} 
// namespace Arabic


int main() 
{
  English::Hello();
  Spanish::Hello();
  Arabic::Hello();
}