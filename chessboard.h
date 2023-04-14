//
// Created by lukas on 14.04.2023.
//

#ifndef CHESS_CHESSBOARD_H
#define CHESS_CHESSBOARD_H

struct square_cords
{
    short x,y;
};

class square
{
public:
    bool empty;
    square_cords sq;

public:
    square(short row_x = 0, short column_y = 0, bool empty_y = 0);

    bool get_empty();
    void set_empty(bool empty_y);
};


#endif //CHESS_CHESSBOARD_H
