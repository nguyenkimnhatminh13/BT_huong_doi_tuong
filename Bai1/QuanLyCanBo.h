#ifndef QUANLYCANBO_H_INCLUDED
#define QUANLYCANBO_H_INCLUDED
#include "CanBo.h"
class QuanLyCanBo
{
    vector <CanBo*> qlcb;
    public:
        void ThemCanBo(CanBo &cb) {
            qlcb.push_back(&cb);
        }

        void TimTheoHoTen(string name) {
            for (auto &cb : qlcb){
                if(name == cb->getName()){
                    cout << cb->toString();
                }
            }
        }

        void HienThiDanhSach() {
            for (auto &cb : qlcb){
                cout << cb->toString();
            }
        }
};

#endif // QUANLYCANBO_H_INCLUDED
