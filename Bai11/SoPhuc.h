#ifndef SOPHUC_H_INCLUDED
#define SOPHUC_H_INCLUDED
#include <iostream>
using namespace std;

class SoPhuc
{
    double phanThuc;
    double phanAo;
    public:
        SoPhuc()
        {
            phanThuc = 0;
            phanAo = 0;
        }
        SoPhuc(double real,double im)
        {
            phanThuc = real;
            phanAo = im;
        }
        double getPhanThuc()
        {
            return phanThuc;
        }
        double getPhanAo()
        {
            return phanAo;
        }

        SoPhuc operator + (SoPhuc sp)
        {
            SoPhuc kq;
            kq.phanThuc = this->phanThuc + sp.phanThuc;
            kq.phanAo = this->phanAo + sp.phanAo;
            return kq;
        }
        SoPhuc operator * (SoPhuc sp)
        {
            SoPhuc kq;
            kq.phanThuc = this->phanThuc * sp.phanThuc - this->phanAo * sp.phanAo;
            kq.phanAo = this->phanThuc * sp.phanAo + this->phanAo * sp.phanThuc;
            return kq;
        }
        friend ostream &operator << (ostream &os,SoPhuc &sp)
        {
            if(sp.phanAo >= 0){
                os << sp.phanThuc << " + j" << sp.phanAo << endl;
            }
            else{
                os << sp.phanThuc << " - j" << abs(sp.phanAo) << endl;
            }

        }
};


#endif // SOPHUC_H_INCLUDED
