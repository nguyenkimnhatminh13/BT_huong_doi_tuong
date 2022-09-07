#ifndef KHUPHO_H_INCLUDED
#define KHUPHO_H_INCLUDED
#include <iostream>
#include <vector>
#include "HoGiaDinh.h"
class KhuPho
{
    vector <HoGiaDinh> khupho;
    public:
        vector<HoGiaDinh> getTown()
        {
            return khupho;
        }
//        void setTown(vector <HoGiaDinh> town)
//        {
//            khupho = town;
//        }
        void themGiaDinh(HoGiaDinh family)
        {
            khupho.push_back(family);
        }
        void ShowKhuPho()
        {
            for(auto &family : khupho){
                family.ShowHoGiaDinh();
                cout << "--------------" <<endl;
            }
        }
};

#endif // KHUPHO_H_INCLUDED
