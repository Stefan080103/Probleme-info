#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cin>>n;
    cout<<1<<" ";
    for(x=2;x<=n/2;x++)
        if(n%x==0)
            cout<<x<<" ";
    cout<<n;
    return 0;
}
