#pragma once

class TicTacToe{
    public:
    void makeBoard();
    void showBoard();
    void startGame();
    char board[3][3] = {};
    bool running = true;
    bool tie = true;
    int player;
    int x;
    int y;
};