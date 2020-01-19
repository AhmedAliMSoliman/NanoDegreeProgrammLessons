#include <iostream> 
 #include <ctime>
 #include <cstdlib>
using namespace std; 
 

string FindPlayerName(string names[], bool playerTurn);
int askMove(bool player1Turn, int chipsInPile, string names[]);
void getUserNames (string players[]);

const float MAX_TURN = .5;
const int MAX_CHIPS = 100;

int main()  
{  
  bool player1Turn = true;  
 
  bool gameOver = false;    
  
  int chipsInPile = 0;  
  int chipsTaken = 0; 
  int maxPerTurn = 0;
  char userChoice;
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
  do
  {
	chipsInPile = (rand() % MAX_CHIPS) + 1;
	maxPerTurn = MAX_TURN * chipsInPile;
  	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
    gameOver = false;
    while (gameOver == false)
	{
     do
     {	
  		cout << FindPlayerName(playerNames, player1Turn) << " How many chips would  you like?\n";
		
    	cout << "You can take up to ";
		if (( maxPerTurn ) == 0)
		{
			cout << " 1\n";
		}
		else
		{
			cout << maxPerTurn << endl;
		}
    	cin >> chipsTaken;
     } while ((chipsTaken > maxPerTurn )  && (chipsInPile > 1));
     
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
  	cout << "Do you wish to play again? (Y/N)\n";
    cin >> userChoice;
    
   }while ((userChoice == 'y') || (userChoice == 'Y'));  
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

/////////////////////////////////////////////////////////////////////////////////
int askMove(bool player1Turn, int chipsInPile, string names[])
{
 
}

////////////////////////////////////////////////////////////////////////////////
void getUserNames (string players[])
{
	
}
