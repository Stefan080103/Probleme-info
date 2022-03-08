#include <iostream>
#include <fstream>
using namespace std;
int n,x[60],nr;
ofstream g;
void afisare( int k)
{
    for(int i=1;i<=k;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    nr++;
}
void backt(){
    int k=1;
    x[k]=n+1;
    while(k>=1)
        if(x[k]>1){
            x[k]--;
            if (k==n)
                 afisare(k);
            else x[++k]=x[k--];
        }else {k--; afisare(k);}
}
int main()
{
    cin>>n;
    g.open("comb.txt");
    backt();
    g.close();
    cout<<nr;
    return 0;
}
