#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    char (*p)[20];
    p=new char[20];
    ifstream f("fis.txt");
    f.getline(*p,20);
    f.getline(*q,20);
    f.getline(*z,20);
    f.close();
    int x1=strlen(*p);
    int x2=strlen(*q);
    int x3=strlen(*z);
    int Max=x1;
    if(Max<x2) Max=x2;
    if(Max<x3) Max=x3;
    if(Max==x1)
        cout<<*p;
    if(Max==x2)
        cout<<*q;
    if(Max==x3)
        cout<<*z;
    return 0;
}
