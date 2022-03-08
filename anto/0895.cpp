#include <iostream>
#include <fstream>
using namespace std;
int n,a[101];
ofstream g;
void citire(){
    int x;
    ifstream f("sase.in");
    while(f>>x)
        a[++n]=x;
    f.close();
}
void afisare()
{
    int i;
    for(i=1;i<=n;i++)
        g<<a[i]<<" ";
}
void schimb(int &x,int &y){
    int aux=x;
    x=y;
    y=aux;
}
void selectie(){
    int p,i,j;
    for(i=1;i<n-1;i=i+2){
        p=i;
        for(j=i+2;j<=n;j=j+2)
            if(a[j]>a[p])
                p=j;
        if(p!=i)
            schimb(a[i],a[p]);
    }
    for(i=2;i<n;i=i+2){
        p=i;
        for(j=i+2;j<=n;j=j+2)
            if(a[j]<a[p])
                p=j;
        if(p!=i)
            schimb(a[i],a[p]);
    }
}
int main()
{
    citire();
    selectie();
    g.open("sase.out");
    afisare();
    g.close();
    return 0;
}
