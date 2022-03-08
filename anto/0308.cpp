#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n, m, a, k, x[101], o[1001], i, j, s, ok=1;
    float Max, p[1001], b;
    ifstream f("biatlon.in");
    f>>n>>m>>k;
    if(k>m)
        ok=0;
    else{
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            f>>x[j];
        s=0;
        for(j=1;j<=k;i++)
            s=s+x[j];
        Max=s*1.0/k;
        for(j=1;j<=m-k;j++){
            s=s-x[j]+x[k+j];
            if(s*1.0/k>Max)
                Max=s*1.0/k;
        }
        p[i]=Max;
        o[i]=i;
    }
    f.close();
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(p[j]>p[i]){
                b=p[i];
                p[i]=p[j];
                p[j]=b;
                a=o[i];
                o[i]=o[j];
                o[j]=a;
            }
    }
    ofstream g("biatlon.out");
    if(ok==0)
        g<<"ABANDON";
    else
        for(i=1;i<=n;i++)
            g<<o[i]<<' ';
    g.close();
    return 0;
}
