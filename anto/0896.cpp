#include <iostream>
#include <fstream>
using namespace std;
int n,a[301];
ofstream g;
void citire(){
    int i;
    ifstream f("noua.in");
    f>>n;
    for(i=1;i<=3*n;i++)
        f>>a[i];
    f.close();
}
void afisare()
{
    int i;
    for(i=1;i<=3*n;i++)
        g<<a[i]<<" ";
}
void schimb(int &x,int &y){
    int aux=x;
    x=y;
    y=aux;
}
void bule(){
    int s,i;
    do{
        s=0;
        for(i=n+1;i<2*n;i++)
            if(a[i]>a[i+1])
                schimb(a[i],a[i+1]),s=i;
    }while(s>1);
}
void bule2(){
    int s,i;
    do{
        s=0;
        for(i=2*n+1;i<3*n;i++)
            if(a[i]<a[i+1])
                schimb(a[i],a[i+1]),s=i;
    }while(s>1);
}
int main()
{
    citire();
    bule();
    bule2();
    g.open("noua.out");
    afisare();
    g.close();
    return 0;
}
