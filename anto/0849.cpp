#include <iostream>
#include <fstream>
using namespace std;
int n,m,x[60],nr;
char v[60];
ofstream g;
void ordonare(){
    int i,j;
    char aux;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
void afisare( int k)
{
    for(int i=1;i<=k;i++)
        cout<<v[x[i]];
    cout<<endl;
    nr++;
}
int valid(int k){
    int i;
    for(i=1;i<k;i++)
        if(x[k]<=x[i])
            return 0;
    return 1;
}
void comb(int k){
    for(int i=1;i<=n-m+k;i++){
        x[k]=i;
        if(valid(k))
            if(k==m) afisare(k);
            else comb(k+1);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    ordonare();
    comb(1);
    cout<<nr;
    return 0;
}
