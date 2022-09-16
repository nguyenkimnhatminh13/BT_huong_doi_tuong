#include <iostream>
#include <windows.h>
using namespace std;
void BatDau(string a[][100],int *m)
{
    for(int i=0;i<*m;i++){
        for(int j=0;j<*m;j++){
            a[i][j] = "   ";
            cout << a[i][j];
            cout << "|";
        }
        cout << endl;
        for(int j = 0;j < *m ;j++){
            cout << "----";
        }
        cout << endl;
    }
}
void InBanCo(string a[][100],int *m)
{
    for(int i=0;i<*m;i++){
        for(int j=0;j<*m;j++){
            cout << a[i][j];
            cout << "|";
        }
        cout << endl;
        for(int j = 0;j < *m ;j++){
            cout << "----";
        }
        cout << endl;
    }
}
bool ticked(string a[][100],int i,int j)
{
    if(a[i][j] == " X " | a[i][j] == " O " )
        return false;
    else return true;
}
void addPoint(string a[][100],int i,int j)
{
    int dem = 0;
    if(dem%2 == 0){
        if(ticked(a,i,j)){
            //cout << "Da ton tai, X di lai";
        }
        a[i-1][j-1] = " X ";
    }
    else{
        if(ticked(a,i,j)){
            //cout << "Da ton tai, O di lai";
        }
        a[i-1][j-1] = " O ";
    }
    dem++;
}
int main()
{
    int m = 10;
    string banCo[100][100];
    BatDau(banCo,&m);
    int x,y;
    while(true){
        cout << "Nhap: ";
        cin >> x >> y;
        system("cls");
        addPoint(banCo,x,y);
        InBanCo(banCo,&m);
    }

//    banCo[2][1] = " X ";
//    InBanCo(banCo,&m);
    return 0;
}
