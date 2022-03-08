#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>9 && n%10==n/10%10+1)
        n=n/10;
    if(n>9)
        cout<<0;
    else
        cout<<1;
    return 0;
}
