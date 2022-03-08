#include <iostream>
using namespace std;


int cmmdc(int x,int y){

    while(x!=y){
        if(x>y) x=x-y;
        else y=y-x;
    }
    return y;
}


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<cmmdc(cmmdc(a,b),c);
    return 0;
}
