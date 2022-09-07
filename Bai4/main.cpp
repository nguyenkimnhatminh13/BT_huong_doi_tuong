#include <iostream>
#include "Nguoi.h"
#include "HoGiaDinh.h"
#include "KhuPho.h"
using namespace std;

int main()
{
    KhuPho town;
    int n;
    cout << "Nhap so luong ho gia dinh (n): "; cin >> n;

    vector <Nguoi> inFamily;
    for(int i = 0; i < n;i++){
        string address;
        fflush(stdin);
        cout << "Nhap dia chi nha: "; getline(cin,address);
        HoGiaDinh family(inFamily,address);
        int num;
        cout << "Nhap so nguoi: "; cin >> num;
        for(int j = 0; j < num;j++){
            string name,job,passpost;
            int age;
            cout << "Nguoi " << j+1 << endl;
            fflush(stdin);
            cout << "Nhap ten: "; getline(cin,name);
            fflush(stdin);
            cout << "Nhap tuoi: "; cin >> age;
            fflush(stdin);
            cout << "Nhap dia chi: "; getline(cin,job);
            cout << "Nhap chung minh nhan dan: "; getline(cin,passpost);
            Nguoi person(name,age,job,passpost);
            family.themNguoi(person);
        }
        town.themGiaDinh(family);
        cout << "--------------" <<endl;
    }
    town.ShowKhuPho();
}
