#include <iostream> 
 #include <ctime>
 #include <cstdlib>
using namespace std; 
 

int main()  
{  
 
  int dice = 0;
  
   //seed the random number generator
   srand(time(0));
  
	dice = (rand() % 6) + 1;
  	cout << "You rolled a " << dice << endl;;
    switch (dice)
    {
    	case 1: //if (dice == 1)
    		cout << "One \n";
    		break;
    	case 2:
    		cout << "Two \n";
    		break;
    	case 3:
    		cout << "Three \n";
    		break;
    	case 4:
    		cout << "Four \n";
    		break;
    	case 5:
    		cout << "Five \n";
    		break;
    	case 6:
    		cout << "Six \n";
    		break;
    	default:
    		cout << "Invalid \n";
    		break;
    	
	}
  	
  
  return 0; 
} 

 
 

