#include <iostream>
#include <fstream>
using namespace std;
int n,a[101];
ofstream g;
void citire(){
    ifstream f("bac.in");
    int x;
    while(f>>x)
        a[++n]=x;
    f.close();
}
int prime(int x){
    int i;
    if(x<2) return 0;
    for(i=2;i*i<=x;i++)
        if(x%i==0)
            return 0;
    return 1;
}
void prim(int &u1,int &u2){
    int i;
    for(i=n;i>=1;i--)
        if(prime(a[i])){
            u1=i; break;
        }
    for(i=u1-1;i>=1;i--)
        if(prime(a[i])){
            u2=i; break;
        }
}
void af(int p1,int p2){
    int i;
    for(i=p1;i>=p2;i--)
        g<<a[i]<<" ";
}
int main()
{
    citire();
    cout<<n;
    int u1=0,u2=0;
    prim(u1,u2);
    g.open("trei.out");
    if(u1>0){
        af(n,u1+1);
        if(u2>0)
            af(u1-1,u2+1),af(u2-1,1);
        else af(u1-1,1);
    }else af(n,1);
    g.close();
    return 0;
}
