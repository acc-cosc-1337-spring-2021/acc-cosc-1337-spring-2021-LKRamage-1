
#include "tic_tac_toe.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() 

{	
	Game game;
	string player;
	int position;

	cout<<"Ready to play tic tac toe? To start, type either X or O to claim your marker: ";
	cin>>player;

	game.start_game(player);
	game.display_board();

	do
	{
		cout<<"Player "<<game.get_player()<<" select a spot 1-9 to place your marker. \nType '10' if you'd like to close the board: ";
		cin>>position;
		game.mark_board(position);
		game.display_board();

	}while(position != 10);
	return 0;
} 