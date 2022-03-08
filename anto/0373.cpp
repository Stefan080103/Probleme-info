#include <iostream>
using namespace std;
int a[6],i;
int main()
{
    for(i=0;i<6;i++) a[i]=0;
    for(i=0;i<3;i++) a[2*i+1]=i+1;
    for (i=0;i<6;i++)
        cout<<a[i]<<" ";
    return 0;
}
