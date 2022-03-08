#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    int n,m,x,s,pm,pn;
    cin>>m>>n>>x;
    s=0;
    pm=pn=1;
    while(m<=n){
        if(m%x==0) s+=m,pm=x;
        if(n%x==0 && m!=n) s+=n,pn=x;
        m+=pm;
        n-=pn;
    }
    cout<<s;
    */
    int n,k,a[100][500];
    int i,j;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        for(j=1;j<=n*k;j++)
            if(j%k==0)
            a[i][j]=i+j/k-1;
            else a[i][j]=i+j/k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n*k;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
