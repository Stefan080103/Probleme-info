#include <iostream>
using namespace std;
int main()
{
    int t,u,p;
    cin>>t;
    p=1;
    do{
        u=t%10;
        if(u%2!=0)
            p=p*u;
        t=t/10;
    }while(t!=0);
    cout<<p;
    return 0;
}
