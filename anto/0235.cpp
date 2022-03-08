#include <iostream>
using namespace std;
int main()
{
    int n,u,y,p;
    cout<<"numar natural="; cin>>n;
    n=n/10;
    y=0;
    p=1;
    while(n>=10){
         u=n%10;
         y=y+p*u;
         p=p*10;
         n=n/10;
    }
    cout<<y;
    return 0;
}
