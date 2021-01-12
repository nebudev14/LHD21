#include <bits/stdc++.h>
using namespace std;

char board[5][5] = {{' ', '|', ' ', '|', ' '}, {'-', '|', '-', '|', '-'}, {' ', '|', ' ', '|', ' '}, {'-', '|', '-', '|', '-'}, {' ', '|', ' ', '|', ' '}};

void printBoard()
{
    
    for(auto& row : board)
    {
        for(char c : row) 
        {
            cout << c;
        }
        cout << endl;
    }
};

bool win(char piece)
{
    if(board[0][0] == board[0][2] && board[0][2] == board[0][4] && board[0][4] == piece ||
    board[2][0] == board[2][2] && board[2][2] == board[2][4] && board[2][4] == piece ||
    board[4][0] == board[4][2] && board[4][2] == board[4][4] && board[4][4] == piece ||
    board[0][0] == board[2][0] && board[2][0] == board[4][0] && board[4][0] == piece ||
    board[0][2] == board[2][2] && board[2][2] == board[4][2] && board[4][2] == piece ||
    board[0][4] == board[2][4] && board[2][4] == board[4][4] && board[4][4] == piece ||
    board[0][0] == board[2][2] && board[2][2] == board[4][4] && board[4][4] == piece ||
    board[0][4] == board[2][2] && board[2][2] == board[4][0] && board[4][0] == piece)
    return true;
    else return false;
};

int main()
{
    int turn = 1;
    while(true)
    {
        char piece;
        if(turn % 2 != 0) piece = 'X';
        else piece = 'O';
        printBoard();
        cout << "It is currently Player " << piece << "'s turn." << endl;
        cout << "Enter the position you want to place your piece at" << endl;
        int pos;
        cin >> pos;
        switch(pos)
        {
            case 1:
                if(board[0][0] == ' ') board[0][0] = piece;
                else 
                {
                    cout << "There's already a piece there!" << endl;
                    turn++;
                }
                break;
            case 2:
                if(board[0][2] == ' ') board[0][2] = piece;
                else 
                {
                    cout << "There's already a piece there!" << endl;
                    turn++;
                }
                break;
            case 3:
                if(board[0][4] == ' ') board[0][4] = piece;
                else 
                {
                    cout << "There's already a piece there!" << endl;
                    turn++;
                }
                break;
            case 4:
                if(board[2][0] == ' ') board[2][0] = piece;
                else 
                {
                    cout << "There's already a piece there!" << endl;
                    turn++;
                }
                break;
            case 5:
                if(board[2][2] == ' ') board[2][2] = piece;
                else 
                {
                    cout << "There's already a piece there!" << endl;
                    turn++;
                }
                break;
            case 6:
                if(board[2][4] == ' ') board[2][4] = piece;
                else 
                {
                    cout << "There's already a piece there!" << endl;
                    turn++;
                }
                break;
            case 7:
                if(board[4][0] == ' ') board[4][0] = piece;
                else 
                {
                    cout << "There's already a piece there!" << endl;
                    turn++;
                }
                break;
            case 8:
                if(board[4][2] == ' ') board[4][2] = piece;
                else 
                {
                    cout << "There's already a piece there!" << endl;
                    turn++;
                }
                break;
            case 9:
                if(board[4][4] == ' ') board[4][4] = piece;
                else 
                {
                    cout << "There's already a piece there!" << endl;
                    turn++;
                }
                break;
        }
        if(win(piece)) {
            cout << "Player " << piece << " wins!" << endl;
            printBoard();
            break;
        }
        turn++;
    }
    return 0;
}