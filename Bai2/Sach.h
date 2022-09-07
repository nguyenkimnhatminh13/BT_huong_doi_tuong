#ifndef SACH_H_INCLUDED
#define SACH_H_INCLUDED
#include <iostream>
#include "TaiLieu.h"

class Sach : public TaiLieu
{
    string author;
    int numOfPage;
    public:
        Sach(string maSo,string nhaXuatBan,int soBan,string tacGia,int soTrang):TaiLieu(maSo,nhaXuatBan,soBan)
        {
            author = tacGia;
            numOfPage = soTrang;
        }
        string getAuthor()
        {
            return author;
        }
        void setAuthor(string tacGia)
        {
            author = tacGia;
        }
        int getNumofPage()
        {
            return numOfPage;
        }
        void setNumofPage(int soTrang)
        {
            numOfPage = soTrang;
        }
        string toString()
        {
            return "Sach:'" + getAuthor() +"; " + to_string(getNumofPage()) + "'|| " + getId() + "| " + getNxb() + "| " + to_string(getNum()) + "|\n";
        }
};

#endif // SACH_H_INCLUDED
