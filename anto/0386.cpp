#include <iostream>
#include <fstream>
using namespace std;
int a[201];
int main()
{
    int n,z[201],aux,c,nr1,nr2,x,i,j;
    ifstream f("sir3.txt");
    f>>n;
    for(i=1;i<=n;i++)
        f>>z[i];
    f.close();
    for(i=1;i<=n;i++){
        aux=z[i];
        nr1=nr2=0;
        while(aux!=0){
            x=aux%10;
            if(x%2==0)
                nr1++;
            else
                nr2++;
            aux=aux/10;
        }
        if(nr1==nr2)
            a[i]=1;
    }
    for(i=1;i<=n-1;i++)
        if(a[i]==1)
            for(j=i+1;j<=n;j++)
                if(a[j]==1)
                    if(z[i]>z[j]){
                        c=z[j];
                        z[j]=z[i];
                        z[i]=c;
                    }
    for(i=1;i<=n;i++)
        cout<<z[i]<<" ";
    return 0;
}
