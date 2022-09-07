#include <iostream>
#include "ThiSinh.h"
#include "ThiSinhKhoiA.h"
#include "ThiSinhKhoiB.h"
#include "ThiSinhKhoiC.h"
#include "TuyenSinh.h"
using namespace std;

int main()
{
    TuyenSinh ts;
    ThiSinhKhoiA a("A123","Nhat Minh","42 ADV",0);
    ThiSinhKhoiB b("B124","Lam Phuong","60 Tay Ho",1);
    ThiSinhKhoiC c("C126","Kim Nhat","12 HP",2);
    ThiSinhKhoiB d("B135","Thanh Dat","30 Dong Tac",0);
    ThiSinhKhoiC e("C136","Viet Anh","Tay Ho,HN",1);

    ts.ThemThiSinh(a);
    ts.ThemThiSinh(b);
    ts.ThemThiSinh(c);
    ts.ThemThiSinh(d);
    ts.ThemThiSinh(e);

    int type1;
    while(true){
        int type1;
        cout << "-----------------------------" <<endl;
        cout << "Ung dung Quan ly Tuyen Sinh" << endl;
        cout << "Nhap 1: Them Thi Sinh" << endl;
        cout << "Nhap 2: Tim Thi Sinh theo ID" << endl;
        cout << "Nhap 3: Hien thi Danh sach" << endl;
        cout << "Nhap 4: Thoat" <<endl;
        cout << "Nhap: "; cin >> type1;
        switch(type1)
        {
            case 1:
                {
                    cout << "Nhap a: Them Thi Sinh Khoi A" << endl;
                    cout << "Nhap b: Them Thi Sinh Khoi B" << endl;
                    cout << "Nhap c: Them Thi Sinh Khoi C" << endl;
                    char type2;
                    cout << "Nhap:"; cin >> type2;
                    switch(type2)
                    {
                        case 'a':
                            {
                                string id,name,address;
                                int priority;
                                fflush(stdin);
                                cout << "Nhap ID: "; cin >> id;
                                fflush(stdin);
                                cout << "Nhap Ho ten: "; getline(cin,name);
                                fflush(stdin);
                                cout << "Nhap Dia chi: "; getline(cin,address);
                                cout << "Nhap muc uu tien : "; cin >> priority;
                                ThiSinhKhoiA *a = new ThiSinhKhoiA(id, name, address, priority);
                                ts.ThemThiSinh(*a);
                                cout << "Da them 1 Thi sinh khoi A!!" <<endl;
                                break;
                            }
                        case 'b':
                            {
                                string id,name,address;
                                int priority;
                                fflush(stdin);
                                cout << "Nhap ID: "; cin >> id;
                                fflush(stdin);
                                cout << "Nhap Ho ten: "; getline(cin,name);
                                cout << "Nhap Dia chi: "; getline(cin,address);
                                cout << "Nhap muc uu tien : "; cin >> priority;
                                ThiSinhKhoiB *a = new ThiSinhKhoiB(id, name, address, priority);
                                ts.ThemThiSinh(*a);
                                cout << "Da them 1 Thi sinh khoi B!!" <<endl;
                                break;
                            }
                        case 'c':
                            {
                                string id,name,address;
                                int priority;
                                fflush(stdin);
                                cout << "Nhap ID: "; cin >> id;
                                fflush(stdin);
                                cout << "Nhap Ho ten: "; getline(cin,name);
                                fflush(stdin);
                                cout << "Nhap Dia chi: "; getline(cin,address);
                                cout << "Nhap muc uu tien : "; cin >> priority;
                                ThiSinhKhoiC *a = new ThiSinhKhoiC(id, name, address, priority);
                                ts.ThemThiSinh(*a);
                                cout << "Da them 1 Thi sinh khoi C!!" <<endl;
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
                    string id;
                    cout << "Nhap ID tim kiem: "; cin >> id;
                    ts.TimTheoSoBaoDanh(id);
                    break;
                }
            case 3:
                {
                    ts.HienThiDanhSach();
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
