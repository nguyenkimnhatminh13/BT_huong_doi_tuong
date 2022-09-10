#ifndef TRUONGHOC_H_INCLUDED
#define TRUONGHOC_H_INCLUDED
#include <iostream>
#include <vector>
#include "HocSinh.h"
using namespace std;

class TruongHoc
{
    vector <HocSinh> truongHoc;
    public:
        void add(HocSinh hs)
        {
            truongHoc.push_back(hs);
        }
        void getStudent20yearsOld()
        {
            for (auto &hs : truongHoc){
                if(hs.getAge() == 20){
                    cout << hs.toString();
                }
            }
        }
        int countStudent23AndDN()
        {
            int dem = 0;
            for (auto &hs : truongHoc){
                if(hs.getAge() == 23 & hs.getHometown() == "DN"){
                    cout << hs.toString();
                    dem++;
                }
            }
            cout << "So Hoc sinh: " << dem << endl;
        }

        void HienThiDanhSach() {
            for (auto &hs : truongHoc){
                cout << hs.toString();
            }
        }
};


#endif // TRUONGHOC_H_INCLUDED
