#include <iostream>
#include <fstream>
using namespace std;
struct muchie{int e1,e2;};
int n,m; int viz[101];
muchie u[101];
void reprezentare(){
    ifstream f("gno.txt");
    f>>n;
    int x,y;
    while(f>>x>>y){
        u[++m].e1=x;
        u[m].e2=y;
    }
    f.close();
}
int adiacente(int a, int b){
    int i=1;
    for(i=1;i<=n;i++)
        if(u[i].e1==a && u[i].e2==b || u[i].e1==b && u[i].e2==a)
            return 1;
    return 0;
}
void bf(int x){
    int c[101],b,v,i;
    //init coada
    b=v=1;
    c[1]=x;
    viz[x]=2;// nodurile de plecare se marcheaza diferit fata de celelalte noduri
    while(b<=v){
        // adaug toate nodurile nevizitate adiacente cu c[b]
        for(i=1;i<=n;i++)
            if(!viz[i] && adiacente(i,c[b])==1){
                c[++v]=i;
                viz[i]=1;
            }
        //elimin nod din coada
        b++;
    }
}
int main()
{
    reprezentare();
    //toate parcurgerile
    int i;
    for(i=1;i<=n;i++)
        if(viz[i]==0)
            bf(i);
    //numarare valori egale cu 2 pe vectorul viz
    int nr=0;
    for(i=1;i<=n;i++)
        if(viz[i]==2) nr++;
    //afisare rezultate
    ofstream g("conex.txt");
    g<<nr-1<<endl;
    for(i=2;i<=n;i++)
        if(viz[i]==2) g<<"1"<<" "<<i<<endl;
    g.close();
    return 0;
}
