#include <iostream>
using namespace std;
int main()
{
    char v[962];
    int n,m,i,j,a[31][31],p,l;
    //citire date
    cout<<"n="; cin>>n;
    cout<<"m="; cin>>m;
    p=n*m;
    for(i=1;i<=p;i++) cin>>v[i];
    //afisare in matrice
    //inserare
    l=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            a[i][j]=v[++l];
    //afisare
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
