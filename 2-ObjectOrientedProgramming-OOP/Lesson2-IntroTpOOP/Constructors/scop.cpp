#include <cassert>
#include <iostream>

class Date 
{
public:
  int Day() { return day; }
  void Day(int d) { if (d >= 1 && d <= 31) day = d; }

  int Month() { return month; }
  void Month(int m) { if (m >= 1 && m <= 12) month = m; }

  int Year() { return year; }
  void Year(int y) { year = y; }

//Constructor
  Date(int a , int b , int c);

 private:
  int day{1};
  int month{1};
  int year{0};
};

Date::Date(int a , int b , int c)
  {
    //Stupid way , not using the invirants functions ! :
    //day = a; month = b ; year = c;

    //The correct way:
    Day(a); 
    Month(b); 
    Year(c);
  }

// Test in main
int main() 
{
  Date date(8, 29, 1981);

  std::cout << date.Day() << std::endl;
  
  // assert(date.Day() == 8);
  // assert(date.Month() == 29);
  // assert(date.Year() == 1981);
}