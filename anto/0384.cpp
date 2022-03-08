#include <iostream>
#include <fstream>
using namespace std;
int y[127];
int main()
{
    int n,a[127],i,aux,c,j;
    ifstream f("sir1.txt");
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    f.close();
    for(i=1;i<=n;i++){
        aux=a[i];
        while(aux>9 && aux%10==aux/10%10)
            aux=aux/10;
        if(aux<=9)
            y[i]=1;
    }
    for(i=1;i<=n-1;i++)
        if(y[i]==1)
            for(j=i+1;j<=n;j++)
                if(y[j]==1)
                    if(a[i]>a[j]){
                        c=a[j];
                        a[j]=a[i];
                        a[i]=c;
                    }
    ofstream g("egale.txt");
    for(i=1;i<=n;i++)
        g<<a[i]<<" ";
    g.close();
    return 0;
}
