#ifndef KHACHSAN_H_INCLUDED
#define KHACHSAN_H_INCLUDED
#include <iostream>
#include <vector>
#include "Nguoi.h"
#include "Phong.h"
#include "PhongA.h"
#include "PhongB.h"
#include "PhongC.h"
using namespace std;

class KhachSan
{
    vector <Nguoi> people;

    public:
        void add(Nguoi ng)
        {
            people.push_back(ng);
        }
        void del(string id)
        {
            int i = 0;
            for(auto &p : people){
                if(id == p.getId()){
                    people.erase(people.begin()+i);
                    cout << "Xoa ID = " << id << " thanh cong" << endl;
                    break;
                }
                ++i;
                if(i >= people.size()){
                    cout << "ID khong ton tai" <<endl;
                }
            }
        }
        int cal(string id)
        {
            int i = 0;
            for (auto &ng : people){
                if(ng.getId() == id){
                    return ng.getRoom().getPrice() * ng.getSoNgayThue();
                    i++;
                }
            }
            if(i == 0){
                cout << "Khong ton tai ID = " << id <<endl;
            }
        }
        void show()
        {
            for (auto &ng : people){
                cout << ng.toString();
            }
        }
};

#endif // KHACHSAN_H_INCLUDED
