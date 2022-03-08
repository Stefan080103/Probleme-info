#include <iostream>
using namespace std;
int n,x[60],nr,v[60];
void afisare( int k)
{
    for(int i=1;i<=k;i++)
        cout<<v[x[i]]<<" ";
    cout<<endl;
    nr++;
}
void backt(int k){
    for(int i=1;i<=n;i++){
        x[k]=i;
        afisare(k);
        if(k<n) backt(k+1);
    }
}
void backtinv(int k){
    for(int i=n;i>=1;i--){
        x[k]=i;
        afisare(k);
        if(k<n) backtinv(k+1);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    backt(1);
    //backtinv(1);
    cout<<nr;
    return 0;
}
