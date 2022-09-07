#ifndef THISINH_H_INCLUDED
#define THISINH_H_INCLUDED
#include <iostream>
using namespace std;

class ThiSinh
{
    private:
        string soBaoDanh;
        string hoTen;
        string diaChi;
        int mucUuTien;
    public:
        ThiSinh(string id,string name,string address,int priority)
        {
            soBaoDanh = id;
            hoTen = name;
            diaChi = address;
            mucUuTien = priority;
        }
        string getId()
        {
            return soBaoDanh;
        }
        void setId(string id)
        {
            soBaoDanh = id;
        }

        string getName()
        {
            return hoTen;
        }
        void setName(string name)
        {
            hoTen = name;
        }

        string getAddress()
        {
            return diaChi;
        }
        void setAddress(string address)
        {
            diaChi = address;
        }

        int getPriority()
        {
            return mucUuTien;
        }
        void setPriority(int priority)
        {
            mucUuTien = priority;
        }
        virtual string toString()
        {
            return getId() + "| " + getName() + "| " + getAddress() + "| " + to_string(getPriority()) + "\n";
        }
};


#endif // THISINH_H_INCLUDED
