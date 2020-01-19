#include <iostream> 
 #include <ctime>
 #include <cstdlib>
using namespace std; 
 
string FindPlayerName(string names[], bool playerTurn);

const float MAX_TURN = .5;
const int MAX_CHIPS = 100;

int main()  
{  
  bool player1Turn = true;  
 
  bool gameOver = false;    
  
  int chipsInPile = 0;  
  int chipsTaken = 0; 

  string playerNames[2];
  
  //seed the random number generator
   srand(time(0));
  
  //ask the players for their names, then store in an array
  cout << "Player 1, please enter your name: ";
  cin >> playerNames[0];
  cout << "\nThanks and good luck!" << endl << "Player 2, please enter your name: ";
  cin >> playerNames[1];
  cout << "\nThanks and good luck! \n";
  
  //start the game with a random number of chips in the pile
  
	chipsInPile = (rand() % MAX_CHIPS) + 1;
  	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
  
    while (gameOver == false)
	{
	
     do
     {
  		
  		cout << FindPlayerName(playerNames, player1Turn) << " How many chips would  you like?\n";
		
    	cout << "You can take up to ";
		if (static_cast<int>(MAX_TURN * chipsInPile) == 0)
		{
			cout << " 1\n";
		}
		else
		{
			cout << static_cast<int>(MAX_TURN * chipsInPile) << endl;
		}
    	cin >> chipsTaken;
     } while (chipsTaken > (static_cast<int>(MAX_TURN * chipsInPile) )  && (chipsInPile > 1));
     
	 chipsInPile = chipsInPile - chipsTaken;
	 cout << "There are " << chipsInPile << " left in the pile\n";
	 if (chipsInPile == 0)
	 {
	 	gameOver = true;
	    cout << FindPlayerName(playerNames, player1Turn) << ", congratulations you won\n";
	 	
	 }
	 else
	 {
	 	player1Turn = !player1Turn;
	 }
 }
  
  return 0; 
} 
////////////////////////////////////////////////////////////////////////////////////
//
string FindPlayerName(string names[], bool playerTurn)
{
	if (playerTurn == true)
		return names[0];
	else
		return names[1];
}
 
 

