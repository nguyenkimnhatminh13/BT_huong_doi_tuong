#ifndef THISINHKHOIA_H_INCLUDED
#define THISINHKHOIA_H_INCLUDED
#include <iostream>
#include "ThiSinh.h"
using namespace std;

class ThiSinhKhoiA : public ThiSinh
{
    string monToan = "Toan";
    string monLy = "Ly";
    string monHoa = "Hoa";
    public:
        ThiSinhKhoiA(string id,string name,string address,int priority) : ThiSinh(id,name,address,priority){}
        string toString()
        {
            return "Khoi A: " + monToan + " - " + monLy + " - " + monHoa + "| " + getId() + "| " + getName() + "| " + getAddress() + "| " + to_string(getPriority()) + "\n";
        }
};


#endif // THISINHKHOIA_H_INCLUDED
