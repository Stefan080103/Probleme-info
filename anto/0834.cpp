#include <iostream>
#include <fstream>
using namespace std;
int n,m,x[60],nr,v[60];
ofstream g;
void afisare( int k)
{
    for(int i=1;i<=k;i++)
        cout<<v[x[i]]<<" ";
    cout<<endl;
    nr++;
}
void comb(){
    int k=1;
    x[k]=0;
    while(k>=1)
        if(x[k]<n-m+k){
            x[k]++;
            if(k==m)
                afisare(k);
            else x[++k]=x[k-1];
        }else k--;
}
void combinv(){
    int k=1;
    x[k]=n+1;
    while(k>=1)
        if(x[k]>m-k+1){
            x[k]--;
            if(k==m)
                afisare(k);
            else x[++k]=x[k-1];
        }else k--;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    comb();
    //combinv();
    cout<<nr;
    return 0;
}
