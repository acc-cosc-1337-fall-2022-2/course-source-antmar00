//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{
    for(int i=0; i < pegs.size(); i++){
        cout << pegs[i];
        if(i == 2 || i == 5 || i ==8){
            cout<<'\n';
        }
        else{
            cout<<"|";
        }
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
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
    bool boardfull;
    if(count (pegs.begin(), pegs.end(), " "))
    {
        boardfull = false;
    }
    else
    {
        boardfull = true;
    }
    return boardfull;
}

void TicTacToe::clear_board()
{
    for (int i = 0; i < 9; i++)
    {
        pegs[1] = " ";
    };
}