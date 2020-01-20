#include <iostream>
#include <string>

struct VectorXY
{
    float x,y;
    VectorXY(float x , float y) : x(x) , y(y) {}

    #include "WithOutOperatorOverloading.cpp"
    #include "WithOperatorOverloading.cpp"
};

int main()
{
    VectorXY position(4.0f , 4.0f);
    VectorXY speed(5.0f , 1.5f);
    VectorXY powerup(2.0f , 2.0f);

    VectorXY WithOutOperatorOverloadingResult(position.Add(speed.Multiplay(powerup)));
    VectorXY WithOperatorOverloadingResult = position + speed * powerup;

    std::cout << WithOutOperatorOverloadingResult.x << std::endl;
    std::cout << WithOutOperatorOverloadingResult.y << std::endl;

    std::cout << WithOperatorOverloadingResult.x << std::endl;
    std::cout << WithOperatorOverloadingResult.y << std::endl;
}