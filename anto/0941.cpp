#include <iostream>
using namespace std;
int p4(int x){
    int y=x%10;
    while(x>9) x=x/10;
    if(y<x) y=x;
    return y;
}
int main()
{
    int x;
    cin>>x;
    cout<<p4(x);
    return 0;
}
