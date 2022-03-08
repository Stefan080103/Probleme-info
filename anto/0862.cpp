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
    g.open("comb.txt");
    for(m=n;m>=1;m--)
        backt();
    g.close();
    cout<<nr;
    return 0;
}
