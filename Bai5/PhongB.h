#ifndef PHONGB_H_INCLUDED
#define PHONGB_H_INCLUDED
#include <iostream>
#include "Phong.h"
using namespace std;

class PhongB : public virtual Phong
{
public:
    PhongB() : Phong("B",300){}
    string toString()
    {
        return "{" + getCategory() + ", " + to_string(getPrice()) + "}";
    }
};


#endif // PHONGB_H_INCLUDED
