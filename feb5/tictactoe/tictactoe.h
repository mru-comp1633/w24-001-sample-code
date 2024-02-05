#ifndef TICTACTOE_H
#define TICTACTOE_H

const int N = 3;

void initialize(char board[N][N]);
void print_board(const char board[N][N]);
void take_turn(char board[N][N], char player);
bool game_over(const char board[N][N], char& winner);
void swap_player(char& player);

#endif // TICTACTOE_H
