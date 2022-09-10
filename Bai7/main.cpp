#include <iostream>
#include "Nguoi.h"
#include "QuanLyGiaoVien.h"
using namespace std;

int main()
{
    QuanLyGiaoVien qlgv;
    Nguoi ng1("Nhat Minh",31,"HN","id123",300,200,100);
    Nguoi ng2("Nha Kim",21,"HD","id179",250.87,150.8,100);
    Nguoi ng3("Na Nguyen",25,"DN","id135",250.5,100.5,100);
    qlgv.add(ng1);
    qlgv.add(ng2);
    qlgv.add(ng3);
//    qlgv.show();
//    qlgv.delById("id179");
//    qlgv.show();
    int type1;
    while(true){
        int type1;
        cout << "-----------------------------" <<endl;
        cout << "Ung dung Quan ly Hoc Sinh" << endl;
        cout << "Nhap 1: Them Giao Vien" << endl;
        cout << "Nhap 2: Xoa Giao Vien" << endl;
        cout << "Nhap 3: Tinh Luong qua ID" << endl;
        cout << "Nhap 4: Hien thi danh sach" << endl;
        cout << "Nhap 5: Thoat" <<endl;
        cout << "Nhap: "; cin >> type1;
        switch(type1)
        {
            case 1:
                {
                    string name,hometown,id;
                    int age;
                    double salary,bonus,penalty;
                    fflush(stdin);
                    cout << "Nhap ten: "; getline(cin,name);
                    cout << "Nhap tuoi: "; cin >> age;
                    fflush(stdin);
                    cout << "Nhap Que quan: "; getline(cin,hometown);
                    fflush(stdin);
                    cout << "Nhap ID: "; getline(cin,id);
                    cout << "Nhap Luong Chinh: "; cin >> salary;
                    cout << "Nhap Luong Thuong: "; cin >> bonus;
                    cout << "Nhap Tien Phat: "; cin >> penalty;
                    Nguoi a(name, age, hometown, id, salary, bonus, penalty);
                    qlgv.add(a);
                    cout << "Da them 1 Hoc Sinh!!" <<endl;
                    break;

                }
            case 2:
                {
                    string x;
                    cout << "Nhap ID can xoa: "; getline(cin,x);
                    qlgv.delById(x);
                    break;
                }
            case 3:
                {
                    string x;
                    cout << "Nhap ID can tinh luong: "; getline(cin,x);
                    qlgv.calSalaryById(x);
                    break;
                }
            case 4:
                {
                    qlgv.show();
                    break;
                }
            case 5:
                return 0;
            default:
                {
                    cout << "Invalid"<<endl;
                    break;
                }
        }
    }
    return 0;
}
