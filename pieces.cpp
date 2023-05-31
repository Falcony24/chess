//
// Created by lukas on 13.04.2023.
//

#include "pieces.h"

pieces::pieces(std::string name_, colors piece_color_):
name(name_), piece_color(piece_color_)
{}

pawn::pawn(colors color_):
pieces("Pawn", color_)
{}

rook::rook(colors color_):
pieces("Rook", color_)
{

}

chessset::chessset()
{
    for(int i = 0; i < 4; i++)
    {
        set[0][i] = new class pawn(BLACK);
        set[1][i] = new class rook(WHITE);
    }
}
