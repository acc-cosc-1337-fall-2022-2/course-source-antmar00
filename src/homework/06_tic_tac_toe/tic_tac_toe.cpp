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
    string output = "";

    if (game.pegs.size() == 9)
    {
        output =("\033[4m" + game.pegs.at(0) + "|" + game.pegs.at(1) + "|" + game.pegs.at(2) + "\n" +
                             game.pegs.at(3) + "|" + game.pegs.at(4) + "|" + game.pegs.at(5) + "\033[0m" + "\n" + 
                             game.pegs.at(6) + "|" + game.pegs.at(7) + "|" + game.pegs.at(8) + "\n");
    } 
    else if (game.pegs.size() == 16) {
        output =("\033[4m" + game.pegs.at(0) + "|" + game.pegs.at(1) + "|" + game.pegs.at(2) + "|"  + game.pegs.at(3) + "\n" +
                             game.pegs.at(4) + "|" + game.pegs.at(5) + "|" + game.pegs.at(6) + "|"  + game.pegs.at(7) + "\n" +
                             game.pegs.at(8) + "|" + game.pegs.at(9) + "|" + game.pegs.at(10) + "|"  + game.pegs.at(11) + "\033[0m" + "\n" + 
                             game.pegs.at(12) + "|" + game.pegs.at(13) + "|" + game.pegs.at(14) + "|"  + game.pegs.at(15) + "\n");
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