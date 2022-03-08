#include <iostream>
using namespace std;
int main()
{
    int a[500],Max,n,nr=0,i;
    cout<<"dati lungimea unui vector";
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    Max=a[1];
    for(i=1;i<=n;i++)
        if(a[i]>Max)
            Max=a[i];
    for(i=1;i<=n;i++)
        if(a[i]==Max)
            nr++;
    cout<<nr;
    return 0;
}
