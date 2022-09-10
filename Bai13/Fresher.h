#ifndef FRESHER_H_INCLUDED
#define FRESHER_H_INCLUDED
#include <iostream>
#include "Employee.h"
using namespace std;

class Fresher : public Employee
{
    string graduationDate;
    string graduationRank;
    string education;
};

#endif // FRESHER_H_INCLUDED
