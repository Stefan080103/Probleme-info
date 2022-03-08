#include <iostream>
using namespace std;
int main()
{
    int i,j,n,m,aux,a[50][50];
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    for(j=1;j<=m;j++){
        aux=a[1][j];
        for(i=2;i<=n;i++)
            a[i-1][j]=a[i][j];
        a[n][j]=aux;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
