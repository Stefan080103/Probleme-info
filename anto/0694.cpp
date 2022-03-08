#include <iostream>
using namespace std;
int main()
{
    int n,a,u;
    cout<<"numar natural="; cin>>a;
    n=0;
    do{
        u=a%10;
        if(u%2!=0)
            n++;
        a=a/10;
    }while(a!=0);
    if(n>0)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
