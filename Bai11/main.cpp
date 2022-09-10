#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main()
{
    SoPhuc a(3,2);
    SoPhuc b(1,3);

    SoPhuc c = a * b;
    cout << c;
    return 0;
}
