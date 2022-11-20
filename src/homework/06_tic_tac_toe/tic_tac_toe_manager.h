//h
#include <iostream>
#include <vector>
#include <string>
#include "tic_tac_toe.h"

using std::string;
using std::vector;
using std::ostream;
using std::istream;



class TicTacToeManager
{

public:
    void save_game(TicTacToe b);
    friend ostream& operator<<(ostream & out, const TicTacToeManager& manager);
    void get_winner_total(int& o, int& x, int&t);

private:
    vector<TicTacToe> games;
    int x_win{0};
    int o_win{0};
    int ties{0};
    void update_winner_count(string winner);

};