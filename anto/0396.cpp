#include <iostream>
using namespace std;
int main()
{
    int a[101],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        if(a[i]%2==0)
            cout<<a[i]<<" ";
    cout<<endl;
    for(i=1;i<=n;i++)
        if(a[i]%2!=0)
            cout<<a[i]<<" ";
    return 0;
}
