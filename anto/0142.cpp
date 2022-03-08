#include <iostream>

using namespace std;

int main()
{
    int a[10],i,k=0,*p;
    for(i=0;i<=10;i++) a[i]=k++;
    p=a;
    cout<<*p<<""<<a[0]<<endl;
    return 0;
}
