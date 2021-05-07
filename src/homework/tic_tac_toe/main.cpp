
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

	cout<<"Let's Play Tic-Tac-Toe: Type either X or O to for your marker: ";
	cin>>player;

	game.start_game(player);
	game.display_board();

	do
	{
		cout<<"Player "<<game.get_player()<<" Choose from spots 1-9 to place your marker on the board! \nJust type '10' if you wish to close the board, ending the game: ";
		cin>>position;
		game.mark_board(position);
		game.display_board();

	}
	while(position != 10);
	return 0;
} 