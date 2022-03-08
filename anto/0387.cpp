#include <iostream>
#include <fstream>
using namespace std;
int y[101];
int main()
{
    int n,z[101],i,j,p,c;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>z[i];
    for(i=1;i<=n;i++){
        p=0;
        for(j=2;j*j<=z[i];j++)
            if(z[i]%j==0){
                p=j;break;
            }
        if(p==0 && z[i]>1)
            y[i]=1;
    }
    for(i=1;i<=n-1;i++){
        if(y[i]==1)
            for(j=i+1;j<=n;j++)
                if(y[j]==1)
                    if(z[i]>z[j]){
                        c=z[j];
                        z[j]=z[i];
                        z[i]=c;
                    }
        if(y[i]==0)
            for(j=i+1;j<=n;j++)
                if(y[j]==0)
                    if(z[i]<z[j]){
                        c=z[j];
                        z[j]=z[i];
                        z[i]=c;
                    }
    }
    ofstream g("out.txt");
    for(i=1;i<=n;i++)
        g<<z[i]<<" ";
    g.close();
    return 0;
}
