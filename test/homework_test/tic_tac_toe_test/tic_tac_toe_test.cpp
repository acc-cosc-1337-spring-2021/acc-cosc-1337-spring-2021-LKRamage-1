#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "tic_tac_toe.h"


TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}


TEST_CASE("Test game is over if 9 slots are selected.")
{
	game TicTacToeGame;
	TicTacToeGame.start_game("X");
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(1);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(2);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(3);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(4);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(5);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(7);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(6);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(9);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(8);
	REQUIRE (TicTacToeGame.game_over() == true);

	REQUIRE (TicTacToeGame.get_winner() == "C");

}

TEST_CASE("Test the 'start_game' function: Player 'X")
{
	game TicTacToeGame;
	TicTacToeGame.start_game("X");
	REQUIRE(TicTacToeGame.get_player() == "X");
}

TEST_CASE("Test the 'start_game' function: Player 'O'")
{
	game TicTacToeGame;
	TicTacToeGame.start_game("O");
	REQUIRE(TicTacToeGame.get_player() == "O");
}


TEST_CASE("Test the 'check_diagonal_win' function: Starting from position 1 down to position 9, through position 5")
{
	game TicTacToeGame;

	TicTacToeGame.start_game("X");
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(1);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(2);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(5);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(4);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(9);
	REQUIRE(TicTacToeGame.game_over() == true);
}

TEST_CASE("Test the 'check_diagonal_win' function: Starting from position 7 up to position 3, through position 5")
{
	game TicTacToeGame;

	TicTacToeGame.start_game("X");
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(7);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(2);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(5);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(4);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(3);
	REQUIRE (TicTacToeGame.game_over() == true);

}

TEST_CASE("Test 'check_column_win' function", "X wins first column")
{
	game TicTacToeGame;
	TicTacToeGame.start_game("X");
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(1);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(2);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(4);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(3);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(7);
	REQUIRE (TicTacToeGame.game_over() == true);

}

TEST_CASE("Test 'check_column_win' function: Starting from position 2 down to 8, through 5")
{
	game TicTacToeGame;
	TicTacToeGame.start_game("X");
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(2);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(1);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(5);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(3);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(8);
	REQUIRE (TicTacToeGame.game_over() == true);

}

TEST_CASE("Test 'check_column_win' function: Starting from position 3 down to 9, through 6")
{
	game TicTacToeGame;
	TicTacToeGame.start_game("X");
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(3);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(1);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(6);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(4);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(9);
	REQUIRE (TicTacToeGame.game_over() == true);

}

TEST_CASE("Test 'check_row_win' function: Starting from position 1 to 3, through 2")
{
	game TicTacToeGame;
	TicTacToeGame.start_game("X");
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(1);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(4);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(3);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(7);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(2);
	REQUIRE (TicTacToeGame.game_over() == true);

}


TEST_CASE("Test 'check_row_win' function: Starting from position 4 to 6, through 5")
{
	game TicTacToeGame;
	TicTacToeGame.start_game("X");
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(4);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(3);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(5);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(8);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(6);
	REQUIRE (TicTacToeGame.game_over() == true);

}

TEST_CASE("Test 'check_row_win' function: Starting from position 7 to 9, through 8")
{
	game TicTacToeGame;
	TicTacToeGame.start_game("X");
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(7);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(4);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(8);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(1);
	REQUIRE (TicTacToeGame.game_over() == false);
	TicTacToeGame.mark_board(9);
	REQUIRE (TicTacToeGame.game_over() == true);

}