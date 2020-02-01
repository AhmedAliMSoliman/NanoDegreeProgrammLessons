#include <cassert>
#include <iostream>

struct Date {
public: 
    //Date(){}
    Date(int a , int b , int c)
    {
        day = a;
        month = b;
        year = c;
    }
private: 
    int day{00};
    int month{00};
    int year{00};
  
public:
    //Accdssor - getter - get function - return a value 
    int Day() 
    {
        return day;
    }
    //Mutator - setter - set function - set value and return void 
    void Day(int x) 
    {
        if (x > 0 )
        day = x; 
    }
    
    //Getter and Setter for the month 
    int GetMonth()
    {
        return month;
    }
    void SetMonth(int x)
    {
        month = x;
    }

    //Getter and Setter for the year 
    int GetYear()
    {
        return year;
    }
    void SetYear(int x)
    {
        year = x;
    }
};

int main() 
{
    Date date;
    date.Day(3);
    date.SetMonth(3);
    date.SetYear(1988);

  Date ahmed(2,3,1990);
  Date abbas(2,4,2010);

//   assert(date.Day() == 7);
//   assert(date.GetMonth() == 1);
//   assert(date.GetYear() == 2000);

  std::cout << date.Day() << "/" << date.GetMonth() << "/" << date.GetYear() << "\n";
  std::cout << ahmed.Day() << "/" << ahmed.GetMonth() << "/" << ahmed.GetYear() << "\n";
  std::cout << abbas.Day() << "/" << abbas.GetMonth() << "/" << abbas.GetYear() << "\n";
}