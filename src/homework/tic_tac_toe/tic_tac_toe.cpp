//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

void Game::clear_board()
{
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs [i] == " ";
    }

}

bool Game::check_board_full()
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

void Game::start_game(string first_player)
{
    player = first_player;
    this -> clear_board();
}

void Game::set_next_player()
{
    if(player == "X")
        player = 'O';
    else
        player = "X";
}

void Game::mark_board(int position)
{
    pegs[position - 1] = this ->player;

    this -> set_next_player();
}

void Game::display_board() const 
{
    for (int i = 0; i < 9; ++i)
    {
        cout<< i + 1;
        cout<<" "<<pegs[i];
        cout<<"     "<<" |";
        if((i + 1) % 3 == 0)
        {
            cout<< "\n";
        }
    }
} 