#include <cassert>
#include <vector>

class Matrix
{
public:
    Matrix(int rows , int coloums) : rows_(rows) , coloums_(coloums) , values_(rows * coloums) {}

    int& operator()(int rows , int coloums) 
    {
        return values_[rows*coloums_+coloums];
    }
    int operator()(int rows , int coloums) const 
    {
        return values_[rows*coloums_+coloums];
    }
private:
    int rows_;
    int coloums_;
    std::vector<int> values_;
};

int main()
{
    Matrix matrix(2,2);
    matrix(0,0) == 4;
    assert(matrix(0,0) == 4);
}