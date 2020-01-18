#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

enum class State {kEmpty, kObstacle};

std::vector<State> ParseLine(std::string line) 
{
    std::istringstream sline(line);
    int n;
    char c;
    std::vector<State> row;
    while (sline >> n >> c && c == ',') 
    {
      if (n == 0) 
      {
        row.push_back(State::kEmpty);
      } else 
      {
        row.push_back(State::kObstacle);
      }
    }
    return row;
}

std::vector<std::vector<State>> ReadBoardFile(std::string path) 
{
  std::ifstream myfile (path);
  std::vector<std::vector<State>> board{};
  if (myfile) 
  {
    std::string line;
    while (getline(myfile, line)) 
    {
      std::vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}

std::string CellString(State cell) 
{
  switch(cell) 
  {
    case State::kObstacle: return "⛰️   ";
    default: return "0   "; 
  }
}

void PrintBoard(const std::vector<std::vector<State>> board) 
{
  for (int i = 0; i < board.size(); i++) 
  {
    for (int j = 0; j < board[i].size(); j++) 
    {
      std::cout << CellString(board[i][j]);
    }
    std::cout << "\n";
  }
}

int main() 
{
  auto board = ReadBoardFile("1.board");
  PrintBoard(board);
}