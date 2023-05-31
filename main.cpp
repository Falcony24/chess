#include <iostream>
#include "pieces.h"
#include "chessboard.h"

using namespace std;



int main()
{

    chessboard a(8, 8);

    for(int i = 0; i < a.lines; i++)
    {
        for(int j = 0; j < a.columns; j++)
        {
            cout << "Wiersze: " << a.board[i][j].sq_cords.y << "    Kolumny: " << a.board[i][j].sq_cords.x << endl;
        }
    }
    chessset sa;

//    std::cout << a.board[0][0].empty;
//    sa.set[0][0]->name;

    return 0;
}
