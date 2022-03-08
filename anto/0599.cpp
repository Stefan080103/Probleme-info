#include <iostream>
#include <fstream>
using namespace std;
int a[10001];
int main()
{
    int i,x,y,n;
    ifstream f("bac.txt");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        a[x]=1;
    }
    int nr=0,k;
    while(f>>x>>y)
    {
        k=0;
        for(i=x;i<=y;i++)
            if(a[i]==1) k=1;
        if(k==0) nr++;
    }
    f.close();
    cout<<nr;
    return 0;
}
