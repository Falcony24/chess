//
// Created by lukas on 14.04.2023.
//

#ifndef CHESS_CHESSBOARD_H
#define CHESS_CHESSBOARD_H

#include "settings.h"
#include "pieces.h"

class pieces;

class square
{
public:
    pieces * piece;

    colors empty;
    cords sq_cords;

    square();

    void place_piece(pieces * piece_);
};

class chessboard
{
public:
    square ** board;

    const unsigned short lines, columns;

    chessboard(unsigned short lines_, unsigned short columns_);
    ~chessboard();
};


#endif //CHESS_CHESSBOARD_H
