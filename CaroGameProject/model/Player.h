#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <iostream>
using namespace std;

enum _player{
    _player1, _player2
};

class Player
{
    string name;
    int win = 0;
    int lose = 0;
    int draw = 0;
public:
    Player(){}
    Player(string name)
    {
        this->name = name;
    }
    Player(string name,int win,int lose,int )
    {
        this->name = name;
        this->win = win;
        this->lose = lose;
        this->draw = draw;
    }
    void setDraw()
    {
        draw++;
    }
    void setWin()
    {
        win++;
    }
    void setLose()
    {
        lose++;
    }

    int getDraw()
    {
        return draw;
    }
    int getWin()
    {
        return win;
    }
    int getLose()
    {
        return lose;
    }

    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string toString()
    {
        return "Player: " + name + " | " + "Win Match: " + to_string(win) + " | "
        + "Lose Match: " + to_string(lose) + " | " + "Draw Match: " + to_string(draw) + " | \n";
    }
};


#endif // PLAYER_H_INCLUDED
