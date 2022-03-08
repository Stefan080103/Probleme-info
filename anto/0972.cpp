#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int i,nr=1,l,j;
    int a[20][100];
    for(i=1;i<=n;i++){
        nr=i;
        for(j=1;j<=n*k;j=j+3){
                a[i][j]=a[i][j+1]=a[i][j+2]=nr;
            nr++;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n*k;j++)
                cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
