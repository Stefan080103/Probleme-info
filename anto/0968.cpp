#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x<0)x=-x;
    int p=1;
    int i;
    for(i=1;i<=x;i++)
        p=p*4%10;
    cout<<p;
    return 0;
}
