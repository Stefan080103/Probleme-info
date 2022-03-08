#include <iostream>
using namespace std;
int main()
{
    int a[101],n,nr=0,s=0,Max,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        if(a[i]<5)
            nr++;
    cout<<nr<<" ";
    cout<<endl;
    nr=0;
    for(i=1;i<=n;i++)
        if(a[i]>5){
            s=s+a[i];
            nr++;
        }
    if(nr>0)
        cout<<s*1.0/nr;
    cout<<endl;
    nr=0;
    for(i=1;i<=n;i++)
        if(a[i]==7)
        nr++;
    cout<<nr;
    cout<<endl;
    Max=a[1];
    for(i=2;i<=n;i++)
        if(a[i]>Max)
            Max=a[i];
    cout<<Max;
    return 0;
}
