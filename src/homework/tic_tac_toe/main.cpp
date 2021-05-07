
#include "tic_tac_toe.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() 

{	
	Game TicTacToeGame;
	string player;
	int position;

	cout<<"Tic-Tac-Toe Game: Type X or O to choose your marker: ";
	cin>>player;

	TicTacToeGame.start_game(player);
	TicTacToeGame.display_board();

	do
	{
		cout<<"Player "<<TicTacToeGame.get_player()<<" Choose from spots 1-9 to place your marker on the board! \n Type '10' if you wish to close the board and end the game: ";
		cin>>position;
		TicTacToeGame.mark_board(position);
		TicTacToeGame.display_board();

	}
	while(position != 10);
	return 0;
} 