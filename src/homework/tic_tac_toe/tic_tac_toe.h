//h
#include <vector>
#include <string>
#include <iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string; using std::vector;

class game 
{
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player()const{return player;}
        void display_board()const;
        string get_winner()const{return winner;}
        void set_winner();
    private:
        vector<string> pegs {9, ""};
        string player;
        string winner;
        void clear_board();
        bool check_board_full();
        void set_next_player();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();

};