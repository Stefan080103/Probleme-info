#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin>>n;
    for(a=1;a<=n-1;a++)
        for(b=a;b<=n-1;b++)
            if(b%a==0)
                cout<<a<<","<<b;
    return 0;
}
