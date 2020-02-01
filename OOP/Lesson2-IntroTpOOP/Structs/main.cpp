// Include iostream for output
#include <cassert>
#include <iostream>

// Define a simple structure
struct Date
{
private: 
    int day;

public:
    int GetDay()
    {
        return day;
    }

    void SetDay(int d)
    {
        if (d > 0) { day = d; }
    }

    int month{99};
    int year{9999};
};

// Define a main function to instantiate and test 
int main()
{
    Date date_bob;
    
    // TODO: Initialize date to August 29, 1981
    date_bob.SetDay(33);
    date_bob.month = 8;
    date_bob.year = 1981;
    
    // TEST
    // assert(date_bob.GetDay == 33);
    // assert(date_bob.month == 8);
    // assert(date_bob.year == 1981);

    // Print the data in the structure
    std::cout << "Bob birthday: " << date_bob.GetDay() << "/" << date_bob.month << "/" << date_bob.year << "\n";
}