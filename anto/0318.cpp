#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float x, p;
    cin>>n>>x;
    p=1;
    for(i=1;i<=n;i++)
        p=p*x;
    cout<<p;
    return 0;
}
