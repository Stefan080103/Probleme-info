#include <iostream>
using namespace std;
void p6(int y,int &s){
    int nr=0,d=2;
    while(y>1){
        if(y%d==0){
            nr++;
        while(y%d==0)
                y=y/d;
        }
        d++;
    }
    if(nr>2) s=1;
    else s=0;
}
int main()
{
    int x,s;
    cin>>x;
    p6(x,s);
    cout<<s;
    return 0;
}
