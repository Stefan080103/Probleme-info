#include <iostream>
using namespace std;
void numar(int &n,int c1,int c2){
    int p1=1,p2=0,a=n;
    while(a){
        if(a%10==c1) p2=p1;
        p1*=10;
        a/=10;
    }
    if(p2) p2*=10,n=n/p2*p2+c2*p2/10;
}
int main()
{
    int n,c1,c2;
    cin>>n>>c1>>c2;
    numar(n,c1,c2);
    cout<<n;
    return 0;
}
