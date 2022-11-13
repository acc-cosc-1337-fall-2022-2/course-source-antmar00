//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{
    for(int i = 0; i < pegs.size(); i++)
    {
        cout << pegs[i];
        if(i == 2 || i == 5 || i == 8)
        {
            cout << '\n';
        }
        else
        {
            cout << "|";
        }
    }
}

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    bool complete;
    if(pegs[0] == pegs[3] && pegs[3] == pegs[6] && pegs[0] != " ")
    {
        complete = true;
    }
    else if(pegs[1] == pegs[4] && pegs[4] == pegs[7] && pegs[1] != " ")
    {
        complete = true;
    }
    else if(pegs[2] == pegs[5] && pegs[5] == pegs[8] && pegs[2] != " ")
    {
        complete = true;
    }
    else
    {
        complete = false;
    }
    return complete;
}

bool TicTacToe::check_row_win()
{
    bool complete;
    if(pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[0] != " ")
    {
        complete = true;
    }
    else if(pegs[3] == pegs[4] && pegs[4] == pegs[5] && pegs[3] != " ")
    {
        complete = true;
    }
    else if(pegs[6] == pegs[7] && pegs[7] == pegs[8] && pegs[6] != " ")
    {
        complete = true;
    }
    else
    {
        complete = false;
    }
    return complete;
}

bool TicTacToe::check_diagonal_win()
{
    bool complete;
    if(pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ")
    {
        complete = true;
    }
    else if(pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
    {
        complete = true;
    }
    else
    {
        complete = false;
    }
    return complete;
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
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
    bool isover;

    if(count (pegs.begin(),pegs.end(), " "))
        {
            isover = false;
        }
        else
        {
            isover = true;
        }

    return isover;
}

void TicTacToe::clear_board()
{
    for(int i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
}

ostream& operator<<(ostream& out, const TicTacToe& game)
{
    for(int i = 0; i < game.pegs.size(); i++)
    {
        out << game.pegs[i];
        if (i == 2 || i == 5 || i == 8)
        {
            out << '\n';
        }
        else{out << '|';}
    }

    return out;
}

istream &operator>>(istream &in, TicTacToe &game)
{
    int position;

    cout << "Player " << game.get_player() << ", Select your position\n";
	cin >> position;
	game.mark_board(position);

    return in;
}