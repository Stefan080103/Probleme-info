#include <iostream>
int a[6],i;
using namespace std;
int main()
{
    for(i=0;i<6;i++) a[i]=i-1;
    cout<<a[2]<<" ";
    cout<<a[a[2]]<<" ";
    cout<<a[a[a[3]]]<<" ";
    return 0;
}
