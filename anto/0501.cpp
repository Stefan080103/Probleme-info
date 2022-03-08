#include <iostream>

using namespace std;

int main()
{
    int n,m,a;
    cin>>n>>m;
    if((m-n)%3==0) { a=(m-n)/3+1; cout<<(n+m)/2*a;}
    else cout<<"0";
    return 0;
}
