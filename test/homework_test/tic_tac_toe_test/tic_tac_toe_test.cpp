#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "tic_tac_toe.h"


TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}


TEST_CASE("Test game over if 9 slots are selected.")
{
	Game TicTacToeGame;
	TicTacToeGame.start_game("X");
	TicTacToeGame.mark_board(1);
	TicTacToeGame.mark_board(2);
	TicTacToeGame.mark_board(3);
	TicTacToeGame.mark_board(4);
	TicTacToeGame.mark_board(5);
	TicTacToeGame.mark_board(7);
	TicTacToeGame.mark_board(6);
	TicTacToeGame.mark_board(9);
	TicTacToeGame.mark_board(8);

}