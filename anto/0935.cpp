#include <iostream>
using namespace std;
void p2(int y,int &x){
    while(y>9) y=y/10;
    x=y;
}
int main()
{
    int y,x;
    cin>>y;
    p2(y,x);
    cout<<x;
    return 0;
}
