#include <iostream>
using namespace std;
int f(int n,int x){
    if(n){
        x+=1;
        return f(n-1,x)-x;
    }
    return 0;
}
int main()
{
    cout<<f(3,1);
    return 0;
}
