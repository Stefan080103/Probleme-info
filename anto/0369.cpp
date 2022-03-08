#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,x[101],y[101],k=0,i,Max,Min,j,p,aux;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    for(i=1;i<=n;i++){
        p=0;
        aux=x[i];
        for(j=2;j*j<=aux;j++)
            if(aux%j==0){
                p=j;break;
            }
        if(p==0 && aux>1){
            k++;
            y[k]=x[i];
        }
    }
    if(k>0){
        Max=y[1];
        Min=y[1];
        for(i=2;i<=k;i++)
            if(y[i]>Max)
                Max=y[i];
            if(y[i]<Min)
                Min=y[i];
    }
    ofstream g("maxprim.txt");
    for(i=1;i<=n;i++)
        if(Max==x[i])
            g<<i<<" ";
    g<<endl;
    for(i=1;i<=n;i++)
        if(Min==x[i])
            g<<i<<" ";
    g.close();
    return 0;
}
