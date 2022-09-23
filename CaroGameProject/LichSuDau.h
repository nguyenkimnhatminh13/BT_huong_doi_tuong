#ifndef LICHSUDAU_H_INCLUDED
#define LICHSUDAU_H_INCLUDED
#include <iostream>
#include <vector>
#include "./model/Player.h"
using namespace std;
class LichSuDau
{
public:
    vector <Player *> lichSuDau;
    vector <Player *> HoSoNgChoi;

    bool checkPlayerExisted(string name)
    {
        for (auto &i : HoSoNgChoi){
            if(name == i->getName()){
                return true;
            }
        }
        return false;
    }

    void addPlayer_LichSuDau(Player *p)
    {
        lichSuDau.push_back(p);
    }

    void displayDs()
    {
        for(auto &i : lichSuDau){
            cout << i->toString();
        }
        cout << "---------------" << endl;
    }

    void SetHoSoNgChoi()
    {
        HoSoNgChoi.clear();
        int winCount,loseCount,drawCount;
        for(int i=0;i < lichSuDau.size();i++){
            winCount = lichSuDau[i]->getWin();
            loseCount = lichSuDau[i]->getLose();
            drawCount = lichSuDau[i]->getDraw();
            if(checkPlayerExisted(lichSuDau[i]->getName())){
                continue;
            }
            for(int j=i+1;j < lichSuDau.size();j++){
                if(lichSuDau[i]->getName() == lichSuDau[j]->getName()){
                    winCount = winCount + lichSuDau[j]->getWin();
                    loseCount = loseCount + lichSuDau[j]->getLose();
                    drawCount = drawCount + lichSuDau[j]->getDraw();
                }
            }
            Player *p = new Player(lichSuDau[i]->getName(),winCount,loseCount,drawCount);
            //cout << p->toString();
            HoSoNgChoi.push_back(p);
            winCount = loseCount = drawCount = 0;
        }
    }

    void displayHoSo()
    {
        for(auto &i : HoSoNgChoi){
            cout << i->toString();
        }
        cout << "---------------" << endl;
    }
};


#endif // LICHSUDAU_H_INCLUDED
