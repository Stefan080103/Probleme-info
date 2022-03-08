#include <iostream>
using namespace std;
int v[51];
int main()
{
    int i,j,n,a[51][51],nr;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            if(a[i][j]%2!=1) v[i]++;
        if(v[i]>v[0]) v[0]=i;
    }
    for(i=1;i<=n;i++)
        if(i==v[0])
            cout<<  i;
    return 0;
}
