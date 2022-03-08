#include <iostream>
using namespace std;
int sc(int x[],int n){
    if(n==1) return x[1];
     else return sc(x,n-1)+x[n];
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
