#include <iostream>
#include <fstream>
using namespace std;
int n,x[60],nr;
int c[60];
ofstream g;
ifstream f;
void citire(){
    f.open("cartezian.txt");
    f>>n;
    for(int i=1;i<=n;i++)
        f>>c[i];
    f.close();
}
void afisare( )
{
    for(int i=1;i<=n;i++)
        g<<x[i]<<" ";
    g<<endl;
    nr++;
}
void backt(){
    int k=1;
    x[k]=0;
    while(k>0)
        if(x[k]<c[k]){
            x[k]++;
            if(x[k]==n) afisare();
            else x[++k]=0;
        }
        else k--;
}
int main()
{
    citire();
    g.open("produs.txt");
    backt();
    g.close();
    cout<<nr;
    return 0;
}
