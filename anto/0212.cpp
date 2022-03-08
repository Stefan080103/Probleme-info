#include <iostream>
using namespace std;
int main()
{
    int n,o;
    cin>>n;
    o=0;
    while(n>0){
        if(n%10%3==0)
            o=o*10+n%10;
        n=n/10;
    }
    cout<<o;
    return 0;
}
