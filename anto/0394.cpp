#include <iostream>
using namespace std;
int main()
{
    int nr=0,a[51],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        if(a[i]==a[i-1]+a[i+1])
            nr++;
    cout<<nr;
    return 0;
}

