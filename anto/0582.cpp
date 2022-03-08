#include <iostream>

using namespace std;

int main()
{
    int n,i=1,k=1;
    cin>>n;
    while(k*k<=n) k+=++i;
        cout<<k;
    return 0;
}
