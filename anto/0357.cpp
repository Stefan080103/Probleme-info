#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int n,m,i,j,a[21][21],aux;
    ifstream f("mat.txt");
    f>>n>>m;
     for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                f>>a[i][j];
    f.close();
    for(j=1;j<=m;j++){
        aux=a[i][j];
        for(i=2;i<=n;i++)
            a[i-1][j]=a[i][j];
        a[n][j]=aux;
    }
    ofstream g("mat.out");
     for(i=1;i<=n;i++){
            for(j=1;j<=m;j++)
                g<<a[i][j]<<' ';
            g<<endl;
    }
    g.close();
    return 0;
}
