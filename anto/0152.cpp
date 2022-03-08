#include <iostream>
using namespace std;
int cmmdc(int x, int y){
    while(x!=y)
        if(x<y) y=y-x;
        else x=x-y;
    return y;
}
int main(){
    int  a,b,c;
    cin>>a>>b>>c;
    cout<<cmmdc(cmmdc(a,b),c);
}
