#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int i,j,n,m,p,q;
    float a[50][50];
    //citire date
    cout<<"nr linii:"; cin>>n;
    cout<<"nr coloane:"; cin>>m;
    cout<<"Dati o matrice de "<<n<<" linii si "<<m<<" coloane:"<<endl;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    cout<<"p="; cin>>p;
    cout<<"q="; cin>>q;
    //eliminarea liniei p
    for(i=p+1;i<=n;i++)
        for(j=1;j<=m;j++)
            a[i-1][j]=a[i][j];
    n--;
    //eliminarea coloanei q
    for(i=1;i<=n;i++)
        for(j=q+1;j<=m;j++)
            a[i][j-1]=a[i][j];
    m--;
    ofstream g("mat.out");
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++)
            g<<a[i][j]<<' ';
        g<<endl;
    }
    g.close();
    return 0;
}
