#include <iostream>

using namespace std;
void identice(int a, int b){
    int aux,nr,pas=1;
    aux=a;
    while(a>9) pas=pas*10+1,a/=10;
    nr=a*pas;
    if(nr<aux) nr=nr+pas;
    while(nr<=b){
        cout<<nr<<" ";
        nr+=pas;
        if(nr%10==0) nr++,pas=nr;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    identice(a,b);
    return 0;
}
