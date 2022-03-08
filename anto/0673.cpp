#include <iostream>
#include <fstream>
using namespace std;
int m,n,a[191],b[191];
void citire(){
    int i;
    ifstream f("date.in");
    f>>n>>m;
    for(i=1;i<=n;i++)
        f>>a[i];
    for(i=1;i<=m;i++)
        f>>b[i];
    f.close();
}
int  maxim(int c[],int q){
        int i; int Max=c[1];
        for(i=2;i<=q;i++)
            if(c[i]>Max)
                Max=c[i];
        return Max;
}
int main()
{
    citire();
    int Max1=maxim(a,n),Max2=maxim(b,m);
    ofstream g("date.out");
    int i;
    for(i=1;i<=n;i++)
        if(a[i]!=Max2)
            g<<a[i]<<" ";
    g<<endl;
    for(i=1;i<=m;i++)
        if(b[i]!=Max1)
            g<<b[i]<<" ";
    g.close();
    return 0;
}
