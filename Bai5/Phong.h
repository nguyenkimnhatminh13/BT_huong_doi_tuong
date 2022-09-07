#ifndef PHONG_H_INCLUDED
#define PHONG_H_INCLUDED
#include <iostream>
using namespace std;

class Phong
{
    string loai;
    int gia;
    public:
        Phong(string category, int price)
        {
            loai = category;
            gia = price;
        }
        string getCategory()
        {
            return loai;
        }
        int getPrice()
        {
            return gia;
        }
        virtual string toString()
        {
            return "{" + getCategory() + ", " + to_string(getPrice()) + "}";
        }
};

#endif // PHONG_H_INCLUDED
