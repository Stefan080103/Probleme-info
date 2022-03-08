#include <iostream>
#include <fstream>
using namespace std;
int a[101],b[101],n,m;
void citire(){
    ifstream f("unu.in");
    int x;
    while(f>>x)
        if(x>=0) a[++n]=x;
        else b[++m]=x;
    f.close();
}
void inter(int &x,int &y){
    int aux=x;
    x=y;
    y=aux;
}
void sortare1(){
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[j]<a[i]) inter(a[j],a[i]);
}
void sortare2(){
    int i,j;
    for(i=1;i<m;i++)
        for(j=i+1;j<=m;j++)
            if(b[j]>b[i]) inter(b[j],b[i]);
}
void afisare(){
    ofstream g("unu.out");
    int i;
    for(i=1;i<=n;i++)
        g<<a[i]<<' ';
    g<<endl;
    for(i=1;i<=m;i++)
        g<<b[i]<<' ';
    g<<endl;
    g.close();
}
int main(){
    citire();
    int i;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(i=1;i<=m;i++)
        cout<<b[i]<<" ";
    sortare1();
    sortare2();
    afisare();
    return 0;
}
