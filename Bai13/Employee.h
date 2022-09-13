#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <iostream>
#include <vector>
#include "Date.h"
using namespace std;

class Employee
{
    string id;
    string fullName;
    Date birthDay;
    string phone;
    string email;
    vector <Certificate> dsCer;
public:
    Employee(string i,string hoTen,Date ngaySinh,string sdt,string thuDienTu,vector <Certificate> ds)
    {
        id = i;
        fullName = hoTen;
        birthDay = ngaySinh;
        phone = sdt;
        email = thuDienTu;
        dsCer = ds;
    }
    string getId()
    {
        return id;
    }
    string getFullName()
    {
        return fullName;
    }
    Date getBirthDay()
    {
        return birthDay;
    }
    string getPhone()
    {
        return phone;
    }
    string getEmail()
    {
        return email;
    }
    vector <Certificate> getDsCers()
    {
        return dsCer;
    }
    void NhapCertificate(int n)
    {
        Certificate cer;
        for(int i = 0; i < n;i++){
            cin >> cer;
            dsCer.push_back(cer);
        }
    }
    void addCertificate(Certificate cer)
    {
        dsCer.push_back(cer);
    }
    string showCertificate()
    {
        string kq;
        for(auto &cer : dsCer){
            kq = kq + cer.CerToString();
        }
        return kq;
    }
    virtual string toString()
    {
        return getId() + " | " + getFullName() + " | " + getBirthDay().DateToString() + " | " + getPhone() + " | " + getEmail() + "\n"
        + "\t Certificate:" + showCertificate() + "\n";
    }
};


#endif // EMPLOYEE_H_INCLUDED
