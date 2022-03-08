#include <iostream>
#include <cstring>
using namespace std;
void duplicare(int n,int &d){
    d=0;
    int p=1,x;
    while(n){
        x=n%10;
        if(x%2) d+=x*p*11,p*=100;
        else d+=x*p,p*=10;
        n/=10;
    }
}
int main()
{
    int m,n,x,s,pm,pn;
    cin>>m>>n>>x;
    s=0; pm=1; pn=1;
    do{
        if(m%x==0) s+=m,pm=x;
        if(n%x==0 && m!=n) s+=n,pn=x;
        m+=pm;
        n-=pn;
    }while(m<=n);
    cout<<s;
    return 0;
}
