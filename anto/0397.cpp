#include <iostream>
using namespace std;
int main()
{
    int a[51],b[51],n,m,i,j,ok;
    cout<<"dati lungimea vectorului a : "; cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cout<<"dati lungimea vectorului b : "; cin>>m;
    for(i=1;i<=m;i++)
        cin>>b[i];
    for(i=1;i<=n;i++){
        ok=0;
        for(j=1;j<=m;j++)
            if(a[i]<=b[j])
                ok=1;
        if(ok==0)
            cout<<a[i]<<" ";
    }
    return 0;
}
