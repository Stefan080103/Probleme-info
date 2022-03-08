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
void comb(int k){
    for(int i=1;i<=n-m+k;i++){
        x[k]=i;
        if(k==m) afisare(k);
        else comb(k+1);
    }
}
void combinv(int k){
       for(int i=n;i>=m-k+1;i--){
        x[k]=i;
        if(k==m) afisare(k);
        else comb(k+1);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    //comb(1);
    combinv(1);
    cout<<nr;
    return 0;
}
