#include <fstream>
using namespace std;
void CitireVector(int v[],int &n){
    ifstream f("fis2.txt");
    f>>n;
    for(int i=1;i<=n;i++)
        f>>v[i];
    f.close();
}
int NumarCifre(int a){
    int nr=1;
    while(a>9){
        nr++;
        a=a/10;
    }
    return nr;
}
int MaxCifre(int v[],int n){
    int Max=0,i,nr;
    for(i=1;i<=n;i++){
        nr=NumarCifre(v[i]);
        if(nr>Max)
            Max=nr;
        v[i]=v[i]*10+nr;
    }
    return Max;
}
void afisare(int v[],int n){
    int Max=MaxCifre(v,n);
    ofstream g("fis2.out");
    for(int i=1;i<=n;i++)
        if(v[i]%10==Max)
            g<<v[i]/10<<" ";
    g.close();
}
int main()
{
    int x[51],n;
    CitireVector(x,n);
    afisare(x,n);
    return 0;
}
