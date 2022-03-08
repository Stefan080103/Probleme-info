#include <iostream>
using namespace std;
int main()
{
    int p1,q1,p2,q2,p,q,r,a,b;
    cout<<"prima fractie="; cin>>p1>>q1;
    cout<<" a doua fractie="; cin>>p2>>q2;
    //calcul suma
    p=p1*q2+p2*q1;
    q=q1*q2;
    // calcul cmmdc
    a=p; b=q;
    while(a%b!=0) {
        r=a%b;
        a=b;
        b=r;
    }
    //transformare in ireductibila
    p=p/b; q=q/b;
    //afisare fractie
    if(p==0) cout<<0;
    else if(p!=q) cout<<p<<'/'<<q;
        else cout<<p;
    return 0;
}
