#include <iostream>
#include <fstream>
using namespace std;
int n,m,x[60],nr;
ofstream g;
void afisare( int k)
{
    for(int i=1;i<=k;i++)
        g<<x[i]<<" ";
    g<<endl;
    nr++;
}
void backt(){
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
int main()
{
    cin>>n>>m;
    g.open("comb.txt");
    backt();
    g.close();
    cout<<nr;
    return 0;
}
