#include <iostream>
using namespace std;
int main()
{
    int x, y,r;
    cout<<"x, y numere naturale nenule="; cin>>x>>y;
    while(x%y!=0){
        r=x%y;
        x=y;
        y=r;
    }
    cout<<"cel mai mare divizor comun este ="<<y;
    return 0;
}
