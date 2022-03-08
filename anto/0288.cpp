#include <iostream>

using namespace std;

int main()
{
    int a, b,c, x,sol;
    cin>>x;
    a=1;
    b=1;
    while(b<x){
        c=a+b;
        a=b;
        b=c;}
    if(b-x<=x-a)
        sol=b;
    else
        sol=a;
    cout<<sol;
    return 0;
}
