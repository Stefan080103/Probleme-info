#include <iostream>
#include <fstream>
using namespace std;
int n,m,a[101],b[101];
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
int main()
{
    citire();
    int i,j;
    ofstream g("date1.out");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            if(a[i]==b[j])
                break;
        if(j>m) g<<a[i]<<" ";
    }
    g.close();
    g.open("date2.out");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            if(b[i]==a[j])
                break;
        if(j>n) g<<b[i]<<" ";
    }
    g.close();
    return 0;
}
