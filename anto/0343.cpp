#include <iostream>
using namespace std;
int main()
{
    int a[1001],n,i,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i=i+2)
        if(a[i]%2==0)
            s=s+a[i];
    if(s>0)
        cout<<s;
    return 0;
}
