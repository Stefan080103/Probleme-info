#include <iostream>
using namespace std;
int oglinda(int n){
    int o=0;
    while(n>0){
        if(n%10%2!=0)
            o=o*10+n%10;
        n=n/10;
    }
    return o;
}
int main()
{
    int n;
    cin>>n;
    cout<<oglinda(n);
    return 0;
}
