#include <iostream>

using namespace std;

int main()
{
    int n,a[51],x,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>x;
    for(i=1;i<=n;i++)
        if(a[i]%2==0)
            a[i]=a[i]-x;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
