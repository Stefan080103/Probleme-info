#include <iostream>
using namespace std;
int main()
{
    int a,u, n;
    cout<<"numar natural="; cin>>a;
    n=0;
    do{
        u=a%10;
        if(u%2==0)
            n++;
        a=a/10;
    }while(a!=0);
    cout<<n;
}
