#include <iostream>
#include "HocSinh.h"
#include "TruongHoc.h"

using namespace std;

int main()
{
    TruongHoc trgHoc;
    /*
    HocSinh a("Nhat Minh",13,"HN",10);
    HocSinh b("Nha",23,"DN",12);
    HocSinh c("Kim",23,"DN",12);
    trgHoc.add(a);
    trgHoc.add(b);
    trgHoc.add(c);
    trgHoc.countStudent23AndDN();
    */
    int type1;
    while(true){
        int type1;
        cout << "-----------------------------" <<endl;
        cout << "Ung dung Quan ly Hoc Sinh" << endl;
        cout << "Nhap 1: Them Hoc Sinh" << endl;
        cout << "Nhap 2: Tim Hoc Sinh 20 tuoi" << endl;
        cout << "Nhap 3: Dem So Hoc Sinh 23 tuoi va Que o DN: " << endl;
        cout << "Nhap 4: Thoat" <<endl;
        cout << "Nhap: "; cin >> type1;
        switch(type1)
        {
            case 1:
                {
                    string name,hometown;
                    int age,classStudent;
                    fflush(stdin);
                    cout << "Nhap ten: "; getline(cin,name);
                    cout << "Nhap tuoi: "; cin >> age;
                    fflush(stdin);
                    cout << "Nhap Que quan: "; getline(cin,hometown);
                    fflush(stdin);
                    cout << "Nhap lop: "; cin >> classStudent;
                    HocSinh a(name, age, hometown, classStudent);
                    trgHoc.add(a);
                    cout << "Da them 1 Hoc Sinh!!" <<endl;
                    break;

                }
            case 2:
                {
                    trgHoc.getStudent20yearsOld();
                    break;
                }
            case 3:
                {
                    trgHoc.countStudent23AndDN();
                    break;
                }
            case 4:
                return 0;
            default:
                {
                    cout << "Invalid"<<endl;
                    break;
                }
        }
    }
}
