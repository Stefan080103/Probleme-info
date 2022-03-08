#include <iostream>
using namespace std;
int main()
{
    int a,n;
    cout<<"numar natural="; cin>>a;
    n=0;
    do{
        a=a/10;
        n=n+1;
    }while(a!=0);
    cout<<n;
}
