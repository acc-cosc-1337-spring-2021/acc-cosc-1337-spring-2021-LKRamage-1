#include "tic_tac_toe.h"

#include<iostream>
#include<string>
// #include<vector>

using std::string;
// using std::vector;

using std::cout;
using std::cin;

// new

bool TicTacToe::game_over()
{
    //update new
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
            return true;
    }
    else if (check_board_full())
    {
        winner = "C"; //variable C
        return true;
    }
    else {
        return false;
    }
    // 1) return check_board_full function return value
    //TicTacToe::check_board_full();
    //return check_board_full();
}

void TicTacToe::start_game(string first_player)
{

    // 1) First_player function argument value must be X or O
    if(first_player == "O" || first_player == "X") //(first_player == "o" || first_player =="x")
    {
    
    // 2) In function set player(private variable) to first_player function argument.
    player = first_player;

    // 3) Call the clear_board function
    //TicTacToe::clear_board();
    clear_board();

    }

}

void TicTacToe::display_board()const
{
    // Iterate vector of strings pegs to 
    // Display a tic tac toe board in 3x3 format
    for (int i = 0; i < 9; i++)
    {
        cout << pegs[i];

        if ((i+1) % 3 == 0)
        {
            cout <<"\n";
        }
        else
        {
            cout <<" | ";
        }
        

    }


}
void TicTacToe::mark_board(int position)
{
    // 1) Mark vector w position -1 equal to player 
    pegs[position -1] = player;
    // 2) Call set_next_player private function
    //TicTacToe::set_next_player();
    set_next_player();
}


/*string get_player()
{
    //TicTacToe:
}*/


void TicTacToe::set_next_player()
{
    // Set player. If private variable player X player is O else player is X.
    if (player == "X")
    {
        player = "O";
    } 
    else 
    {
        player = "X";
    }
}



bool TicTacToe::check_board_full()
{
	/* do
	{
	
	}while (pegs) */
	
	//boolean true
    bool full = true;
    
    //iterate
    for(int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ") 
            full = false;
    }
    return full; //return true
}

void TicTacToe::clear_board()
//Initialize to 9 " "(spaces)
{
    pegs = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
}

// new
// type of wins for game over, set winner etc

bool TicTacToe::check_column_win() //iterate later for neatness and functionality?
{
    if (pegs[0] == pegs[3] && pegs[0] == pegs[6] && pegs[0] != " ")	  
    {
        return true;
    }
    else if (pegs[1] == pegs[4] && pegs[1] == pegs[7] && pegs[1] != " ")
    {
    	return true;
	}
	else if (pegs[2] == pegs[5] && pegs[2] == pegs[8] && pegs[2] != " ")
	{
		return true;
	}
    else {
        return false;
    }
}

bool TicTacToe::check_row_win() // iterate later
{
    if (pegs[0] == pegs[1] && pegs[0] == pegs[2] && pegs[0] != " ")
    {
        return true;
    }
    else if (pegs[3] == pegs[4] && pegs[3] == pegs[5] && pegs[3] != " ") 
    {
    	return true;
	}
	else if (pegs[6] == pegs[7] && pegs[6] == pegs[8] && pegs[6] != " ")
	{
		return true;
	}
    else {
        return false;
    }
}

bool TicTacToe::check_diagonal_win() // for neater come back to iterate
{
    if(pegs[0] == pegs[4] && pegs[0] == pegs[8] && pegs[0] != " ") 
    {
        return true;
    }
    else if (pegs[2] == pegs[4] && pegs[2] == pegs[6] && pegs[2] != " ")
    {
    	return true;
	}
    else {
        return false;
    }
}

void TicTacToe::set_winner()
{
    if (player == "X" || player == "x") //come back to double check and confirm code 
    {
        winner = "O";
    }
    /*else if (player == "o")
    {
        player == "O";
    }*/
    else
    {
        winner = "X";
    }
    
}

string TicTacToe::get_winner() const
{
    return winner;
}