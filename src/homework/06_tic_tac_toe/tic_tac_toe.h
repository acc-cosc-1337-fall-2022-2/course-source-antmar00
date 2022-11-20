//h
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::ostream;
using std::istream;
#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe
{
    public:
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const;
        std::string get_winner();

    protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
        std::string player;
        std::string winner;

    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        void set_winner();
};
#endif