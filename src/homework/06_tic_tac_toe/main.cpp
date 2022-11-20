#include <memory>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <vector>
using std::unique_ptr;
using std::make_unique;
using std::cin;
int main() 
{
	TicTacToeManager manager;
	LOOP: string player_choice;
	std::cout<<"Tic Tac Toe. Press 3 for 3X3 board or press 4 for 4X4 board: ";
	int player_choice0;
	cin>>player_choice0;
	unique_ptr<TicTacToe> game;
	
	if(player_choice0==3)
		game=make_unique<TicTacToe3>();
	else if(player_choice0==4)
		game=make_unique<TicTacToe4>();
	else
	{
		goto LOOP;
	}
	
	std::cout<<"\n First Player! Please Enter X or O(Only Capital Letter): ";
	std::cin>>player_choice;
	//std::cin.clear();
	
	if(player_choice!="X"&&player_choice!="O")
		{
			std::cout<<"Enter X or O to continue";
			goto LOOP;
		}

	game->start_game(player_choice);
	do
	{	
		std::cin>>*game;
		std::cout<<*game;
		if (game->game_over()==true)
			{
				string final_victor= game->get_winner();
				std::cout<<"\nThe Winner Is:\t"<<final_victor;
			}
	}
	while(game->game_over()==false);
	manager.save_game(game);
	std::cout<<"\nGame Over\n";
	int x_win;
	int o_win;
	int ties;
	manager.get_winner_total( o_win,x_win,ties);
	std::cout<<"\n"<<"Wins for X:\t"<<x_win<<"\nWins for O:\t"<<o_win<<"\nTied games:\t"<<ties;
	string continue_check;
	std::cout<<"\nTo continue, press 'Y', else press anything else: ";
	std::cin>>continue_check;
	if(continue_check=="Y")
		goto LOOP;
	std::cout<<manager;
	
	int x_wins;
	int o_wins;
	int tiess;
	manager.get_winner_total( o_wins,x_wins,tiess);
	std::cout<<"\n"<<"Wins for X:\t"<<x_wins<<"\nWins for O:\t"<<o_wins<<"\nTied games:\t"<<tiess;
	return 0;
}