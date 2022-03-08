#include <iostream>
using namespace std;
int suma(int n){
    if(n!=0)
        if(n%10%2!=0) return n%10+suma(n/10);
    else return suma(n/10);
}
int nr(int n,int nu){
    if(n!=0)
        if(n%10%2==0) return nu+1+nr(n/100,nu);
        else return nr(n/100,nu);
}
int nrc(int n){
    if(n!=0)
        return 1+nrc(n/10);
    else return 0;
}
int prod(int n,int p){
    if(n!=0)
        if(n%10%2!=0) return n%10*prod(n/100,p);
        else return 0;
}
int ci(int n){
    if(n!=0)
        if(n%10%2!=0) return 10*ci(n/10);
        else return ci(n/10);
}
int main()
{
    int n,nu=0,p=1;
    cin>>n;
    cout<<suma(n);
    cout<<endl<<nr(n,nu);
    if(nrc(n)%2!=0)
        cout<<endl<<prod(n/10,p);
    else cout<<endl<<prod(n,p);
    cout<<endl<<ci(n);
    return 0;
}
