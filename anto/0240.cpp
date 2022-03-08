#include <iostream>
using namespace std;
int main()
{
    int n,x,u,p;
    cout<<"numar natural="; cin>>n;
    x=0;
    p=1;
    while(n>9){
        u=n%10;
        x=x+u*p;
        p=p*10;
        n=n/10;
    }
    x=x*10+n;
    cout<<x;
    return 0;
}
