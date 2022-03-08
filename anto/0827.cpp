#include <iostream>
using namespace std;
int sc(int x[],int n){
    if(n!=0)
        if (x[n]>=0)return sc(x,n-1)+x[n];
        else sc(x,n-1);
    else return 0;
}
int main()
{
    int x[30],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    cout<<sc(x,n);
    return 0;
}
