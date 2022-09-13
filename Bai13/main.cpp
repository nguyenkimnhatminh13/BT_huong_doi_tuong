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
/*
    Certificate cer1("123","Tot Nghiep BKHN","Gioi",Date(12,3,2005));
    Certificate cer2("125","Tot Nghiep NN","Kha",Date(22,7,2015));
    Certificate cer3("136","Tot Nghiep KTQD","TB",Date(16,8,2002));
    vector <Certificate> aCer;
    vector <Certificate> bCer;

    Experience a("nv235","Nguyen Kim",Date(21,5,1999),"095542156","nhatminh@gmail",aCer,5,"Anten");
    a.addCertificate(cer1);
    ds.addEmployee(a);
    ds.showDanhSach();
*/
    int type1;
    while(true){
        int type1;
        cout << "-----------------------------" <<endl;
        cout << "Ung dung Quan ly" << endl;
        cout << "Nhap 1: Them Nhan Vien" << endl;
        cout << "Nhap 2: Them Certificate theo ID" << endl;
        cout << "Nhap 3: Hien thi Danh sach" << endl;
        cout << "Nhap 4: Thoat" << endl;
        cout << "Nhap: "; cin >> type1;
        switch(type1)
        {
            case 1:
                {
                    cout << "Nhap a: Them Experience" << endl;
                    cout << "Nhap b: Them Fresher" << endl;
                    cout << "Nhap c: Them Intern" << endl;
                    char type2;
                    cout << "Nhap:"; cin >> type2;
                    switch(type2)
                    {
                        case 'a':
                            {
                                int n;
                                string id,name,sdt,email,skill;
                                int namKinhNghiem;
                                Date ngaySinh;
                                vector <Certificate> cers;
                                fflush(stdin);
                                cout << "Nhap ID: "; getline(cin,id);
                                cout << "Nhap ten: "; getline(cin,name);
                                fflush(stdin);
                                cout << "Nhap ngay sinh: "; cin >> ngaySinh;
                                fflush(stdin);
                                cout << "Nhap so dien thoai: "; getline(cin,sdt);
                                cout << "Nhap Email: "; getline(cin,email);
                                cout << "-----------------------" << endl;
                                cout << "Nhap nam kinh nghiem: "; cin >> namKinhNghiem;
                                fflush(stdin);
                                cout << "Nhap ProSkill: "; getline(cin,skill);
                                Employee *a = new Experience(id,name,ngaySinh,sdt,email,cers,namKinhNghiem,skill);
                                cout << "-----------------------" << endl;
                                cout << "Nhap so luong Certificate: "; cin >> n;
                                fflush(stdin);
                                a->NhapCertificate(n);
                                ds.addEmployee(*a);
                                cout << "Da them 1 Experience!!" <<endl;
                                break;
                            }
                        case 'b':
                            {
                                int n;
                                string id,name,sdt,email,skill,graRk,edu;
                                Date ngaySinh,graDate;
                                vector <Certificate> cers;
                                fflush(stdin);
                                cout << "Nhap ID: "; getline(cin,id);
                                cout << "Nhap ten: "; getline(cin,name);
                                fflush(stdin);
                                cout << "Nhap ngay sinh: "; cin >> ngaySinh;
                                fflush(stdin);
                                cout << "Nhap so dien thoai: "; getline(cin,sdt);
                                cout << "Nhap Email: "; getline(cin,email);
                                cout << "-----------------------" << endl;
                                fflush(stdin);
                                cout << "Nhap ngay tot nghiep: "; cin >> graDate;
                                fflush(stdin);
                                cout << "Nhap rank tot nghiep: "; getline(cin,graRk);
                                cout << "Nhap truong tot nghiep: "; getline(cin,edu);
                                Employee *a = new Fresher(id,name,ngaySinh,sdt,email,cers,graDate,graRk,edu);
                                cout << "-----------------------" << endl;
                                cout << "Nhap so luong Certificate: "; cin >> n;
                                fflush(stdin);
                                a->NhapCertificate(n);
                                ds.addEmployee(*a);
                                cout << "Da them 1 Fresher!!" <<endl;
                                break;
                            }
                        case 'c':
                            {
                                int n;
                                string id,name,sdt,email,skill,major,kiHoc,trgDH;
                                Date ngaySinh;
                                vector <Certificate> cers;
                                fflush(stdin);
                                cout << "Nhap ID: "; getline(cin,id);
                                cout << "Nhap ten: "; getline(cin,name);
                                fflush(stdin);
                                cout << "Nhap ngay sinh: "; cin >> ngaySinh;
                                fflush(stdin);
                                cout << "Nhap so dien thoai: "; getline(cin,sdt);
                                cout << "Nhap Email: "; getline(cin,email);
                                cout << "-----------------------" << endl;
                                cout << "Nhap Chuyen Nganh: "; getline(cin,major);
                                cout << "Nhap Ki hoc: "; getline(cin,kiHoc);
                                cout << "Nhap truong Dai Hoc: "; getline(cin,trgDH);
                                Employee *a = new Intern(id,name,ngaySinh,sdt,email,cers,major,kiHoc,trgDH);
                                cout << "-----------------------" << endl;
                                cout << "Nhap so luong Certificate: "; cin >> n;
                                fflush(stdin);
                                a->NhapCertificate(n);
                                ds.addEmployee(*a);
                                cout << "Da them 1 Experience!!" <<endl;
                                break;
                            }
                        default:
                            {
                                cout << "Invalid"<<endl;
                                break;
                            }
                    }
                    break;
                }
            case 2:
                {
//                    string s;
//                    cout << "Nhap ten tim kiem: "; cin >> s;
//                    ds.TimTheoHoTen(s);
                    break;
                }
            case 3:
                {
                    ds.showDanhSach();
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

    return 0;
}
