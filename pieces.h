//
// Created by lukas on 13.04.2023.
//

#ifndef CHESS_PIECES_H
#define CHESS_PIECES_H

#include <iostream>

enum condition {none, white, black};
enum rows {A = 1, B, C, D, E, F, G, H};

struct piece_cords
{
    short x, y;
};

void show_cords(piece_cords any_piece);



class piece
{
public:
    short piece_color;

    static bool check_cords(piece_cords cords);
    virtual void move() = 0;

};


class pawn: public piece
{
public:
    std::string name = "Pawn";
    piece_cords pi_cords;

    void move() override;
};


//class rook: public piece
//{
//public:
//    std::string name = "Rook";
//    piece_cords pi_cords;
//
//public:
//    void move(rook p);
//};





#endif //CHESS_PIECES_H
