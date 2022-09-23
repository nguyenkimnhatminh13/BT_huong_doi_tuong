#ifndef CAROBOARDVIEW_H_INCLUDED
#define CAROBOARDVIEW_H_INCLUDED
#include <iostream>
#include <fstream>
#include "../model/Player.h"
using namespace std;

class CaroBoardView
{
public:
    CaroBoardView(){}
    void showCaroBoard(char **caro_board)
    {
        cout << "Player 1 <X> - Player 2 <O>" << endl;
        cout << "------------------------------------------"  << endl;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << "| " << caro_board[i][j] << " ";
            }
            cout << "|" << endl;
            cout << "------------------------------------------" << endl;
        }
    }
    void save(Player *listPlayer)
    {
        ofstream fout;
        fout.open("history.txt", ios::app);
        for (int i = 0; i < 2; i++)
        {
            fout << "name: " << listPlayer[i].getName() << endl;
            fout << "Win: " << listPlayer[i].getWin() << endl;
            fout << "Draw: " << listPlayer[i].getDraw() << endl;
            fout << "Lose: " << listPlayer[i].getLose() << endl;
        }
        cout << "---------------------" << endl;
        // Close the File
        fout.close();
    }
};


#endif // CAROBOARDVIEW_H_INCLUDED
