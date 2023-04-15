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

    for(int i = 0; i < 64; i++)
    {
        if(i % 8 == 0)
        {
            std::cout << std::endl;
        }
        std::cout << board[i].empty << "    ";
    }

//    pawn p1;
//    p1.pi_cords.x = 8;
//    p1.pi_cords.y = 0;
//    show_cords(p1.pi_cords);
//    p1.move();
//    show_cords(p1.pi_cords);

    return 0;
}
