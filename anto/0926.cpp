#include <iostream>
using namespace std;
int diviz(int n){
    int s=0,i;
    for(i=2;i<=n;i++)
        if(n%i==0) s=s+i;
    return s;
}
int main()
{
    int n;
    cin>>n;
    cout<<diviz(n);
    return 0;
}
