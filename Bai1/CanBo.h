#ifndef CANBO_H_INCLUDED
#define CANBO_H_INCLUDED
#include <iostream>
using namespace std;
class CanBo
{
    private:
        string hoTen;
        int tuoi;
        string gioiTinh;
        string diaChi;
    public:
        CanBo(string name,int age,string gender,string address)
        {
            hoTen = name;
            tuoi = age;
            gioiTinh = gender;
            diaChi = address;
        }
        string getName()
        {
            return hoTen;
        }
        void setName(string name)
        {
            hoTen = name;
        }

        int getAge()
        {
            return tuoi;
        }
        void setAge(int age)
        {
            tuoi = age;
        }

        string getGender()
        {
            return gioiTinh;
        }
        void setGender(string gender)
        {
            gioiTinh = gender;
        }

        string getAddress()
        {
            return diaChi;
        }
        void setAddress(string address)
        {
            diaChi = address;
        }
        virtual string toString()
        {
            return getName() + "| " + to_string(getAge()) + "| " + getGender() + "| " + getAddress() + "\n";
        }
};

#endif // CANBO_H_INCLUDED
