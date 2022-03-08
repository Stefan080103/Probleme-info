#include <iostream>
#include <fstream>
using namespace std;
int y[101];
int main()
{
    int n,x[101],i,j,a,p;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    for(i=1;i<=n;i++){
        p=0;
        for(j=2;j*j<=x[i];j++)
            if(x[i]%j==0){
                p=j;break;
            }
        if(p!=0 || x[i]<=1)
            y[i]=1;
    }
    for(i=1;i<=n-1;i++)
        if(y[i]==1)
            for(j=i+1;j<=n;j++)
                if(y[j]==1)
                    if(x[i]<x[j]){
                        a=x[j];
                        x[j]=x[i];
                        x[i]=a;
                    }
    ofstream g("neprime.txt");
    for(i=1;i<=n;i++)
        g<<x[i]<<" ";
    g.close();
    return 0;
}
