#include <iostream>
using namespace std;
int p1(int n){
    int p=1,aux;
    do{
        aux=n%10;
        p=p*aux;
        n=n/10;
    }while(n!=0);
    return p;
}
int main()
{
    int  n;
    cin>>n;
    cout<<p1(n);
    return 0;
}
