#ifndef THISINHKHOIB_H_INCLUDED
#define THISINHKHOIB_H_INCLUDED
#include <iostream>
#include "ThiSinh.h"
using namespace std;

class ThiSinhKhoiB : public ThiSinh
{
    string monToan = "Toan";
    string monHoa = "Hoa";
    string monSinh = "Sinh";
    public:
        ThiSinhKhoiB(string id,string name,string address,int priority) : ThiSinh(id,name,address,priority){}
        string toString()
        {
            return "Khoi B: " + monToan + " - " + monHoa + " - " + monSinh + "| " + getId() + "| " + getName() + "| " + getAddress() + "| " + to_string(getPriority()) + "\n";
        }
};


#endif // THISINHKHOIB_H_INCLUDED
