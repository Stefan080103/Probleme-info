#include <iostream>
#include <fstream>
using namespace std;
int a[21][21];
void termeni(int n,int &nr,int &x,int &y,int &z){
    if(nr<n)
        termeni(n,nr+1,y,z,y+z-x);
    cout<<x<<" ";

}
int matdiag(int n,int a[21][21]){
    int s,i,j;
    for(i=1;i<=n;i++){
        s=0;
        for(j=1;j<=n;j++)
            s+=a[i][j];
        s-=a[i][i];
        if(a[i][i]>=s) a[i][0]=1;
        else a[i][0]=0;
    }
    for(i=1;i<=n;i++)
        if(a[i][0]==0) return 0;
    return 1;
}
int main()
{
    int x,y,z,n;
    cin>>n>>x>>y>>z;
    int aux,nr=3;
    while(nr<n){
        aux=y+z-x;
        x=y,y=z,z=aux;
        nr++;
    }
    nr=3;
   /* ofstream g("bac.txt");
    g<<z<<" "<<y<<" "<<x<<" ";
    while(nr<n){
        aux=x+y-z;
        z=y,y=x,x=aux;
        g<<aux<<" ";
        nr++;
    }
    g.close();*/
    termeni(n,3,x,y,z);
    return 0;
}
