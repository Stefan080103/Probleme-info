#include <iostream>

using namespace std;

int main()
{
    int n,k,a[101],i,nr=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n-k-1;i++)
        if(a[i]==a[i+k+1])
            nr++;
    cout<<nr;
    return 0;
}
