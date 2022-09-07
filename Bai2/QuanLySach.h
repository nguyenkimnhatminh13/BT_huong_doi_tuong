#ifndef QUANLYSACH_H_INCLUDED
#define QUANLYSACH_H_INCLUDED
#include <iostream>
#include "TaiLieu.h"
#include <vector>

class QuanLySach
{
    vector <TaiLieu*> qls;
    public:
        void ThemTaiLieu(TaiLieu &tl) {
            qls.push_back(&tl);
        }
        void XoaTaiLieu(string maSo){
            int i = 0;
            for(auto &tl : qls){
                if(maSo == tl->getId()){
                    qls.erase(qls.begin()+i);
                    cout << "Xoa " << maSo << " thanh cong" << endl;
                    break;
                }
                ++i;
                if(i >= qls.size()){
                    cout << "Ma So khong ton tai" <<endl;
                }
            }
        }


        void TimTheoTheLoai(string theLoai) {
            for (auto &tl : qls){
                split(tl->toString,' ');
                if(name == cb->getName()){
                    cout << cb->toString();
                }
            }
        }

        void HienThiDanhSach() {
            for (auto &tl : qls){
                cout << tl->toString();
            }
        }
};

#endif // QUANLYSACH_H_INCLUDED
