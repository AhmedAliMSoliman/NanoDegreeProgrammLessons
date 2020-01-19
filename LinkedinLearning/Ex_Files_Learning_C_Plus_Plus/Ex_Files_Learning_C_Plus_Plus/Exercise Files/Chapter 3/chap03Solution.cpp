#include <iostream> 
 #include <ctime>
 #include <cstdlib>
using namespace std; 
 
const float MAX_TURN = .5;
const int MAX_CHIPS = 100;

int main()  
{  
  bool player1Turn = true;  
 
  bool gameOver = false;    
  
  int chipsInPile = 0;  
  int chipsTaken = 0; 
  int maxPerTurn = 0;
  string playerNames[2];
  char userChoice;
  //seed the random number generator
   srand(time(0));
  
  //ask the players for their names, then store in an array
  cout << "Player 1, please enter your name: ";
  cin >> playerNames[0];
  cout << "\nThanks and good luck!" << endl << "Player 2, please enter your name: ";
  cin >> playerNames[1];
  cout << "\nThanks and good luck! \n";
  
 do{
 
	chipsInPile = (rand() % MAX_CHIPS) + 1;  
	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
  	 gameOver = false;
    while (gameOver == false)
	{
	
	 do
     {
		maxPerTurn = (MAX_TURN * chipsInPile);
  		if (player1Turn)
  		{
  			cout << playerNames[0] << " How many chips would  you like?\n";
		}
		else
		{
			cout << playerNames[1] << " How many chips would  you like?\n";
		}
    	cout << "You can take up to ";
		if (maxPerTurn == 0)
		{
			cout << " 1\n";
		}
		else
		{
			cout << maxPerTurn << endl;
		}
    	cin >> chipsTaken;
    	
    	//commented out solution portion from Chapter 2
      	//chipsTaken = (rand() % maxPerTurn) + 1;
      
    	} while ((chipsTaken > maxPerTurn )  && (chipsInPile > 1));
    
	 chipsInPile = chipsInPile - chipsTaken;
	 cout << "There are " << chipsInPile << " left in the pile\n";
	 if (chipsInPile == 0)
	 {
	 	gameOver = true;
	 	if (player1Turn)
  		{
  			cout << playerNames[1] << ", congratulations you won\n";
		}
		else
		{
			cout << playerNames[0] << ", congratulations you won\n";
		}
	 	
	 }
	 else
	 {
	 	player1Turn = !player1Turn;
	 }
	 
	} 
    cout << "Do you wish to play again? (Y/N)\n";
    cin >> userChoice;
    
   }while ((userChoice == 'y') || (userChoice == 'Y'));  
  return 0; 
} 

 
 

