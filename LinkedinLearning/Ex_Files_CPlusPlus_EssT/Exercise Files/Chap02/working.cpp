// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
	int x = 7;
	int y = 42; 
	int* ip = x; 

	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);
	
    return 0;
}
