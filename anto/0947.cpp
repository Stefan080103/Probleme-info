#include <iostream>
using namespace std;
int p3(int a){
    int Max=-1;
    while(a>0){
        if(a%10%2!=0)
            if(a%10>Max) Max=a%10;
        a=a/10;
    }
    return Max;
}
int main()
{
    int a;
    cin>>a;
    cout<<p3(a);
    return 0;
}
