//
// Created by lukas on 14.04.2023.
//

#include "chessboard.h"

square::square(short row_x, short column_y, bool empty_y):
empty(empty_y)
{
    sq.x = row_x;
    sq.y = column_y;
}

bool square::get_empty()
{
    return empty;
}

void square::set_empty(bool empty_y)
{
    empty = empty_y;
}