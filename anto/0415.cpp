#include <iostream>
using namespace std;
int main()
{
    int p,q,a,b,r;
    cout<<"dati numaratorul si numitorul unei fractii";
    cin>>p>>q;
    //calcul cmmdc
    a=p; b=q;
    while(a%b!=0){
        r=a%b;
        a=b; b=r;
    }
    //transform in ireductibila
    p=p/b; q=q/b;
    cout<<"fractia ireductibila=";
    if(p==0) cout<<0;
    else    if (p!=q) cout<<p<<'/'<<q;
            else cout<<p;
    return 0;
}
