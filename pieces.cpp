//
// Created by lukas on 13.04.2023.
//

#include "pieces.h"

void show_cords(piece_cords any_piece)
{
    std::cout << "Wiersz: " << any_piece.x;
    std::cout << " Kolumna: " << any_piece.y << std::endl;
}

bool piece::check_cords(piece_cords cords)
{
    if(cords.x < 1 or cords.x > 8)
    {
        return false;
    }

    if(cords.y < 1 or cords.y > 8)
    {
        return false;
    }

    return true;
}



void pawn::move()
{
    if(check_cords(pi_cords))
    {
        return;
    }

    pi_cords.x ++;
}



