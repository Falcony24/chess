//
// Created by lukas on 14.04.2023.
//

#ifndef CHESS_SETTINGS_H
#define CHESS_SETTINGS_H

#include <string>
#include <iostream>

struct cords
{
    unsigned short x = 0 , y = 0;
};

enum rows {A = 1, B, C, D, E, F, G, H};

enum colors {NONE, WHITE, BLACK};

class settings
{
private:
    unsigned short rows_square, columns_squares;

    settings();
};


#endif //CHESS_SETTINGS_H
