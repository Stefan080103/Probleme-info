#include <iostream>

using namespace std;

int main()
{
    int n,a[100],i,x;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    x=a[1];
    for(i=1;i<=n;i++)
        if(a[i]>=a[n])
            a[i]=x;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
