#include <iostream> 

using namespace std; 
 
void printHBD();
int printHBD(string);
int main()  
{  
	int myAge;
  	printHBD();
  	printHBD();
  	cout << "Happy Birthday dear user\n";
  	cout << printHBD("Erin");

  	myAge = printHBD("Erin");
}

void printHBD()
{
	cout << "Happy Birthday to you\n";
}

int printHBD(string name)
{
	int age;
	cout << "Happy Birthday " << name;
	cout << "\nEnter your age \n";
	cin >> age;
	return age;
}

