#ifndef TAPCHI_H_INCLUDED
#define TAPCHI_H_INCLUDED
#include <iostream>
#include "TaiLieu.h"
using namespace std;

class TapChi : public TaiLieu
{
    int numIssue;
    int monthIssue;
    public:
        TapChi(string maSo,string nhaXuatBan,int soBan,int soPhatHanh,int thangPhatHanh):TaiLieu(maSo,nhaXuatBan,soBan)
        {
            numIssue = soPhatHanh;
            monthIssue = thangPhatHanh;
        }
        int getNumIssue()
        {
            return numIssue;
        }
        void setNumIssue(int soPhatHanh)
        {
            numIssue = soPhatHanh;
        }
        int getMonthIssue()
        {
            return monthIssue;
        }
        void setMonthIssue(int thangPhatHanh)
        {
            monthIssue = thangPhatHanh;
        }
        string toString()
        {
            return "Tap Chi:'" + to_string(getNumIssue()) +"; " + to_string(getMonthIssue()) + "'|| " + getId() + "| " + getNxb() + "| " + to_string(getNum()) + "| \n";
        }
};

#endif // TAPCHI_H_INCLUDED
