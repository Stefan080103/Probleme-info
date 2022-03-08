#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m,i,j,l,nr;
    char a[1000][1000],p[1000][1000];
    ifstream f("kscale.in");
    f>>n>>m; f.get();
    for(i=1;i<=n;i++)
        f.getline(a[i],1000);
    f.close();
    ofstream g("kscale.out");
    if(n==1){
            nr=0;
        for(i=0;i<m;)
           if(a[1][i]==a[1][i+1]) nr++,i+=2;
            else nr++,i++;
        g<<1<<" "<<nr<<endl;
        for(i=0;i<m;)
             if(a[1][i]==a[1][i+1]) g<<a[1][i],i+=2;
             else g<<a[1][i],i++;

    }
    else {
        for(i=1;i<=n;i++){
            l=0;
            for(j=0;j<m;j++){
                if(a[i][j]!=a[i][j+1]) p[i][++l]=a[i][j];
            }
        }
        nr=0;
        for(i=1;i<=n;i++)
        {
                if(p[i][1]!=p[i+1][1]) nr++;
        }
        g<<nr<<" "<<l<<endl;
         for(i=1;i<=n;i+=nr)
        {
            for(j=1;j<=l;j++)
                g<<p[i][j];
            g<<endl;
        }
    }
    g.close();
    return 0;
}
