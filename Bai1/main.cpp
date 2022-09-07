#include <iostream>
#include <vector>
#include "CanBo.h"
#include "CongNhan.h"
#include "KySu.h"
#include "NhanVien.h"
#include "QuanLyCanBo.h"
using namespace std;

int main()
{
    QuanLyCanBo ds;
/*    NhanVien a("NhatMinh",16,"Nam","42 ADV","Seller");
    KySu b("VietAnh",18,"Nu","Nghe An","IT");
    CongNhan c("NhatMinh",17,"Nu","HN",8);
    KySu d("NhatMinh",18,"Nam","HP","Anten");

    ds.ThemCanBo(a);
    ds.ThemCanBo(b);
    ds.ThemCanBo(c);
    ds.ThemCanBo(d);
*/
    int type1;
    while(true){
        int type1;
        cout << "-----------------------------" <<endl;
        cout << "Ung dung Quan ly Can Bo" << endl;
        cout << "Nhap 1: Them Can Bo" << endl;
        cout << "Nhap 2: Tim Can Bo theo ten" << endl;
        cout << "Nhap 3: Hien thi Danh sach" << endl;
        cout << "Nhap 4: Thoat" <<endl;
        cout << "Nhap: "; cin >> type1;
        switch(type1)
        {
            case 1:
                {
                    cout << "Nhap a: Them Cong Nhan" << endl;
                    cout << "Nhap b: Them Ky Su" << endl;
                    cout << "Nhap c: Them Nhan Vien" << endl;
                    char type2;
                    cout << "Nhap:"; cin >> type2;
                    switch(type2)
                    {
                        case 'a':
                            {
                                string name,gender,address;
                                int age,level;
                                fflush(stdin);
                                cout << "Nhap ten: "; getline(cin,name);
                                cout << "Nhap tuoi: "; cin >> age;
                                cout << "Nhap gioi tinh: "; cin >> gender;
                                fflush(stdin);
                                cout << "Nhap dia chi: "; getline(cin,address);
                                cout << "Nhap bac (1~10): "; cin >> level;
                                CanBo *a = new CongNhan(name, age, gender, address, level);
                                ds.ThemCanBo(*a);
                                cout << "Da them 1 Cong Nhan!!" <<endl;
                                break;
                            }
                        case 'b':
                            {
                                string name,gender,address,field;
                                int age;
                                fflush(stdin);
                                cout << "Nhap ten: "; getline(cin,name);
                                cout << "Nhap tuoi: "; cin >> age;
                                cout << "Nhap gioi tinh: "; cin >> gender;
                                fflush(stdin);
                                cout << "Nhap dia chi: "; getline(cin,address);
                                cout << "Nhap nganh dao tao: "; getline(cin,field);
                                CanBo *a = new KySu(name, age, gender, address, field);
                                ds.ThemCanBo(*a);
                                cout << "Da them 1 Ky Su!!" <<endl;
                                break;
                            }
                        case 'c':
                            {
                                string name,gender,address,work;
                                int age;
                                fflush(stdin);
                                cout << "Nhap ten: "; getline(cin,name);
                                cout << "Nhap tuoi: "; cin >> age;
                                cout << "Nhap gioi tinh: "; cin >> gender;
                                fflush(stdin);
                                cout << "Nhap dia chi: "; getline(cin,address);
                                cout << "Nhap cong viec: "; getline(cin,work);
                                CanBo *a = new NhanVien(name, age, gender, address, work);
                                ds.ThemCanBo(*a);
                                cout << "Da them 1 Nhan Vien!!" <<endl;
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
                    string s;
                    cout << "Nhap ten tim kiem: "; cin >> s;
                    ds.TimTheoHoTen(s);
                    break;
                }
            case 3:
                {
                    ds.HienThiDanhSach();
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
