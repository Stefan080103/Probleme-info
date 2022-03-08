#include <iostream>
using namespace std;
int main()
{
    int a[1001],n,i,m,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        s=s+a[i];
    m=s*1.0/n;
    for(i=1;i<=n;i++)
        if(a[i]==0)
            a[i]=m;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
