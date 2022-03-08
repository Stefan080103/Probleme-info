#include <iostream>
using namespace std;
int a[5],i;
int main()
{
    for(i=0;i<5;i++)
        a[i]=(i+1)*10;
    for(i=1;i<5;i++)
        a[i]-=a[i-1];
    for(i=0;i<5;i++)
        cout<<a[i]<<" ";
    return 0;
}
