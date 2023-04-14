#include <iostream>
#include "pieces.h"
#include "chessboard.h"

int main()
{
    square * board;
    board = new square[64];
    int a = 0;

    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= 8; j++)
        {
            board[a] = square( i, j);
            a++;
        }
    }

//    for(int i = 0; i < 64; i++)
//    {
//        std::cout << "wiersz: " << board[i].sq.x << " kolumna: ";
//        std::cout << board[i].sq.y << std::endl;
//    }

    pawn p1;
    p1.pi.x = 0;
    p1.pi.y = 0;


    return 0;
}
