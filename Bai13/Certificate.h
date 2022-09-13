#ifndef CERTIFICATE_H_INCLUDED
#define CERTIFICATE_H_INCLUDED
#include <iostream>
#include "Date.h"
using namespace std;

class Certificate
{
    string idCer;
    string nameCer;
    string rankCer;
    Date dateCer;
public:
    Certificate(string id,string name,string rk,Date dt)
    {
        idCer = id;
        nameCer = name;
        rankCer = rk;
        dateCer = dt;
    }
    string CerToString()
    {
        return "{" + idCer + ";" + nameCer + ";" + rankCer + ";" + dateCer.DateToString() + "}";
    }
};


#endif // CERTIFICATE_H_INCLUDED
