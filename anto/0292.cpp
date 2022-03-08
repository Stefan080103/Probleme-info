#include <iostream>
using namespace std;
int main()
{
    int cd,x1,x2,x3,r,t1,t2;
    cout<<"dati trei numere naturale=";
    cin>>x1>>x2>>x3;
    cd=x1;
    t1=cd;
    t2=x2;
    while(t1%t2!=0){
        r=t1%t2;
        t1=t2;
        t2=r;}
    cd=t2;
    t1=cd;
    t2=x3;
    while(t1%t2!=0){
        r=t1%t2;
        t1=t2;
        t2=r;}
    cd=t2;
    while(cd%2==0)
        cd=cd/2;
    cout<<"cel mai mare numar impar care divide toate cele 3 numere este ="<<cd;
    return 0;
}
