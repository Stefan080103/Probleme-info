#include <iostream>
using namespace std;
int main()
{
    int n,p,k,q,aux;
    cout<<"numar natural="; cin>>n;
    aux=n;
    cout<<"intruduceti un numar de cifre care doriti sa fie eliminate"; cin>>p;
    k=0;
    do{
        k++;
        n=n/10;
    }while(n>0);
    k=k-p;
    q=1;
    while(k>0){
        q=q*10;
        k--;
    }
    cout<<aux%q;
    return 0;
}
