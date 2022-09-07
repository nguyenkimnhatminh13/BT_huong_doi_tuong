#ifndef TAILIEU_H_INCLUDED
#define TAILIEU_H_INCLUDED
#include <iostream>
using namespace std;

class TaiLieu
{
    private:
        string id;
        string nxb;
        int num;
    public:
        TaiLieu(string maSo,string nhaXuatBan,int soBan)
        {
            id = maSo;
            nxb = nhaXuatBan;
            num = soBan;
        }
        string getId()
        {
            return id;
        }
        void setId(string maSo)
        {
            id = maSo;
        }

        string getNxb()
        {
            return nxb;
        }
        void setNxb(string nhaXuatBan)
        {
            nxb = nhaXuatBan;
        }

        int getNum()
        {
            return num;
        }
        void setNum(int soBan)
        {
            num = soBan;
        }

        virtual string toString()
        {
            return getId() + "| " + getNxb() + "| " + to_string(getNum()) + "\n";
        }
};


#endif // TAILIEU_H_INCLUDED
