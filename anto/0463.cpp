#include <iostream>

using namespace std;
int f(int m,int n){
    if(m==0) return n+1;
    if(m>0 && n==0) return f(m-1,1);
    if(m>0&& n>0) return f(m-1,f(m,n-1));
}
int main()
{
    cout<<f(1,2);
    float a,b,c;
    cin>>a>>b;
    c=a>b?a:b;
    cout<<c;
    return 0;
}
