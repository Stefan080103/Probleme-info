#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,m,a[16][21],i,j;
    //citire tablou
    ifstream f("f2.txt");
        f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            f>>a[i][j];
    f.close();
    // afisare contur
    for(j=1;j<=m;j++) cout<<a[1][j]<<" ";
    for(i=2;i<=n;i++) cout<<a[i][m]<<" ";
    for(j=m-1;j>=1;j--) cout<<a[n][j]<<" ";
    for(i=n-1;i>=2;i--) cout<<a[i][1]<<" ";
    return 0;
}
