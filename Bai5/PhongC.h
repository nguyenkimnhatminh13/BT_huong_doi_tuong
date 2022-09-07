#ifndef PHONGC_H_INCLUDED
#define PHONGC_H_INCLUDED
#include <iostream>
#include "Phong.h"
using namespace std;

class PhongC : public virtual Phong
{
public:
    PhongC() : Phong("C",100){}
    string toString()
    {
        return "{" + getCategory() + ", " + to_string(getPrice()) + "}";
    }
};


#endif // PHONGC_H_INCLUDED
