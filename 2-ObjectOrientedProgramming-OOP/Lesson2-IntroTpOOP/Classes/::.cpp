#include <iostream>
#include <cassert>

class Date {
 public:
    int Day();
    void Day(int d) ;
    int Month();
    void Month(int d) ;
    int Year();
    void Year(int d) ;

 private:
  int day{1};
  int month{1};
  int year{0};
};


int Date::Day() { return Date::day; }
void Date::Day(int d) { if (d >= 1 && d <= 31) Date::day = d; }

int Date::Month() { return Date::month; }
void Date::Month(int m) { if(m >= 1 && m <= 12) Date::month = m; }
    
int Date::Year() { return Date::year; }
void Date::Year(int y) { Date::year = y; }

// Test in main
int main()
{
    Date date;
    date.Day(12);
    date.Month(6);
    date.Year(2000);
    
    assert(date.Day() != -1);
    assert(date.Month() != 14);
    assert(date.Year() == 2000);

    std::cout << date.Day() << "/" << date.Month() << "/" << date.Year() << "\n";
}