#include <iostream>
using namespace std;
int main()
{
    int n,p,y,u;
    cout<<"numar natural="; cin>>n;
    y=0;
    p=1;
    while(n>=100){
         u=n%10;
         y=y+p*u;
         p=p*10;
         n=n/10;
    }
    y=y+n/10*p;
    cout<<y;
    return 0;
}
