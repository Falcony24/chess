//
// Created by lukas on 13.04.2023.
//

#ifndef CHESS_PIECES_H
#define CHESS_PIECES_H

#include <iostream>

enum condition {none, white, black};

struct piece_cords
{
    short x, y;
};

void show_cords();


class piece
{
protected:
    short piece_color;

public:
    piece(short color_r);

    virtual void move() = 0;
};

class pawn: public piece
{
public:
    std::string name = "Pawn";
    piece_cords pi;

public:
    pawn();

    void move() final;
    bool check_cords;
};





#endif //CHESS_PIECES_H
