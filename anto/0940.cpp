#include <iostream>
using namespace std;
void p3(int a,int &x,int &y){
    while(a>999)
        a=a/10;
    x=a%10;
    y=a%100/10;
}
int main()
{
    int a,x,y;
    cin>>a;
    p3(a,x,y);
    cout<<x<<" "<<y;
    return 0;
}
