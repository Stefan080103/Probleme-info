#include <iostream>
using namespace std;
int main()
{
    int a[51],n,s=0,nr=0,i;
    float m;
    cout<<"dati lungimea unui sir : ";
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++){
        s=s+a[i];
        nr++;
    }
    m=s*1.0/nr;
    for(i=1;i<=n;i++)
        if(a[i]>m)
            cout<<a[i]<<" ";
    return 0;
}
