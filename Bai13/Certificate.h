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
    Certificate()
    {
        idCer = '/0';
        nameCer = '/0';
        rankCer = '/0';
        dateCer = Date();
    }
    Certificate(string id,string name,string rk,Date dt)
    {
        idCer = id;
        nameCer = name;
        rankCer = rk;
        dateCer = dt;
    }
    friend istream & operator >> (istream &in, Certificate &cer)
    {
        cout << "-----------------------------" <<endl;
        cout << "- ID of Certificate: "; in >> cer.idCer;
        fflush(stdin);
        cout << "- Name of Certificate: "; in >> cer.nameCer;
        fflush(stdin);
        cout << "- Rank of Certificate: "; in >> cer.rankCer;
        fflush(stdin);
        cout << "- Date of Certificate: "; in >> cer.dateCer;
        cout << "-----------------------------" <<endl;
        return in;
    }
    string CerToString()
    {
        return "{" + idCer + ";" + nameCer + ";" + rankCer + ";" + dateCer.DateToString() + "}";
    }
};


#endif // CERTIFICATE_H_INCLUDED
