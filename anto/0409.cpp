#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int i,j,n,m,p,q;
    float a[50][50];
    cin>>n>>m;
    cout<<endl;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    cin>>p>>q;
    for(i=p+1;i<=n;i++)
        for(j=1;j<=n;j++)
            a[i-1][j]=a[i][j];
    n--;
    for(j=q+1;j<=m;j++)
        for(i=1;i<=n;i++)
                a[i][j-1]=a[i][j];
    m--;
    ofstream g("mat.out");
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            g<<a[i][j]<<" ";
        g<<endl;
    }
    g.close();
    return 0;

}
