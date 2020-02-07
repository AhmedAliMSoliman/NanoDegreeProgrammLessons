#include <fstream>
#include <iostream>
#include <string>
#include <vector>
// using std::cout;
// using std::string;
// using std::ifstream;
// using std::vector;



void ReadBoardFile(std::string path) 
{
	std::ifstream myfile(path);
	if (myfile) 
	{
		std::string line;
		while (getline(myfile, line)) 
		{
			std::cout << line << "\n";
		}
	}
}

void PrintBoard(std::vector<std::vector<int>> board)
{
	for (int i = 0 ; i < board.size() ; i++)
	{
		for (int j = 0 ; j < board[i].size() ; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << "\n";
	}
}

int main()
{
	ReadBoardFile("1.board");
}