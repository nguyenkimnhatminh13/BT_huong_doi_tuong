#ifndef HOGIADINH_H_INCLUDED
#define HOGIADINH_H_INCLUDED
#include <iostream>
#include <vector>
#include "Nguoi.h"

class HoGiaDinh
{
    private:
        vector <Nguoi> giaDinh;
        string diaChi;
    public:
        HoGiaDinh(vector <Nguoi> family,string address)
        {
            giaDinh = family;
            diaChi = address;
        }
        vector <Nguoi> getFamily() {
            return giaDinh;
        }

        void setFamily(vector <Nguoi> family) {
            giaDinh = family;
        }

        string getAddress() {
            return diaChi;
        }

        void setAddress(string address) {
            diaChi = address;
        }
        void themNguoi(Nguoi ng)
        {
            giaDinh.push_back(ng);
        }
//        string toString()
//        {
//            return "Gia dinh nha so " getAddress + getName() + "| " + to_string(getAge()) + "| " + getJob() + "| " + getPasspost() + "\n";
//        }
        void ShowHoGiaDinh()
        {
            int i = 1;
            cout << "Gia dinh so nha " << diaChi <<endl;
            for (auto &ng : giaDinh){
                cout << "\tNguoi " << i <<endl;
                cout << "\t" << ng.toString();
                i++;
            }
        }
};


#endif // HOGIADINH_H_INCLUDED
