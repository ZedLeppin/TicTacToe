#include "tictactoe.h"
#include <iostream>
#include <string>
using namespace std;

void TicTacToe::makeBoard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    }
}
void TicTacToe::showBoard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << board[i][j] << "  ";
            if(j < 2){
                cout << "|";
            }
        }
        if(i < 2){
            cout << "\n-----------\n";
        }
    }
}
void TicTacToe::startGame(){
    player = 1;
    for(int k = 0; k < 9; k++){
        while(true){
            cout << "\nCurrent board\n";
            showBoard();
            cout << "\nPlayer " << player << ", which column? (one index) \n";
            cin >> x;
            cout << "Which row?\n";
            cin >> y;
            x--;
            y--;
            if(board[y][x] == ' ' and x >= 0 and x <= 2 and y >= 0 and y <= 2){
                break;
            }else{
                cout << "Please enter a valid cell.\n";
            }
        }
        if(player == 1){
            board[y][x] = 'x';
            player = 2;
        }else{
            board[y][x] = 'o';
            player = 1;
        }
        if((board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x') || (board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x') || (board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x') || (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x') || (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x') || (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x') || (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') || (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x')){
            showBoard();
            cout << "\nPlayer one wins!\n";
            tie = false;
            break;
        }else if((board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o') || (board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o') || (board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o') || (board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o') || (board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o') || (board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o') || (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') || (board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o')){
            showBoard();
            cout << "\nPlayer two wins!\n";
            tie = false;
            break;
        }
    }
    if(tie){
        showBoard();
        cout << "\nThe game is a draw\n";
    }
}
