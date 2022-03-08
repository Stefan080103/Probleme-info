#include <iostream>

using namespace std;

int main()
{
    int i,a[10]={0,1,2,3,4,5,6,7,8,9},*p=a;
    for(i=0;i<10;i++) cout<<a[i];
    cout<<endl;
    for(i=1;i<=10;i++) cout<<*p++;
    return 0;
}
