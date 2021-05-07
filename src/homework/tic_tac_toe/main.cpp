
#include "tic_tac_toe.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() 

{	
	game TicTacToeGame;
	string player;
	string again;
	int position;

while(again == "Y" or 'y')
	{
		cout<<"Tic-Tac-Toe Game: Type X or O to choose your marker: ";
		cin>>player;

		while (player != "X" or player != "O")
		{
			cout<<"Select the player that will go first! Choose X or O: ";
			cin>>player;
			if (player == "X" or player == "O")
			{
				break;
			}
		}

		TicTacToeGame.start_game(player);
		TicTacToeGame.display_board();

		while(TicTacToeGame.game_over() == false)
		{
			cout<<"Player "<<TicTacToeGame.get_player()<<", Pick a position (1-9): ";
			cin>>position;
			
			while(position < 1 or position > 9)
			{
				cout<<"Oops, that position does not exist! Try again: ";
				cin>>position;
			}
			
			TicTacToeGame.mark_board(position);
			TicTacToeGame.display_board();
		}
	
	if(TicTacToeGame.get_winner() == "C")
	{
		cout<<"Tie Game";
	}
	
	else
		cout<<"Player "<<TicTacToeGame.get_winner()<<" has is the winner!\n";

		cout<<"Play again? Enter Y to continue: ";
		cin>>again;
	}
	
	return 0;
}