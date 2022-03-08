#include <iostream>
using namespace std;
int main()
{
    int n,nr=0,p,x,i;
    cin>>n;
    x=2;
    while(nr!=n){
        p=0;
        for(i=2;i*i<=x;i++)
            if(x%i==0){
                p=i;break;
            }
        if(p==0)
            nr++;
        x++;
    }
    cout<<x-1;
    return 0;
}
