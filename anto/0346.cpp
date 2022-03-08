#include <iostream>
using namespace std;
int main()
{
    int a[1001],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        cout<<a[i]<<" "<<"0"<<" ";
    return 0;
}
