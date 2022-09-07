#include <iostream>
#include "TaiLieu.h"
#include "Sach.h"
#include "TapChi.h"
#include "Bao.h"
#include "QuanLySach.h"
using namespace std;

int main()
{
    QuanLySach qls;
    Sach *a = new Sach("S01","Kim Dong",3,"Nhat Minh",100);
    TapChi *b = new TapChi("TC02","Ha Noi",4,5,12); //id,nha phat hanh,so bản, số phat hanh, tháng phát hành
    Bao *c = new Bao("B03","Kim Dong",7,15);
    TapChi *d = new TapChi("TC04","Hai Phong",5,7,8);

    qls.ThemTaiLieu(*a);
    qls.ThemTaiLieu(*b);
    qls.ThemTaiLieu(*c);
    qls.ThemTaiLieu(*d);
    qls.HienThiDanhSach();
    qls.XoaTaiLieu("TC04");
    qls.HienThiDanhSach();
/*
    int type1;
    while(true){
        int type1;
        cout << "-----------------------------" <<endl;
        cout << "Ung dung Quan ly Can Bo" << endl;
        cout << "Nhap 1: Them Tai Lieu" << endl;
        cout << "Nhap 2: Xoa Tai Lieu" << endl;
        cout << "Nhap 3: Hien thi Danh sach" << endl;
        cout << "Nhap 4: Thoat" <<endl;
        cout << "Nhap: "; cin >> type1;
        switch(type1)
        {
            case 1:
                {
                    cout << "Nhap a: Them Sach" << endl;
                    cout << "Nhap b: Them Tap Chi" << endl;
                    cout << "Nhap c: Them Bao" << endl;
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
                                CongNhan *a = new CongNhan(name, age, gender, address, level);
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
                                KySu *a = new KySu(name, age, gender, address, field);
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
                                NhanVien *a = new NhanVien(name, age, gender, address, work);
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
*/
}
