#include <iostream>
#include <fstream>
using namespace std;
int a[101],b[101],n,m;
ofstream g;
void citire(){
    int x;
    ifstream f("sase.in");
    while(f>>x)
        a[++n]=x;
    f.close();
}
void schimb(int &x,int &y){
    int aux=x;
    x=y;
    y=aux;
}
void selectie(){
    int i,j;
    for(i=2;i<n;i=i+2)
        for(j=i+2;j<=n;j=j+2)
            if(a[j]<a[i])
                schimb(a[i],a[j]);
}
void afisare()
{
    int i;
    for(i=1;i<=n;i++)
        g<<a[i]<<" ";
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
