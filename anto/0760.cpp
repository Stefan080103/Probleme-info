#include <iostream>
using namespace std;
int main()
{
    int b,c,p,u;
    cin>>b>>c;
    p=1;
    while(b>0){
        u=b%10;
        if(u!=c)
            p=p*u;
        b=b/10;}
    cout<<p;
    return 0;
}
