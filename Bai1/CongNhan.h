#ifndef CONGNHAN_H_INCLUDED
#define CONGNHAN_H_INCLUDED
#include "CanBo.h"
class CongNhan : public CanBo
{
    int bac;
    public:
        CongNhan(string name,int age,string gender,string address,int level):CanBo(name,age,gender,address)
        {
            bac = level;
        }
        string toString() override
        {
            return "Cong Nhan: 'Bac " + to_string(bac) + "'| " + getName() + "| " + to_string(getAge()) + "| " + getGender() + "| " + getAddress() + "\n";
        }
};

#endif // CONGNHAN_H_INCLUDED
