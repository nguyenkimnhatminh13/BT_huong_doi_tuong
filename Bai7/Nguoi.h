#ifndef NGUOI_H_INCLUDED
#define NGUOI_H_INCLUDED
#include <iostream>
using namespace std;

class Nguoi
{
    string hoTen;
    int tuoi;
    string queQuan;
    string id;

    double luongCung;
    double tienPhat;
    double luongThuong;

public:
    Nguoi(string name,int age,string hometown,string i,double salary,double penalty,double bonus)
    {
        hoTen = name;
        tuoi = age;
        queQuan = hometown;
        id = i;
        luongCung = salary;
        tienPhat = penalty;
        luongThuong = bonus;

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
    string getId()
    {
        return id;
    }
    double getSalary()
    {
        return luongCung;
    }
    double getBonus()
    {
        return luongThuong;
    }
    double getPenalty()
    {
        return tienPhat;
    }
    string toString()
    {
        return getName() + " | " + to_string(getAge()) + " | " + getHometown() + " | " + getId() + "\n";
    }
};


#endif // NGUOI_H_INCLUDED
