#include <iostream>
using namespace std;
int main()
{
    int x,y,a,b,cd,nr=0;
    cout<<"dati un numar natural nenul="; cin>>x;
    cout<<"sir de numere incheiat cu 0="; cin>>y;
    while(y!=0){
        //cmmdc(x,y)
        a=x;
        b=y;
        while(a!=b)
        if(a>b) a=a-b;
        else b=b-a;
        cd=b;
        if(cd==1)
            nr++;
        //citesc alt termen
        cin>>y;
    }
    cout<<nr;
    return 0;
}
