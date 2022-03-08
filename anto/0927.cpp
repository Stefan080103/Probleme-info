#include <iostream>
using namespace std;
void p13(int y,int &s){
    int nr=0,i;
    for(i=2;i<=y/2;i++)
        if(y%i==0) nr++;
    if(nr%2==0) s=1;
    else s=0;
}
int main()
{
    int n,s;
    cin>>n;
    p13(n,s);
    cout<<s;
    return 0;
}
