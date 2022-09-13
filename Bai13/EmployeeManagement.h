#ifndef EMPLOYEEMANAGEMENT_H_INCLUDED
#define EMPLOYEEMANAGEMENT_H_INCLUDED
#include <iostream>
#include "Employee.h"
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"
#include <vector>
using namespace std;

class EmployeeManagement
{
    vector <Employee*> ds;
public:
    void addEmployee(Employee &em)
    {
        ds.push_back(&em);
    }
    void showDanhSach()
    {
        for(auto &em : ds){
            cout << em->toString();
        }
    }
};

#endif // EMPLOYEEMANAGEMENT_H_INCLUDED
