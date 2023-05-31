//
// Created by lukas on 13.04.2023.
//

#ifndef CHESS_PIECES_H
#define CHESS_PIECES_H

#include <iostream>
#include "settings.h"
#include "chessboard.h"

class pieces
{
public:
    pieces(std::string name_, colors piece_color_);

    colors piece_color;
    cords pi_cords;
    std::string name;

    colors is_empty(cords destination);

//    virtual void move() = 0;
};


class pawn: public pieces
{
public:
    pawn(colors color_);

//    virtual void move() final;
};

class rook: public pieces
{
public:
    rook(colors color_);
};

class chessset
{
public:
    pieces * set[1][4];
    chessset();
};


#endif //CHESS_PIECES_H
