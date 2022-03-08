#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,m,a[27][32],i,j,minim,aux,nr;
    //citire date
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    //calcul minim
    minim=a[1][1];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(a[i][j]<minim) minim=a[i][j];
    //bordare
    for(i=0;i<=n+1;i++)
        a[i][0]=a[i][m+1]=minim;
    for(j=1;j<=m;j++)
        a[0][j]=a[n+1][j]=minim;
    //rezolvare
    ofstream g("sa.txt");
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            nr=0;
            if(a[i][j]>a[i-1][j]) nr++;
            if(a[i][j]>a[i+1][j]) nr++;
            if(a[i][j]>a[i][j-1]) nr++;
            if(a[i][j]>a[i][j+1]) nr++;
            if(nr==4) g<<i<<" "<<j<<endl;
        }
    g.close();
    return 0;
}
