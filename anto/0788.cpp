#include <iostream>
#include <fstream>
using namespace std;
//ajutator
int cmmdc(int a,int b){
    while(a&&b)
        if(a>b) a=a%b;
        else b=b%a;
    return a+b;
}
int factori_p(int x){
    int d,p=1;
    for(d=2;d*d<=x;d++)
    {
        if(x%d==0) p=p*d;
        while(x%d==0) x=x/d;
    }
    if(x>1) p=p*x;
    return x;
}
int dcp(int a,int b){
    return factori_p(cmmdc(a,b));
}
int main()
{
    int n,x,r,i;
    ifstream f("numere.in");
    f>>n;
    f>>x;
    r=factori_p(x);
    for(i=2;i<=n;i++){
        f>>x;
        r=dcp(r,x);
    }
    f.close();
    if(r==1) cout<<"nu exista";
    else cout<<r;
    return 0;
}
