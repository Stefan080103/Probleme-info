#include <iostream>
using namespace std;
int main()
{
    int n,a[50][50],i,j,ok=0;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n/2;j++)
            if(a[i][j]!=a[i][n+1-j]) ok=1;
    if(ok==0) cout<<"este simetrica fata de verticala"<<endl;
    else  cout<<"nu este simetrica fata de verticala"<<endl;
    ok=0;
    for(i=1;i<=n/2;i++)
        for(j=1;j<=n;j++)
            if(a[i][j]!=a[n+1-i][j]) ok=1;
    if(ok==0) cout<<"simetrica fata de orizontala";
    else cout<<"nu este simetrica fata de orizontale";
    return 0;
}
