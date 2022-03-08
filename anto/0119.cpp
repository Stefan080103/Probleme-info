#include <iostream>
#include <fstream>
using namespace std;
int x[100],nr;
int cmmdc(int x, int y){
    while(x!=y)
        if(x>y) x=x-y;
        else y=y-x;
    return y;
}
int main()
{
    int n,a[100],aux,aux1,i,j;
    ifstream f("p2.txt");
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    f.close();
    for(i=1;i<=n;i++){
        aux=a[i];
        aux1=n;
        if(cmmdc(aux,aux1)==1)
            x[++nr]=a[i];
    }
    for(i=1;i<=nr-1;i++)
        for(j=i+1;j<=nr;j++)
            if(x[i]>x[j]){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
    if(nr==0)
        cout<<"NU EXISTA";
    else{
        ofstream g("p2.out");
        for(i=1;i<=nr;i++)
            g<<x[i]<<" ";
        g.close();
    }
    return 0;
}
