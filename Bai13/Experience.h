#ifndef EXPERIENCE_H_INCLUDED
#define EXPERIENCE_H_INCLUDED
#include <iostream>
#include "Employee.h"
using namespace std;

class Experience : public Employee
{
    int explnYear;
    string proSkill;
public:
    Experience(string i,string hoTen,Date ngaySinh,string sdt,string thuDienTu,vector <Certificate> ds,int namKinhNghiem,string skill)
    : Employee(i,hoTen,ngaySinh,sdt,thuDienTu,ds)
    {
        explnYear = namKinhNghiem;
        proSkill = skill;
    }
    int getExplnYear()
    {
        return explnYear;
    }
    string getProSkill()
    {
        return proSkill;
    }
    string toString()
    {
        return "Experience: {" + to_string(getExplnYear()) + ";" + getProSkill() + "} || "+ getId() + " | " + getFullName() + " | " + getBirthDay().DateToString() + " | " + getPhone() + " | " + getEmail() + "\n"
        + "\t Certificate:" + showCertificate();
    }

};


#endif // EXPERIENCE_H_INCLUDED
