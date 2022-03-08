#include <iostream>
using namespace std;
int main()
{
    int n,x[101],i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    for(i=n;i>=1;i--)
        if(x[i]%2==0)
            cout<<x[i]<<' ';
    return 0;
}
