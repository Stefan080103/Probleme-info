#include <iostream>
#include <fstream>
using namespace std;
int x[20];
int main()
{   int n,m,a[20][20],i,j,o,u,aux,nr,Max=-1;
    ifstream f("mat.txt");
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            f>>a[i][j];
    f.close();
     for(i=1;i<=n;i++){
            nr=0;
            for(j=1;j<=m;j++){
                aux=a[i][j];
                o=0;
                while(aux>0){
                    u=aux%10;
                    o=o*10+u;
                    aux=aux/10;
                }
                if(a[i][j]==o)
                    nr++;
            }
            if(nr>Max)
                Max=nr;
            x[i]=nr;
     }
     ofstream g("mat.out");
     for(i=1;i<=n;i++)
        if(x[i]==Max)
            g<<i<<' ';
    g.close();
    return 0;
}
