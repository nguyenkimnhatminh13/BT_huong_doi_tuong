#ifndef QUANLYGIAOVIEN_H_INCLUDED
#define QUANLYGIAOVIEN_H_INCLUDED
#include <iostream>
#include <vector>
#include "Nguoi.h"

class QuanLyGiaoVien
{
    vector <Nguoi> qlgv;
public:
    void add(Nguoi ng)
    {
        qlgv.push_back(ng);
    }
    void delById(string id)
    {
        int i = 0;
        for(auto &gv : qlgv){
            if(id == gv.getId()){
                qlgv.erase(qlgv.begin()+i);
                cout << "Xoa " << id << " thanh cong" << endl;
                break;
            }
            ++i;
            if(i >= qlgv.size()){
                cout << "Ma So khong ton tai" <<endl;
            }
        }
    }
    double calSalaryById(string id)
    {
        int i = 0;
        for(auto &gv : qlgv){
            if(id == gv.getId()){
                return gv.getSalary() + gv.getBonus() - gv.getPenalty();
                break;
            }
            ++i;
            if(i >= qlgv.size()){
                cout << "Ma So khong ton tai" <<endl;
            }
        }
    }
    void show()
    {
        for(auto &gv : qlgv){
            cout << gv.toString();
        }
    }
};

#endif // QUANLYGIAOVIEN_H_INCLUDED
