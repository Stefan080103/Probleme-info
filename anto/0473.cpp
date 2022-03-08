#include <iostream>
using namespace std;
int f(int a, int b, int e){
    int x;
    if(a<2)
        return e+1;
    if(a%b==0){
        if(e==0)
            cout<<b<<" ";
        e++;
        return f(a/b,b,e);
    }else {
        x=e+1;
        e=0;
        b++;
        return x*f(a,b,e);
    }
}
int main()
{
    int x,y,e;
    cin>>x;
    y=2;
    e=0;
    cout<<f(x,y,e);
    return 0;
}
