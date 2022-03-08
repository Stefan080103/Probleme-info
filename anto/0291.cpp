#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,r,cm,t1,t2,p;
    cout <<"intoduceti patru numere naturale nenule=";
    cin>>a>>b>>c>>d;
    cm=a;
    // cmmmc (cm,b)
    t1=cm; t2=b;
    p=1;
    p=t1*t2;
    while(t1%t2!=0){
        r=t1%t2;
        t1=t2;
        t2=r;}
    cm=p/t2;
    t1=cm;
    // cmmmc (cm,c)
    t2=c;
    p=t1*t2;
    while(t1%t2!=0){
        r=t1%t2;
        t1=t2;
        t2=r;}
    cm=p/t2;
    t1=cm;
    // cmmmc (cm,d)
    t2=d;
    p=t1*t2;
    while(t1%t2!=0){
        r=t1%t2;
        t1=t2;
        t2=r;}
    cm=p/t2;
    cout<<"cel mai mic multiplu comun este="<<cm;
    return 0;
}
