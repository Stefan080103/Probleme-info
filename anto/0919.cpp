#include <iostream>
using namespace std;
int palindrom(int a){
    int o,aux;
    aux=a;
    o=0;
    while(a>0){
        o=o*10+a%10;
        a=a/10;
    }
    if(o==aux) return 1;
    else return 0;
}
int main()
{
    int a,b,c,d,nr=0;
    cin>>a>>b>>c>>d;
    if(palindrom(a)==1)
        nr++;
    if(palindrom(b)==1)
        nr++;
    if(palindrom(c)==1)
        nr++;
    if(palindrom(d)==1)
        nr++;
    cout<<nr;
    return 0;
}
