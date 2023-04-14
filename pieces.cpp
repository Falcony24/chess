//
// Created by lukas on 13.04.2023.
//

#include "pieces.h"

template <typename t>
t show_cords(t any_piece)
{
    std::cout << "Wiersz: " << any_piece.x;
    std::cout << " Kolumna: " << any_piece.y << std::endl;
}


piece::piece(short color_r):
piece_color(color_r)
{
    piece_color = color_r;
}


pawn::pawn():
piece(none)
{}

void pawn::move()
{

    pi.y++;
}
