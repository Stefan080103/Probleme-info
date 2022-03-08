#include <iostream>
using namespace std;
int main()
{
    int n,c1,c2,x,p;
    cout<<"numar natural=";
    cin>>n;
    x=0; p=1;
    while (n>9) {
        c1=n%10;
        c2=n/10%10;
        x=x+c2*p;
        p=p*10;
        x=x+c1*p;
        p=p*10;
        n=n/100;
    }
    x=x+n*p;
    cout<<x;
    return 0;
}
