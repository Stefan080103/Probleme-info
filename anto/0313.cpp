#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float d, s;
    cin>>s>>n>>d;
    for(i=1;i<=n;i++)
        s=s+s*d/100;
    cout<<s;
    return 0;
}
