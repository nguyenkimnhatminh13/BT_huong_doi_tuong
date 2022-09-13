#include <iostream>
#include <vector>
#include "Certificate.h"
#include "Employee.h"
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"
#include "Date.h"
#include "EmployeeManagement.h"
using namespace std;

int main()
{
    EmployeeManagement ds;

    Certificate cer1("123","Tot Nghiep BKHN","Gioi",Date(12,3,2005));
    Certificate cer2("125","Tot Nghiep NN","Kha",Date(22,7,2015));
    Certificate cer3("136","Tot Nghiep KTQD","TB",Date(16,8,2002));
    vector <Certificate> aCer;
    vector <Certificate> bCer;

    Experience a("nv235","Nguyen Kim",Date(21,5,1999),"095542156","nhatminh@gmail",aCer,5,"Anten");
    a.addCertificate(cer1);
    ds.addEmployee(a);
    ds.showDanhSach();
    return 0;
}
