#ifndef TUYENSINH_H_INCLUDED
#define TUYENSINH_H_INCLUDED
#include <iostream>
#include <vector>
#include "ThiSinh.h"
#include "ThiSinhKhoiA.h"
#include "ThiSinhKhoiB.h"
#include "ThiSinhKhoiC.h"
using namespace std;
class TuyenSinh
{
    vector <ThiSinh*> tuyensinh;
    public:
        void ThemThiSinh(ThiSinh &ts) {
            tuyensinh.push_back(&ts);
        }

        void TimTheoSoBaoDanh(string id) {
            int i = 0;
            for (auto &ts : tuyensinh){
                if(id == ts->getId()){
                    cout << ts->toString();
                    i++;
                }
            }
            if(i == 0){
                cout << "Khong Ton tai Thi sinh co ID = " << id <<endl;
            }
        }

        void HienThiDanhSach() {
            for (auto &ts : tuyensinh){
                cout << ts->toString();
            }
        }
};

#endif // TUYENSINH_H_INCLUDED
