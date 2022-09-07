#include <iostream>
#include "Nguoi.h"
#include "Phong.h"
#include "PhongA.h"
#include "PhongB.h"
#include "PhongC.h"
#include "KhachSan.h"
using namespace std;

int main()
{
    KhachSan ks;
//    Nguoi ng1("NhMinh",23,"id123",new PhongA(),2);
//    Nguoi ng2("Ninh",21,"id124",new PhongB(),4);
//    Nguoi ng3("Dat",19,"id134",new PhongC(),2);
//    ks.add(ng1);
//    ks.add(ng2);
//    ks.add(ng3);
//    ks.show();
//    ks.del("id135");
//    ks.show();

    int type1;
    while(true){
        int type1;
        cout << "-----------------------------" <<endl;
        cout << "Ung dung Quan ly Khach San" << endl;
        cout << "Nhap 1: Them Khach Hang" << endl;
        cout << "Nhap 2: Xoa Khach Hang theo ID" << endl;
        cout << "Nhap 3: Tinh Tien Khach Hang theo ID" << endl;
        cout << "Nhap 4: Hien thi Danh sach Khach Hang" << endl;
        cout << "Nhap 5: Thoat" <<endl;
        cout << "Nhap: "; cin >> type1;
        switch(type1)
        {
            case 1:
                {
                    string name,id;
                    int age,num;
                    fflush(stdin);
                    cout << "Nhap ten: "; getline(cin,name);
                    cout << "Nhap tuoi: "; cin >> age;
                    fflush(stdin);
                    cout << "Nhap ID: "; getline(cin,id);
                    cout << "Nhap so ngay: "; cin >> num;
                    fflush(stdin);
                    cout << "Nhap a: Chon phong loai A" << endl;
                    cout << "Nhap b: Chon phong loai B" << endl;
                    cout << "Nhap c: Chon phong loai C" << endl;
                    char type2;
                    cout << "Nhap:"; cin >> type2;
                    switch(type2)
                    {
                        case 'a':
                            {
                                Phong *a = new PhongA();
                                Nguoi ng(name,age,id,a,num);
                                ks.add(ng);
                                cout << "Da them thanh cong!!" <<endl;
                                break;
                            }
                        case 'b':
                            {
                                Phong *b = new PhongB();
                                Nguoi ng(name,age,id,b,num);
                                ks.add(ng);
                                cout << "Da them thanh cong!!" <<endl;
                                break;
                            }
                        case 'c':
                            {
                                Phong *c = new PhongC();
                                Nguoi ng(name,age,id,c,num);
                                ks.add(ng);
                                cout << "Da them thanh cong!!" <<endl;
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
                    cout << "Nhap ID can xoa: "; cin >> s;
                    ks.del(s);
                    break;
                }
            case 3:
                {
                    string s;
                    cout << "Nhap ID Khach Hang: "; cin >> s;
                    cout << "Tong Thanh Toan: " << ks.cal(s) << endl;
                    break;
                }
            case 4:
                {
                    ks.show();
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

}
