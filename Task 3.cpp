/*
TIC-TAC-TOE GAME:
Build a simple console-based Tic-Tac-Toe game that allows two players to play against each other.

Game Board: Create a 3x3 grid as the game board.
Players: Assign "X" and "O" to two players.
Display Board: Show the current state of the board.
Player Input: Prompt the current player to enter their move.
Update Board: Update the game board with the player's move.
Check for Win: Check if the current player has won.
Check for Draw: Determine if the game is a draw.
Switch Players: Alternate turns between "X" and "O" players.
Display Result: Show the result of the game (win, draw, or ongoing).
Play Again: Ask if the players want to play another game.
*/

//Solution:

#include <bits/stdc++.h>
using namespace std;
// Function to print the tic-tac-toe board
void printBoard(const vector<vector<char>>& board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player)
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return true;
        }
    }
    // Check columns
    for (int j = 0; j < 3; j++)
    {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
        {
            return true;
        }
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
        return true;
    }
    return false;
}
// Function to play the tic-tac-toe game
void playGame()
{
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    int moves = 0;

    while (moves < 9)
    {
        cout << "Player " << currentPlayer << ", enter your move (row column): ";
        int row, col;
        cin >> row >> col;

        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = currentPlayer;
        printBoard(board);

        if (checkWin(board, currentPlayer))
        {
            cout << "Player " << currentPlayer << " wins!" << endl;
            return;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        moves++;
    }

    cout << "It's a draw!" << endl;
}

int main()
{
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    playGame();
    return 0;
}
