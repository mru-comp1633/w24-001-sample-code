#include <iostream>
#include "tictactoe.h"

using namespace std;

// Private helper function
bool line_complete(const char line[]) {
    // checks to see if a given line is finished
    return line[0] != ' ' &&
	line[0] == line[1] &&
	line[1] == line[2];
}

void initialize(char board[N][N]) {
    for (int row = 0; row < N; ++row) {
        for (int col = 0; col < N; ++col) {
            board[row][col] = ' ';
        }
    }
}


void print_board(const char board[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << board[i][N-1] << endl;
	if (i < 2)
	    cout << "---------\n";
    }
}

void take_turn(char board[N][N], char player) {
    // read index from player and set value
    // Probably needs bounds checking
    int r, c;
    cout << "Player " << player << ", where would you like to play? [r c]:";
    cin >> r >> c;
    board[r][c] = player;
}

bool game_over(const char board[N][N], char& winner) {
    bool finished = false; 
    // first check rows
    for (int r = 0; r < N; ++r) {
	if (line_complete(board[r])) {
	    finished = true;
	    winner = board[r][0];
	}
    }
    
    // then columns
    char line[N] = {};
    for (int c = 0; c < N; ++c) {
	for (int r = 0; r < N; ++r) {
	    line[r] = board[r][c];
	}
	if (line_complete(line)) {
	    finished = true;
	    winner = line[0];
	}
    }

    // finally, diagonal
    for (int i = 0; i < N; ++i)
	line[i] = board[i][i];

    if (line_complete(line)) {
        finished = true;
	winner = line[0];
    }

    // the last diagonal is a bit tricky
    for (int i = 0; i < N; ++i) {
	line[i] = board[i][N - i - 1];
    }
    
    if (line_complete(line)) {
	finished = true;
	winner = line[0];
    }

    // Check for tie game
    if (!finished) {
	bool full = true;
	for (int i = 0; i < N && full; ++i) {
	    for (int j = 0; j < N && full; ++j) {
		if (board[i][j] == ' ')
		    full = false;
	    }
	}
	if (full) {
	    finished = true;
	    winner = 'T';
	}
    }	    
	
    return finished;
}

void swap_player(char& player) {   
    if (player == 'X')
	player = 'O';
    else
	player = 'X';
}

