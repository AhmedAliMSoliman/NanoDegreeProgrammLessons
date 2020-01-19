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
  
 
  //start the loop here to loop around if the user wishes to play again.
 
 
	chipsInPile = (rand() % MAX_CHIPS) + 1;  
	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
  	 gameOver = false;
    while (gameOver == false)
	{
	//start loop here to loop while the user has taken an invalid number of chips
	
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
      	//Add while statement here to test if the number of chips taken
      	// is greater than the maxPerTurn AND chips in pile is greater than 1
      	//Remember we are looping WHILE the entry by the user is invalid, so we
      	// want the opposite of what would make a valid turn.
    	
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
      //end loop here after prompting the user to play again. Needs another variable to 
	 //get input from the user to test if they wish to continue or not.
  return 0; 
} 

 
 

