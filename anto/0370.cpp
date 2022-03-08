#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int aux,n,x,y,i,j,a[100002];
    ifstream f("bac.txt");
    //citesc doua cifre x si y
    f>>x>>y;
    //citesc un sir de cifre si ii aflu lungimea
    n=0;
    while(f>>aux){
        n++;
        a[n]=aux;
    }
    f.close();
    if(y>x){
        aux=x;
        x=y;
        y=x;
    }
    for(i=1;i<=n;i++)
        if(x<=a[i]){
            for(j=n;j>=i+1;j--)
                a[j+1]=a[j];
            a[i+1]=x;
            n++;
        }else a[n+1]=x;
    for
    return 0;
}
