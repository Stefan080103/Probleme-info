#include <iostream>
using namespace std;
int main()
{
    int s=0,nr=0,a[11],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        if(a[i]>0){
            s=s+a[i];
            nr++;
        }
    if(nr>0)
         cout<<s*1.0/nr;
    return 0;
}
