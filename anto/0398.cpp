#include <iostream>
using namespace std;
int main()
{
    int i,n,m,a[101],b[101],c[202];
    cout<<"dati lungimea vectorului a= ";
    cin>>n;
    cout<<"dati lungimea vectorului b= ";
    cin>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=m;i++)
        cin>>b[i];
    for(i=1;i<=n;i++)
        c[i]=a[i];
    for(i=1;i<=m;i++)
        c[n+i]=b[i];
    for(i=1;i<=n+m;i++)
        cout<<c[i]<<" ";
    return 0;
}
