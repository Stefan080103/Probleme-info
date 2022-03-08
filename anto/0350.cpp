#include <iostream>
using namespace std;
int main()
{
    int n,m,a[101][101],v[101],b10[101],p,baza10,i,j,q,poz;
    //citire date
    cout<<"m="; cin>>m;
    cout<<"n="; cin>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    //transformare in baza 10 si afisare
    for(i=1;i<=m;i++){
        baza10=0;p=1;poz=0;
        for(j=n;j>=1;j--)
            v[++poz]=a[i][j];
            for(q=1;q<=poz;q){
                baza10=baza10+v[q]*p;
                p=p*2;
            }
        cout<<baza10<<" ";
    }
    return 0;
}
