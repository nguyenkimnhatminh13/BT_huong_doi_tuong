#ifndef PHONGA_H_INCLUDED
#define PHONGA_H_INCLUDED
#include <iostream>
#include "Phong.h"
using namespace std;

class PhongA : public virtual Phong
{
public:
    PhongA() : Phong("A",500){}
    string toString()
    {
        return "{" + getCategory() + ", " + to_string(getPrice()) + "}";
    }
};

#endif // PHONGA_H_INCLUDED
