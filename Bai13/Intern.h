#ifndef INTERN_H_INCLUDED
#define INTERN_H_INCLUDED
#include <iostream>
#include "Employee.h"
using namespace std;

class Intern : public Employee
{
    string majors;
    string semester;
    string universityName;
};

#endif // INTERN_H_INCLUDED
