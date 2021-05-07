//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

void game::clear_board()
{
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs [i] == " ";
    }

}

bool game::check_board_full()
{
    bool is_full = true;
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        if (pegs[i] == " "){
            is_full = false;
            break;
        }
    }
    return is_full;
}

void game::start_game(string first_player)
{
    player = first_player;
    this -> clear_board();
}

void game::set_next_player()
{
    if(player == "X")
        player = 'O';
    else
        player = "X";
}

void game::mark_board(int position)
{
    pegs[position - 1] = this ->player;

    this -> set_next_player();
}

void game::display_board() const 
{
    for (int i = 0; i < 9; ++i)
    {
        cout<< i + 1;
        cout<<" "<<pegs[i];
        cout<<" "<<"|";
        if((i + 1) % 3 == 0)
        {
            cout<< "\n";
        }
    }
} 

void game::set_winner()
{
    if(player == "O")
    {
        winner = "X";
    }
    else
    {
        winner = "O";
    }
}

bool game::game_over()
{
    bool column_winner = this -> check_column_win();
    bool row_winner = this -> check_row_win();
    bool diagonal_winner = this -> check_diagonal_win();

    bool is_full = this -> check_board_full();

    if(column_winner or row_winner or diagonal_winner)
    {
        this -> set_winner();
        return true;
    }

    if(column_winner && row_winner && diagonal_winner && is_full)
    {
        winner = "C";
        return true;
    }

    return false;
}

bool game::check_diagonal_win()
{
    bool win = false;

    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        win = true;
        return win;
    }
    if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        win = true;
        return win;
    }

    if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
    {
        win = true;
        return win;
    }
    if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
    {
        win = true;
        return win;
    }

    return win;
}

bool game::check_column_win()
{
    bool win = false;

    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        win = true;
        return win;
    }
    if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        win = true;
        return win;
    }

    if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        win = true;
        return win;
    }
     if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        win = true;
        return win;
    }

    if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        win = true;
        return win;
    }
    if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        win = true;
        return win;
    }

    return win;
}

bool game::check_row_win()
{
    bool win = false;

    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        win = true;
        return win;
    }
    if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        win = true;
        return win;
    }

    if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        win = true;
        return win;
    }
    if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        win = true;
        return win;
    }

    if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        win = true;
        return win;
    }
    if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        win = true;
        return win;
    }
    return win;
}