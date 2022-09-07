#ifndef THISINHKHOIC_H_INCLUDED
#define THISINHKHOIC_H_INCLUDED
#include <iostream>
#include "ThiSinh.h"
using namespace std;

class ThiSinhKhoiC : public ThiSinh
{
    string monVan = "Van";
    string monSu = "Su";
    string monDia = "Dia";
    public:
        ThiSinhKhoiC(string id,string name,string address,int priority) : ThiSinh(id,name,address,priority){}
        string toString()
        {
            return "Khoi C: " + monVan + " - " + monSu + " - " + monDia + "| " + getId() + "| " + getName() + "| " + getAddress() + "| " + to_string(getPriority()) + "\n";
        }
};


#endif // THISINHKHOIC_H_INCLUDED
