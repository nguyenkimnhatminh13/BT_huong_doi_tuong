#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;
public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    Date(int d,int m,int y)
    {
        day = d;
        month = m;
        year = y;
    }
    friend ostream & operator << (ostream &out, const Date &dt)
    {
        out << dt.day << "/" << dt.month << "/" << dt.year;
        return out;
    }
    friend istream & operator >> (istream &in, Date &dt)
    {
        cout << "\n";
        cout << "- Nhap ngay: "; in >> dt.day;
        cout << "- Nhap thang: "; in >> dt. month;
        cout << "- Nhap nam: "; in >> dt.year;
        return in;
    }
    string DateToString()
    {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
};


#endif // DATE_H_INCLUDED
