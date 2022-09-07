#ifndef NGUOI_H_INCLUDED
#define NGUOI_H_INCLUDED
#include <iostream>
using namespace std;

class Nguoi
{
    private:
        string hoTen;
        int tuoi;
        string congViec;
        string cmnd;
    public:
        Nguoi(string name,int age,string job,string passport)
        {
            hoTen = name;
            tuoi = age;
            congViec = job;
            cmnd = passport;
        }
        string getName()
        {
            return hoTen;
        }
        void setName(string name)
        {
            hoTen = name;
        }

        int getAge()
        {
            return tuoi;
        }
        void setAge(int age)
        {
            tuoi = age;
        }

        string getJob()
        {
            return congViec;
        }
        void setJob(string job)
        {
            congViec = job;
        }

        string getPasspost()
        {
            return cmnd;
        }
        void setPasspost(string passpost)
        {
            cmnd = passpost;
        }
        string toString()
        {
            return getName() + "| " + to_string(getAge()) + "| " + getJob() + "| " + getPasspost() + "\n";
        }
};

#endif // NGUOI_H_INCLUDED
