#include <iostream>

using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    while((n&(1<<x))==0) x++;
    cout<<x;
    return 0;
}
