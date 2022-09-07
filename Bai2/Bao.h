#ifndef BAO_H_INCLUDED
#define BAO_H_INCLUDED
#include <iostream>
#include "TaiLieu.h"
using namespace std;

class Bao : public TaiLieu
{
    int dayIssue;
    public:
        Bao(string maSo,string nhaXuatBan,int soBan,int ngayPhatHanh):TaiLieu(maSo,nhaXuatBan,soBan)
        {
            dayIssue = ngayPhatHanh;
        }
        int getDayIssue()
        {
            return dayIssue;
        }
        void setDayIssue(int ngayPhatHanh)
        {
            dayIssue = ngayPhatHanh;
        }

        string toString()
        {
            return "Bao:'" + to_string(getDayIssue()) + "'|| " + getId() + "| " + getNxb() + "| " + to_string(getNum()) + "| \n";
        }
};


#endif // BAO_H_INCLUDED
