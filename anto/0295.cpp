#include <iostream>
using namespace std;
int main()
{
    int n,i,x,nr;
    cin>>n;
    nr=0;
    for(i=1; i<=n; i++){
        cin>>x;
        if(x%2==0) nr++;
    }
    cout<<nr<<' '<<n-nr;
    return 0;
}
