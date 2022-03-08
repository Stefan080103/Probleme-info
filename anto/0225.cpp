#include <iostream>
using namespace std;
int main()
{
    int a,u, n, s, m;
    cout<<"numar natural="; cin>>a;
    n=0;
    s=0;
    do{
        u=a%10;
        if(a%2!=0){
            n++;
            s=s+u;}
        a=a/10;
    }while(a!=0);
    if(n>0){
        m=s*1.0/n;
        cout<<m;}
    else
        cout<<"numarul nu are cifre impare";
    return 0;
}
