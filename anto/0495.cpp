#include <iostream>

using namespace std;

int main()
{
    int n,x,y,d;
    cin>>n;
    x=1;y=n;d=2;
    while(x<y){
        if(n%d==0){
            x=d;
            y=n/d;
        }
        d++;
    }
    if(x==y) cout<<"d"<<" "<<x;
    else cout<<"n";
    return 0;
}
