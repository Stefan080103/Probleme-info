#include <iostream>
using namespace std;
int ok=3;
int primalitate(int x){
    int i;
    for(i=2;i*i<=x;i++)
       if(x%i==0) {ok--;break;}
    x=x/10+x%10*100;
    return ok;
}
int main()
{
    int a,i,ok=3;
    cin>>a;
    primalitate(a); primalitate(a); primalitate(a);
    if(ok==3) cout<<a<<" ESTE EXTRAPRIM";
        else  cout<<a<<" NU ESTE EXTRAPRIM";
    return 0;
}
