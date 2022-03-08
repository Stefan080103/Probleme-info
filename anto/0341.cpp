#include <iostream>
using namespace std;
int main()
{
    int a[1001],i,n,nr=0;
    cout<<"dati lungimea unui vector";
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n-1;i++)
        if(a[i]%a[n]==0)
            nr++;
    cout<<nr;
    return 0;
}
