#include <iostream>
#include <fstream>
using namespace std;
int S,n,x[50],v[50];
ofstream g;
int suma( int p){
    int s=0,i;
    for(i=1;i<=p;i++)
        s=s+x[i]*v[i];
    return s;
}
int valid(int k){
    return (suma(k-1)+x[k]*v[k]<=S);
}
int optim(){
    return (suma(n)==S);
}
void afisare(){
    int i;
    for(i=1;i<=n;i++)
        if(x[i]>0)
            g<<x[i]<<"*"<<v[i]<<endl;
    g<<endl;
}
void ordonare(){
    int i,j,aux;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
void backt(int k){
    for(int i=0;i<=(S-suma(k-1))/v[k];i++){
        x[k]=i;
        if(valid(k))
            if(k==n)
                if(optim()) afisare();
                else ;
            else backt(k+1);
    }
}
int main()
{
    int i;
    ifstream f("plata.in");
    f>>S>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    f.close();
    ordonare();
    g.open("plata.out");
    backt(1);
    g.close();
    return 0;
}
