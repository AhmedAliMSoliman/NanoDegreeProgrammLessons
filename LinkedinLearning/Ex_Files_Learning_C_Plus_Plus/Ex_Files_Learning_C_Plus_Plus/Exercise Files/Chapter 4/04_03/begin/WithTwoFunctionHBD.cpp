#include <iostream> 

using namespace std; 
 
void printHBD();
void printHBD(string);
int main()  
{  
  printHBD();
  printHBD();
  cout << "Happy Birthday dear user\n";
  printHBD("Erin");	
}

void printHBD()
{
	cout << "Happy Birthday to you\n"; 	
}
void printHBD(string name)
{
	cout << "Happy Birthday " << name;
	
}
