#include <iostream>
using namespace std;
void citire(int v[],int &n){
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
        cin>>v[i];
}
int prim(int a){
    int i;
    if(a<2) return 0;
    for(i=2;i*i<=a;i++)
        if(a%i==0) return 0;
    return 1;
}
int maxprime(int v[], int n){
    int i,Max=0;
    for(i=1;i<=n;i++)
        if(prim(v[i]))
            if(v[i]>Max)
                Max=v[i];
    return Max;
}
int main()
{
    int x[41],n,Max;
    citire(x,n);
    Max=maxprime(x,n);
    if(Max==0) cout<<"nu exista numere prime";
    else cout<<Max;
    return 0;
}
