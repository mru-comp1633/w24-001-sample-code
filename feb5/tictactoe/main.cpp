#include <iostream>
#include "tictactoe.h"

using namespace std;

int main() {
    char board[N][N] = {};
    char player = 'X';
    char winner;

    initialize(board);
    
    while (!game_over(board, winner)) {
	print_board(board);
	take_turn(board, player);
	swap_player(player);
    }

    print_board(board);
    if (winner != 'T')
	cout << "Game over! " << winner << " wins.\n";
    else
	cout << "Tie game!\n";
    
    return 0;
}
