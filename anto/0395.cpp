#include <iostream>
using namespace std;
int main()
{
    int a[51],n,i,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        if(i%2==0 && a[i]%2!=0)
            s=s+a[i];
    cout<<s;
    return 0;
}
