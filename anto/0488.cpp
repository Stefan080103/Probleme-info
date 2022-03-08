#include <iostream>
#include <fstream>
using namespace std;
int n,m,x[30];
char a[11];
struct cuvint{char cuv[20];};
cuvint v[9];
ofstream g;
void citire(){
    cin>>n;
    int i;
    for(i=1;i<=n;i++){
        cin>>v[i].cuv;
        cin.get();
    }
    ifstream f("culori.in");
    char y;
    while(f>>y)
        a[++m]=y;
    f.close();
}
int validare(int q){
    int i;
    for(i=1;i<q;i++)
        if(x[i]==x[q])
            return 0;
    return 1;
}
void afisare(){
    int i;
    for(i=1;i<=n;i++)
        g<<"("<<v[i].cuv<<","<<a[x[i]]<<")";
    g<<endl;
}
void backt(int k){
    int i;
    for(i=1;i<=m;i++){
        x[k]=i;
        if(validare(k))
            if(k==n)
                afisare();
            else backt(k+1);
        else;
    }
}
int main()
{
    citire();
    g.open("culori.out");
    backt(1);
    g.close();
    return 0;
}
