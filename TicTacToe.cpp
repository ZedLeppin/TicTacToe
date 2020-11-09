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
            if(board[x-1][y-1] == ' ' and x >= 1 and x <= 3 and y >= 1 and y <= 3){
                break;
            }else{
                cout << "Please enter a valid cell.\n";
            }
        }
        x--;
        y--;
        if(player == 1){
            board[y][x] = 'x';
            player = 2;
        }else{
            board[y][x] = 'o';
            player = 1;
        }
    }
}
