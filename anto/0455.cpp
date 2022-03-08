#include <iostream>

using namespace std;
void f(int n)
{
    int i;
    for(i=n;i>=1;i--){
        f(n-1);
        cout<<i;
    }
}
int main()
{
    int n,x,y,d;
    cin>>n;
    d=2;
    x=1;y=n;
    while(x<y){
        if(n%d==0)
            x=d,y=n/d;
        d++;
    }
    if(x==y) cout<<'D'<<x;
    else cout<<'N';
    return 0;
}
