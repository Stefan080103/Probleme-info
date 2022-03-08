#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    while(n<=m) n++,m--;
    while(m<n) m++;n--;
    cout<<n;
    return 0;
}
