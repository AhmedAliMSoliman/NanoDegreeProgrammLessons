#include <iostream> 
 #include <ctime>
 #include <cstdlib>
using namespace std; 
 

int main()  
{  
  for (int h = 0; h < 24; h++)
  {
  	for (int m = 0; m < 60; m++)
  	{
  		for (int s = 0; s < 60; s++)
  		{
  			cout << h << ":" << m << ":" << s << "\n";
    	}
    }
  }
}
