#include <cassert>

class Heart
{
private: 
    int rate_{80};
    friend class Human;
};
 
class Human 
{
public: 
    Heart heart;
    void Exercise() { heart.rate_ = 150; }
    int HeartRate() { return heart.rate_; }
};

int main()
{
    Human human;
    assert(human.HeartRate() == 80);
    human.Exercise();
    assert(human.HeartRate() == 150);
}