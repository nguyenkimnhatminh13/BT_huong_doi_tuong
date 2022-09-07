#ifndef KYSU_H_INCLUDED
#define KYSU_H_INCLUDED
#include "CanBo.h"
class KySu : public CanBo
{
    string nganhDaoTao;
    public:
        KySu(string name,int age,string gender,string address,string field):CanBo(name,age,gender,address)
        {
            nganhDaoTao = field;
        }
        string getField()
        {
            return nganhDaoTao;
        }
        void setField(string field)
        {
            nganhDaoTao = field;
        }
        string toString() override
        {
            return "Ky Su:'" + nganhDaoTao + "'| " + getName() + "| " + to_string(getAge()) + "| " + getGender() + "| " + getAddress() + "\n";
        }
};

#endif // KYSU_H_INCLUDED
