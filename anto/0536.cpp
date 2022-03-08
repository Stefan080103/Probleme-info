#include <iostream>
using namespace std;

int main()
{
    int n,a[51][51];
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    int nr=0;
    for(i=2;i<=n;i++)
        for(j=1;j<i;j++)
            if(a[i][j]) nr++;
    if(nr) cout<<"nu este triunghiulara superior";
    else cout<<"este triunghiulara superior";
    return 0;
}

