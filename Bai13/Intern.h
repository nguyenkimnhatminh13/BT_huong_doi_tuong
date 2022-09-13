#ifndef INTERN_H_INCLUDED
#define INTERN_H_INCLUDED
#include <iostream>
#include "Employee.h"
using namespace std;

class Intern : public Employee
{
    string majors;
    string semester;
    string universityName;
public:
    Intern(string i,string hoTen,Date ngaySinh,string sdt,string thuDienTu,vector <Certificate> ds, string maj,string kiHoc,string trgDH)
    : Employee(i,hoTen,ngaySinh,sdt,thuDienTu,ds)
    {
        majors = maj;
        semester = kiHoc;
        universityName = trgDH;
    }
    string getMajors()
    {
        return majors;
    }
    string getSemester()
    {
        return semester;
    }
    string getUniversityName()
    {
        return universityName;
    }
    string toString()
    {
        return "Intern: {" + getMajors() + ";" + getSemester() + ";" + getUniversityName() + "} || " + getId() + " | " + getFullName() + " | " + getBirthDay().DateToString() + " | " + getPhone() + " | " + getEmail() + "\n"
        + "\t Certificate:" + showCertificate();
    }
};

#endif // INTERN_H_INCLUDED
