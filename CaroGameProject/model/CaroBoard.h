#ifndef CAROBOARD_H_INCLUDED
#define CAROBOARD_H_INCLUDED
#include <vector>
#include <iostream>
using namespace std;

class CaroBoard
{
    int cnt = 0;
    char **caro_board = NULL;
public:
    CaroBoard()
    {
        caro_board = (char **)malloc(sizeof(char *) * 10);
        for (int i = 0; i < 10; i++){
            caro_board[i] = (char *)malloc(sizeof(char *) * 10);
        }

        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                caro_board[i][j] = ' ';
            }
        }
    }
    void resetCaroBoard()
    {
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                caro_board[i][j] = ' ';
            }
        }
    }
//    void setCaroBoard()
//    {
//        caro_board = (char **)malloc(10);
//        for (int i = 0; i < 10; i++){
//            caro_board[i] = (char *)malloc(10);
//        }
//
//        for (int i = 0; i < 10; i++){
//            for (int j = 0; j < 10; j++){
//                caro_board[i][j] = ' ';
//            }
//        }
//    }

    char ** getCaroBoard()
    {
        return caro_board;
    }

    int getCnt()
    {
        return cnt;
    }
    void setCnt()
    {
        ++cnt;
    }
};


#endif // CAROBOARD_H_INCLUDED
