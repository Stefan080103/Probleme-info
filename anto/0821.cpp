#include <iostream>

using namespace std;

int main()
{
    int n,k,v[61],i,j;
    cin>>n;
    cin>>k;
    for(i=1;i<=n;i++)
        cin>>v[i];
    v[n+1]=-1;
    k=k-1;
    while(v[1]!=-1){
        for(i=1;i<=n;i+=k){
            cout<<v[i]<<" ";
            for(j=i;j<n;j++)
                v[j]=v[j+1];
        }
        n=n-n/k;
    }


    return 0;
}
