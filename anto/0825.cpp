#include <iostream>
#include <cmath>
using namespace std;
int pol(int a[],int n,int x,int nr){
    if(n==nr) return a[nr];
    return a[nr]*pow(x,n-1)+pol(a,n,x,nr+1);
}
int main()
{
    int a[50],x,n,nr=0,i;
    cin>>n; cin>>x;
    for(i=0;i<=n;i++) cin>>a[i];
    cout<<pol(a,n,x,nr);
    return 0;
}
