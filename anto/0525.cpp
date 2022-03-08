#include <iostream>

using namespace std;
int a[101][101];
int main()
{
    int m,n,i,j,x=0;
    cin>>n>>m;
    for(i=n;i>=1;i--)
        for(j=m;j>=1;j--)
              a[i][j]=x*x,x+=2;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
