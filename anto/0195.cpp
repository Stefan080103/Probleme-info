#include <iostream>
using namespace std;
int a[5],b[5],i;
int main()
{
    for(i=0;i<5;i++)
        if(i%2==0) a[i]=1;
        else a[i]=i+2;
    for(i=0;i<5;i++) b[i]=a[i]*2;
    for(i=0;i<5;i++)
        cout<<b[i]<<" ";
    return 0;
}
