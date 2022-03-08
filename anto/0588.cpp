#include <iostream>

using namespace std;

int main()
{
    int n,a[50],k,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>k;
    int s=0,nr=0;
    for(i=1;i<=n;i++)
        if(a[i]%2 && nr<k)
            s+=a[i],nr++;
    if(nr<k) cout<<-1;
    else cout<<s;
    return 0;
}
