#include <iostream>
#include <fstream>
using namespace std;
int n,a[101];
void citire(){
    ifstream f("bac.in");
    f>>n;
    int i;
    for(i=1;i<=n;i++)
        f>>a[i];
    f.close();
}
int prim(int x){
    int i;
    if(x<2) return 0;
    for(i=2;i*i<x;i++)
        if(x%i==0) return 0;
    return 1;
}
int cifre(int x){
    int s=0;
    while(x){
        s=s+x%10;
        x=x/10;
    }
    return s;
}
void stergere(int x){
    int i;
     for(i=x;i<n;i++)
        a[i]=a[i+1];
    n--;
}
int para(){
    int i;
    for(i=1;i<=n;i++)
        if(cifre(a[i])%2==0)
            return i;
    return 0;
}
int primprim(){
    int i;
    for(i=n;i>=1;i--)
        if(prim(a[i]))
            return i;
    return 0;
}
int main()
{
    citire();
    int i,p,u;
    p=para();
    if(p) stergere(p);
    u=primprim();
    if(u) stergere(u);
    ofstream g("bac.out");
    for(i=1;i<=n;i++)
        g<<a[i]<<" ";
    g.close();
    return 0;
}
