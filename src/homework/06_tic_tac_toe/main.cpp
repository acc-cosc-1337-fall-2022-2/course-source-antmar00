#include "tic_tac_toe.h"

int main() 
{
	TicTacToe game;
	string first_player;
	char end = 'N';
	int position;
	cout << "Tic-Tac-Toe\n";
	do
	{
		cout << "Choose X or O: ";
		cin >> first_player;
		game.start_game(first_player);
		while (!game.game_over())
		{
			game.display_board();
			cout << "Select position 1-9: ";
			cin >> position;
			game.mark_board(position);
		}
		game.display_board();
		cout << "Done playing? Select 'Y' for Yes or 'N' for No: ";
		cin >> end;
	}
	while (end != 'Y');

	return 0;
}