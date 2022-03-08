#include <iostream>
#include <fstream>
using namespace std;
int y[121];
int main()
{
    int b[121],n,i,c,j,aux;
    ifstream f("sir2.txt");
    f>>n;
    for(i=1;i<=n;i++)
        f>>b[i];
    f.close();
    for(i=1;i<=n;i++){
        aux=b[i];
        while(aux>9)
            aux=aux/10;
        if(aux%2==0)
            y[i]=1;
    }
    for(i=1;i<=n-1;i++)
        if(y[i]==1)
            for(j=i+1;j<=n;j++)
                if(y[j]==1)
                    if(b[i]<b[j]){
                        c=b[j];
                        b[j]=b[i];
                        b[i]=c;
                    }
    for(i=1;i<=n;i++)
        cout<<b[i]<<" ";
    return 0;
}
