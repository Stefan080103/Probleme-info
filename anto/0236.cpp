#include <iostream>
using namespace std;
int main()
{
    int n,u,y,p;
    cout<<"numar natural="; cin>>n;
    y=0;
    p=1;
    while(n>0){
        u=n%10;
        if(u%2!=0){
            y=y+p*u;
            p=p*10;}
        n=n/10;}
    if(p==1)
        cout<<"toate cifrele au fost pare";
    else
        cout<<y;
    return 0;
}
