#include <iostream>
#include "./model/Point.h"
#include "./model/Player.h"
#include "./model/CaroBoard.h"
#include "./view/CaroBoardView.h"
#include "./controller/CaroController.h"
#include "LichSuDau.h"

using namespace std;

int main()
{
    LichSuDau ds;
    while(1){
        int control;
        cout << "1)Play" << endl;
        cout << "2)Show Ho So Ng Choi" << endl;
        cout << "3)Exit" << endl;
        cout << "Nhap:"; cin >> control;
        if(control == 1)
        {
            string name;
            Player *listPlayer = new Player[2];
            Point point;

            cout << "Nhap ten Player1: ";
            cin >> name;
            listPlayer[0].setName(name);
            cout << "Nhap ten Player2: ";
            cin >> name;
            listPlayer[1].setName(name);

            CaroBoard caroBoard;
            CaroBoardView caroBoardView;
            CaroController management(caroBoard, listPlayer, caroBoardView);

            ds.addPlayer_LichSuDau(&listPlayer[0]);
            ds.addPlayer_LichSuDau(&listPlayer[1]);
            management.showCaroBoard();
            while (1)
            {
                if (management.getCaroBoard().getCnt() == 100)
                {
                    cout << "------Draw------";
                    management.setDrawPlayer();
                    break;
                }
            inputAgain:
                cout << endl
                     << "player 1 Turn: ";

                cin >> point.x >> point.y;

                system("CLS");
                if (management.checkBlank(point) == true)
                {
                    management.updateCaroBoard(point, _player1);
                    management.getCaroBoard().setCnt();
                    management.showCaroBoard();
                    pair<Point, _player> moving(point, _player1);
                    management.addMoving(moving);
                    if (management.result() == 1)
                    {
                        management.setWinPlayer(listPlayer[0].getName());
                        management.setLosePlayer(listPlayer[1].getName());
                        cout << "Player 1 win" << endl;
                        break;
                    }
                }
                else
                {
                    goto inputAgain;
                }
            inputAgain2:
                cout << endl
                     << "player 2 Turn: ";
                cin >> point.x >> point.y;

                system("CLS");
                if (management.checkBlank(point) == true)
                {
                    management.updateCaroBoard(point, _player2);
                    management.getCaroBoard().setCnt();
                    pair<Point, _player> moving(point, _player2);
                    management.addMoving(moving);
                    management.showCaroBoard();
                    if (management.result() == 0)
                    {
                        management.setWinPlayer(listPlayer[1].getName());
                        management.setLosePlayer(listPlayer[0].getName());
                        cout << "Player 2 win" << endl;
                        break;
                    }
                }
                else
                {
                    goto inputAgain2;
                }
            }

            management.save(listPlayer);
            ds.SetHoSoNgChoi();
            management.resetCaroBoard();
            int xemChieuLai;
            cout << "Co xem chieu lai ko? (1=Yes, 0=No):"; cin >> xemChieuLai;
            if(xemChieuLai == 1){
                management.replayMode();
            }
        }
        else if(control == 2){
            //ds.displayDs();
            ds.displayHoSo();
        }
        else if(control == 3){
            return 0;
        }
        else{

        }
    }

    //delete listPlayer;
    //listPlayer = nullptr;
    //system("ClS");
    //management.replayMode();

    return 0;
}
