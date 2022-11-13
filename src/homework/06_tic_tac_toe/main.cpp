#include "tic_tac_toe.h"

int main()
{
    TicTacToe game;
	TicTacToeManager manager;
	string first_player;
	int gameloop = 0;
	int reply = {0};
	
	cout << "Tic Tac Toe\n\n";
	cout << "First player choose X or O\n";
	cin >> first_player;
	game.start_game(first_player);
	

	do
	{
		do
        {
            cout << game;
            cin >> game;
        }
        while(!game.game_over());
        game.game_over();
        cout << game;
        manager.save_game(game);
		
		int o, x, t;
        manager.get_winner_total(o, x, t);
        cout << "\nO Wins: " << o << '\n';
        cout << "X Wins: " << x << '\n';
        cout << "Ties: " << t << '\n';

		if( game.get_winner() == "X")
		{
			cout << "Player X wins!";
		}
		else if(game.get_winner() == "O")
		{
			cout << "Player O wins!";
		}
		else{cout << "-Tied Game-";}

		cout << "Press 1 to Continue or 0 to Exit\n";
		cin >> reply;

		if(reply == 0)
		{
			cout << "Goodbye\n";
			gameloop = 1;
		}
		else
		{
			cout << "Starting another game\n";
			game.start_game(first_player);
			gameloop = 0;
		}
	}
	while(gameloop == 0);
	cout << manager;

	return 0;
}