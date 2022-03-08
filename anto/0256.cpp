#include <iostream>
using namespace std;
int main()
{
    int x,y,n1,n2,p1,p2,u1,u2;
    cin>>x>>y;
    n1=n2=0;
    p1=p2=1;
    do{
        u1=x%10;
        if(u1%2!=0){
            n1=n1+u1*p1;
            p1=p1*10;}
        x=x/10;
    }while(x!=0);
    do{
        u2=y%10;
        if(u2%2==0){
            n2=n2+u2*p2;
            p2=p2*10;}
        y=y/10;
    }while(y!=0);
    if(p1>1)
        cout<<n1<<endl;
    else
        cout<<"numarul nu are cifre impare"<<endl;
    if(p2>1)
        cout<<n2;
    else
        cout<<"numarul nu are cifre pare";
    return 0;
}
