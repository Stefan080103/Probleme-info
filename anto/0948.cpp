#include <iostream>
using namespace std;
int p1(int n){
    int y=0,p=1,aux;
    while(n>99){
        aux=n%10;
        y=y+p*aux;
        p=p*10;
        n=n/10;
    }
    y=y+n/10*p/10;
    return y;
}
int main()
{
    int a;
    cin>>a;
    cout<<p1(a);
    return 0;
}
