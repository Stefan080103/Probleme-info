#include <iostream>
using namespace std;
int main()
{
    int n ,x ,i;
    cin>>n>>x;
    for(i=1;i<=n;i++)
        x=x*x;
    cout<<x;
    return 0;
}
