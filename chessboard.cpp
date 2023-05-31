//
// Created by lukas on 14.04.2023.
//

#include "chessboard.h"

square::square()
{
    empty = NONE;
}

void square::place_piece(pieces * piece_)
{
    if(!empty)
    {
        piece = piece_;
        empty = piece_->piece_color;
    }
}

chessboard::chessboard(unsigned short lines_, unsigned short columns_):
lines(lines_), columns(columns_)
{
    board = new class square * [lines_];

    for(unsigned int i = 0; i < lines_; i++)
    {
        board[i] = new class square[columns_];
    }

    for(int i = 0; i < lines_; i++)
    {
        for(int j = 0; j < columns_; j++)
        {
            board[i][j].sq_cords.x = j;
            board[i][j].sq_cords.y = i;
        }
    }
}

chessboard::~chessboard()
{
    for(unsigned int i = 0; i < lines; i++)
    {
        delete [] board[i];
    }

    delete [] board;
}
