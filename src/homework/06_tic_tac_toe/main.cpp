#include "tic_tac_toe.h"

int main()
{
    TicTacToe game;

    string first_player;
    int position;
    int select = 0;

    vector<int> allowed_positions{1,2,3,4,5,6,7,8,9};

	cout << "TIC TAC TOE\n";

    while (select == 0)
    {
        cout << "First Player: Choose X or O\n";
        cin >> first_player;

        if (first_player == "X" || first_player == "O")
        {
            game.start_game(first_player);
            do
            {
                cout << "Player " << game.get_player() << " choose position 1-9\n";
                game.display_board();
                cin >> position;
                game.mark_board(position);
            }
            while (!game.game_over());

            game.display_board();
            string winner = game.get_winner();
            if(winner == "X")
            {
                cout<<"\nThe winner is "<<winner<<"\n";
            }
            else if(winner == "O")
            {
                cout<<"\nThe winner is "<<winner<<"\n";
            }
            else if(winner == "C")
            {
                cout<<"\nIt is a tie...\n";
            }

            cout << "Would you like to play again? Press 0 for continue or 1 to Exit\n";
            cin >> select;
        }
        else
        {
            cout << "Invalid entry. Please try again\n";
        }
    }
    while (select != 0)
    {
        cout<<"Until next time.";
        break;
    }
	return 0;
}