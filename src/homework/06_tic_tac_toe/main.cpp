#include "tic_tac_toe.h"

int main()
{
    TicTacToe game;
    string first_player;
    int position;
    int select = 0;

    vector<int> allowed_positions{1,2,3,4,5,6,7,8,9};

    while (select == 0)
    {
        cout << "First Player: Choose X or O\n";
        cin >> first_player;
            game.start_game(first_player);
            do
            {
                game.display_board();
			cout << "Select position 1-9: ";
                cin >> position;
                game.mark_board(position);
            }
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
                cout<<"\nThe game has ended in a tie\n";
            }

	return 0;
}