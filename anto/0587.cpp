#include <iostream>

using namespace std;

int main()
{
    int n,a[51],i,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
            cin>>a[i];
    for(i=1;i<=n;i++)
        s+=a[i];
    s=s/n;
    for(i=1;i<=n;i++)
        if(a[i]<=s) a[i]=0;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
