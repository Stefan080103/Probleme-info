#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int a[51],b[51],c[51],i,m,n;
    cout<<"m=";
    cin>>m;
    //citire vector
    cout<<"n=";
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>a[i];
    //constructie vector prim atribuiri
    for (i=1; i<=m; i++)
        a[i]=b[i];
    //constructie vectori prin atribuiri
    for (i=1; i<=n-m; i++)
        c[i]=a[m+i];
    //afisare vector
    ofstream g ("divizor.txt");
    for (i=1; i<=n-m; i++)
        g<<b[i]<<' ';
    g<<endl;
    for (i=1; i<=n-m; i++)
        g<<c[1]<<" ";
    g.close();
    return 0;
}
