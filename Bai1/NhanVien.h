#ifndef NHANVIEN_H_INCLUDED
#define NHANVIEN_H_INCLUDED
#include "CanBo.h"
class NhanVien : public CanBo
{
    string congViec;
    public:
        NhanVien(string name,int age,string gender,string address,string work):CanBo(name,age,gender,address)
        {
            congViec = work;
        }
        string toString() override
        {
            return "Nhan Vien:'" + congViec + "'| " + getName() + "| " + to_string(getAge()) + "| " + getGender() + "| " + getAddress() + "\n";
        }
};

#endif // NHANVIEN_H_INCLUDED
