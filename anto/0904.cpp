#include <iostream>
#include <fstream>
using namespace std;
int n,p[101],a[101],m;
int prime(int x){
    int i;
    if(x<2) return 0;
    for(i=2;i*i<=x;i++)
        if(x%i==0) return 0;
    return 1;
}
void citire(){
    int x;
    ifstream f("f19.in");
    while(f>>x)
        a[++n]=x;
    f.close();
}
void prim(){
    int i;
    for(i=1;i<=n;i++)
        if(prime(a[i])==1)
            p[++m]=i;
}
void schimb(int &a, int &b){
    int aux;
    aux=a; a=b;b=aux;
}
int main()
{
    citire();
    prim();
    int i,j;
    for(i=1;i<m;i++)
        for(j=i+1;j<=m;j++)
            if(a[p[i]]>a[p[j]])
                schimb(a[p[i]],a[p[j]]);
    ofstream g("f19.out");
    for (i=1;i<=n;i++)
        g<<a[i]<<" ";
    g.close();
    return 0;
}
