#include <iostream>
#include <fstream>
using namespace std;
int a[101],b[101],n,m;
ofstream g;
void citire(){
    int i;
    ifstream f("trei.in");
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    f.close();
}
void schimb(int &x,int &y){
    int aux=x;
    x=y;
    y=aux;
}
void slectie(){
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]%2==0 && a[j]%2==0)
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
    slectie();
    g.open("trei.out");
    afisare();
    g.close();
    return 0;
}
