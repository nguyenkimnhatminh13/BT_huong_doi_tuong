#ifndef HOCSINH_H_INCLUDED
#define HOCSINH_H_INCLUDED
#include <iostream>
using namespace std;
class HocSinh
{
    string hoTen;
    int tuoi;
    string queQuan;
    int lop;
    public:
        HocSinh(string name,int age,string hometown,int studentClass)
        {
            hoTen = name;
            tuoi = age;
            queQuan = hometown;
            lop = studentClass;
        }
        string getName()
        {
            return hoTen;
        }
        int getAge()
        {
            return tuoi;
        }
        string getHometown()
        {
            return queQuan;
        }
        int getStudentClass()
        {
            return lop;
        }
        string toString()
        {
            return getName() + " | " + to_string(getAge()) + " | " + getHometown() + " | " + to_string(getStudentClass()) + "\n";
        }
};


#endif // HOCSINH_H_INCLUDED
