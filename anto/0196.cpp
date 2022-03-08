#include <iostream>
using namespace std;
int main()
{
    int n,x=1,y=1,p,d=2;
    cin>>n;
    while(n>1){
        p=0;
        while(n%d==0){
            n=n/d;p++;
        }
        if(p%2==1){
            y=y*d;p--;
        }
        while(p%2==0&&p>0){
            x=x*d;p=p-2;
        }
        d=d+d%2+1;
    }
    cout<<x<<" "<<y;
    return 0;
}
