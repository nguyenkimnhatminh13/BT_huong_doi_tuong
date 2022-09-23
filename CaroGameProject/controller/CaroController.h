#ifndef CAROCONTROLLER_H_INCLUDED
#define CAROCONTROLLER_H_INCLUDED
#include <iostream>
#include <vector>
#include <windows.h>
#include "../model/Player.h"
#include "../model/Point.h"
#include "../model/CaroBoard.h"
#include "../view/CaroBoardView.h"

class CaroController
{
    CaroBoardView caro_board_view;
    Player* list_player;
    CaroBoard caro_board;
    Point point;
    vector<pair<Point,_player>> list_move;

public:
    CaroController(CaroBoard caro_board, Player* list_player,CaroBoardView caro_board_view)
    {
        this->caro_board = caro_board;
        this->list_player = list_player;
        this->caro_board_view = caro_board_view;
    }

    CaroBoardView getCaroBoardView()
    {
        return caro_board_view;
    }

    CaroBoard getCaroBoard()
    {
        return caro_board;
    }

    void showCaroBoard()
    {
        caro_board_view.showCaroBoard(caro_board.getCaroBoard());
    }

    void updateCaroBoard(Point point,_player player)
    {
        if (player == _player1){
            caro_board.getCaroBoard()[point.x][point.y] = 'X';
        }

        else{
            caro_board.getCaroBoard()[point.x][point.y] = 'O';
        }
    }

    void resetCaroBoard()
    {
        caro_board.resetCaroBoard();
    }

    bool checkBlank(Point point)
    {
        if (caro_board.getCaroBoard()[point.x][point.y] != ' ')
        {
            return false;
        }
        return true;
    }

    void save(Player *listPlayer)
    {
        caro_board_view.save(listPlayer);
    }

    int result()
    {
        int countX = 0;
        int countO = 0;
        // check row
        for (int row = 0; row < 10; row++){
            for (int column = 0; column < 6; column++){
                    for (int i = 0; i < 5; i++){
                        if (caro_board.getCaroBoard()[row][column + i] == 'X'){
                            ++countX;
                        }
                    else if (caro_board.getCaroBoard()[row][column + i] == 'O'){
                            ++countO;
                        }
                }
                if (countX != 5)
                {
                    countX = 0;
                }
                if (countO != 5)
                {
                    countO = 0;
                }
                if (countO == 5 || countX == 5)
                {
                    break;
                }
            }

            if (countX == 5)
            {
                return 1;
                break;
            }

            else if (countO == 5)
            {
                return 0;
                break;
            }
        }

        // check column
        for (int column = 0; column < 10; column++)
        {
            for (int row = 0; row < 6; row++)
            {
                for (int i = 0; i < 5; i++)
                {

                    if (caro_board.getCaroBoard()[row + i][column] == 'X')
                    {
                        ++countX;
                    }
                    else if (caro_board.getCaroBoard()[row + i][column] == 'O')
                    {
                        ++countO;
                    }
                }
                if (countX != 5)
                {
                    countX = 0;
                }
                if (countO != 5)
                {
                    countO = 0;
                }
                if (countO == 5 || countX == 5)
                {
                    break;
                }
            }

            if (countX == 5)
            {
                return 1;
                break;
            }

            else if (countO == 5)
            {
                return 0;
                break;
            }
        }

        // check cross from right to left
        for (int row = 0; row < 6; row++)
        {
            for (int column = 0; column < 6; column++)
            {
                for (int i = 0; i < 5; i++)
                {
                    if (caro_board.getCaroBoard()[row + i][column + i] == 'X')
                    {
                        ++countX;
                    }
                    else if (caro_board.getCaroBoard()[row + i][column + i] == 'O')
                    {
                        ++countO;
                    }
                }
                if (countX != 5)
                {
                    countX = 0;
                }
                if (countO != 5)
                {
                    countO = 0;
                }
                if (countO == 5 || countX == 5)
                {
                    break;
                }
            }

            if (countX == 5)
            {
                return 1;
                break;
            }

            else if (countO == 5)
            {
                return 0;
                break;
            }
        }

        // check cross from left to right
        for (int row = 0; row < 6; row++)
        {
            for (int column = 9; column > 3; column--)
            {
                for (int i = 0; i < 5; i++)
                {
                    if (caro_board.getCaroBoard()[row + i][column - i] == 'X')
                    {
                        ++countX;
                    }
                    else if (caro_board.getCaroBoard()[row + i][column - i] == 'O')
                    {
                        ++countO;
                    }
                }
                if (countX != 5)
                {
                    countX = 0;
                }
                if (countO != 5)
                {
                    countO = 0;
                }
                if (countO == 5 || countX == 5)
                {
                    break;
                }
            }

            if (countX == 5)
            {
                return 1;
                break;
            }

            else if (countO == 5)
            {
                return 0;
                break;
            }
        }
        return 2;
    }

//    Player * getPlayer1()
//    {
//        return list_player[0];
//    }
//
//    Player * getPlayer2()
//    {
//        return list_player[1];
//    }
    Player * getListPlayer()
    {
        return list_player;
    }

    void setWinPlayer(string name)
    {
        if (list_player[0].getName().compare(name) == 0)
        {
            list_player[0].setWin();
        }
        else
        {
            list_player[1].setWin();
        }
    }

    void setDrawPlayer()
    {
        list_player[0].setDraw();
        list_player[1].setDraw();
    }

    void setLosePlayer(string name)
    {
        if (list_player[0].getName().compare(name) == 0)
        {
            list_player[0].setLose();
        }
        else
        {
            list_player[1].setLose();
        }
    }

    void addMoving(pair<Point, _player> moving)
    {
        list_move.push_back(moving);
    }

    void replayMode()
    {
        caro_board.resetCaroBoard();
        //caro_board.setCaroBoard();
        showCaroBoard();
        for (int i = 0; i < list_move.size(); i++)
        {
            system("CLS");
            updateCaroBoard(list_move[i].first, list_move[i].second);
            showCaroBoard();
            Sleep(1000);
        }
    }
    void displayPlayer()
    {
        for(int i=0;i < 2;i++){
            cout << list_player[i].toString();
        }
    }
};


#endif // CAROCONTROLLER_H_INCLUDED
