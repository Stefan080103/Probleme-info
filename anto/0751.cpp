#include <iostream>
using namespace std;
int main()
{
    int n,y,p,u;
    cin>>n;
    p=1;
    y=0;
    while(n>0){
        u=n%10;
        if(u%2!=0){
            y=y+u*p;
            p=p*10;
        }
        n=n/10;
    }
    if(p==1) cout<<"nu exista cifre impare";
    else cout<<y;
    return 0;
}
