#ifndef NGUOI_H_INCLUDED
#define NGUOI_H_INCLUDED
#include <iostream>
#include "Phong.h"

using namespace std;
class Nguoi
{
    string hoTen;
    int tuoi;
    string cmnd;
    Phong *phong;
    int soNgayThue;
    public:
        Nguoi(string name,int age,string id,Phong *room,int num)
        {
            hoTen = name;
            tuoi = age;
            cmnd = id;
            phong = room;
            soNgayThue = num;
        }
        string getName()
        {
            return hoTen;
        }
        int getAge()
        {
            return tuoi;
        }
        string getId()
        {
            return cmnd;
        }
        Phong getRoom()
        {
            return *phong;
        }
        int getSoNgayThue()
        {
            return soNgayThue;
        }
        string toString()
        {
            return getName() + " | " + to_string(getAge()) + " | " + getId() + " | " + getRoom().toString() + " | " + to_string(getSoNgayThue()) + "\n";
        }
};



#endif // NGUOI_H_INCLUDED
