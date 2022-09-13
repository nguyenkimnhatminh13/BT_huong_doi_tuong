#ifndef FRESHER_H_INCLUDED
#define FRESHER_H_INCLUDED
#include <iostream>
#include "Employee.h"
using namespace std;

class Fresher : public Employee
{
    Date graduationDate;
    string graduationRank;
    string education;
public:
    Fresher(string i,string hoTen,Date ngaySinh,string sdt,string thuDienTu,vector <Certificate> ds, Date graDt,string graRk,string edu)
    : Employee(i,hoTen,ngaySinh,sdt,thuDienTu,ds)
    {
        graduationDate = graDt;
        graduationRank = graRk;
        education = edu;
    }
    Date getGraduationDate()
    {
        return graduationDate;
    }
    string getGraduationRank()
    {
        return graduationRank;
    }
    string getEducation()
    {
        return education;
    }
    string toString()
    {
        return "Fresher: {" + getGraduationDate().DateToString() + ";" + getGraduationRank() + ";" + getEducation() + "} || " + getId() + " | " + getFullName() + " | " + getBirthDay().DateToString() + " | " + getPhone() + " | " + getEmail() + "\n"
        + "\t Certificate:" + showCertificate()+ "\n";
    }
};

#endif // FRESHER_H_INCLUDED
