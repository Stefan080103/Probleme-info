#include <iostream>
using namespace std;
int x[50];
int main()
{
    int Max,n,a[50][50],i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(a[i][j]%2==0)
                x[i]++;
    Max=0;
    for(i=1;i<=n;i++)
        if(x[i]>Max) Max=x[i];
    for(i=1;i<=n;i++)
        if(x[i]==Max){cout<<i;break;}
    return 0;
}
