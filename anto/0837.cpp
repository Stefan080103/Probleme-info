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
void backt(){
    int k=1;
    x[k]=0;
    while(k>=1)
        if(x[k]<n){
            x[k]++;
            if (k==n)
                 afisare(k);
            else x[++k]=x[k-1];
        }else {k--; afisare(k);}
}
void backtinv(){
    int k=1;
    x[k]=n+1;
    while(k>=1)
        if(x[k]>1){
            x[k]--;
            if (k==n)
                 afisare(k);
            else x[++k]=x[k-1];
        }else {k--; afisare(k);}
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    backt();
    //backtinv();
    cout<<nr;
    return 0;
}
