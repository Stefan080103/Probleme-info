#include <iostream>
using namespace std;
int main()
{
    int a,n,o1,o2;
    cin>>a>>n;
    o1=o2=0;
    while(a>0){
        if(a%10%2==0)
            o1=o1*10+a%10;
        a=a/10;
    }
    while(n>0){
        if(n%10%2!=0)
            o2=o2*10+n%10;
        n=n/10;
    }
    cout<<o1<<endl<<o2;
    return 0;
}
