#include <iostream>
#include <cassert>
#include <exception>

class Date {
 public:
    int Day() { return day; }
    void Day(int d) { if (d >= 1 && d <= 31) day = d; }

    int Month() { return month; }
    void Month(int m) { if(m >= 1 && m <= 12) month = m;
    else
    std::cout<<"ERROR" <<std::endl;}
    
    int Year() { return year; }
    void Year(int y) { year = y; }

 private:
  int day{1};
  int month;
  int year{0};
};

// Test in main
int main()
{
    
    Date date;
    std::cout<<date.Month()<<std::endl;
    date.Day(15);
    date.Month(15);
    date.Year(1988);
    
    //assert(date.Day() != -1);
    int x ,y,z;
    std::cout<<"enter first number"<< std::endl;
    std::cin>>x;
    std::cout<<"enter the second number"<<std::endl;
    std::cin>>y;

    
    try{
    z=x/y;
    
    }
    catch(...){
      std::cout<<"We got an error"<<std::endl;
    }
    std::cout<<"z="<<z;
    //assert(date.Year() == 1988);
    std::cout<<"Continued"<<std::endl;
    std::cout << date.Day() << "/" << date.Month() << "/" << date.Year() << "\n";

    
}