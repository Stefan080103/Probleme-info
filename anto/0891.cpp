#include <iostream>
#include <fstream>
using namespace std;
int a[101],b[101],n,m;
ofstream g;
void citire(){
    int x;
    ifstream f("unu.in");
    while(f>>x)
        if(x<0)
            b[++m]=x;
        else
            a[++n]=x;
    f.close();
}
void schimb(int &x,int &y){
    int aux=x;
    x=y;
    y=aux;
}
void bulec(){
    int s,i;
    do{
        s=0;
        for(i=1;i<n;i++)
            if(a[i]>a[i+1])
                schimb(a[i],a[i+1]),s=1;
    }while(s);
}
void buled(){
    int s,i;
    do{
        s=0;
        for(i=1;i<m;i++)
            if(b[i]<b[i+1])
                schimb(b[i],b[i+1]),s=1;
    }while(s);
}
void afisare(int q,int v[])
{
    int i;
    for(i=1;i<=q;i++)
        g<<v[i]<<" ";
}
int main()
{
    citire();
    bulec();
    buled();
    g.open("unu.out");
    afisare(n,a);
    g<<endl;
    afisare(m,b);
    g.close();
    return 0;
}
