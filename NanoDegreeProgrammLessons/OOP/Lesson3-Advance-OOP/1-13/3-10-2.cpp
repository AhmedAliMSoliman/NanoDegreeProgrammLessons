#include <iostream>
#include <string>

std::string operator+(std::string s , int x)
{
    std::string result = s + (std::string)x;
    //result result;
}
int main()
{
    std::string ahmed = "AHMED";
    std::string ali = "ALI";
    int age = 30;
    std::string ahmedali;
    //ahmedali = ahmed + " " + ali + age;

    std::cout << ahmed << std::endl;
    std::cout << ali << std::endl;
    std::cout << ahmedali << std::endl;
}