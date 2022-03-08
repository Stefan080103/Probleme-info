#include <iostream>
#include <fstream>
using namespace std;
int n,m;
struct muchie{int e1,e2;};
muchie u[50*49/2+1];
ofstream g;
void citire(){
    ifstream f("G1.txt");
    f>>n>>m;
    int i,x,y;
    for(i=1;i<=m;i++){
        f>>x>>y;
        u[i].e1=x;
        u[i].e2=y;
    }
    f.close();
}
void afisare(){
    int i;
    for(i=1;i<=m;i++)
        cout<<u[i].e1<<" "<<u[i].e2<<endl;
}
void incidente(){
    int i,x,ok=1;
    cin>>x;
    if(x<1 || x>n)
        ok=0;
    g.open("muchii.txt");
    if(ok==1)
        for(i=1;i<=m;i++)
            if(u[i].e1==x || u[i].e2==x)
                g<<u[i].e1<<" "<<u[i].e2<<endl;
    g.close();
}
void izolate(){
    int i,j;
    int ok;
    g.open("noduri.txt");
    for(i=1;i<=n;i++){
        ok=1;
        for(j=1;j<=m;j++)
            if(u[j].e1==i || u[j].e2==i)
                ok=0;
        if(ok==1)
            g<<i<<" ";
    }
    g.close();
}
int partiale(){
    return ((1<<n)-1);
}
int main()
{
    citire();
    incidente();
    izolate();
    cout<<partiale();
    return 0;
}
