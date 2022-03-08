#include <iostream>
#include <fstream>
using namespace std;
//reprezentare gno prin vector muchii
struct muchie{int e1,e2;};
int n,viz[101],m;
muchie u[99*100/2+1];
void reprezentare(){
    int i;
    cin>>n>>m;
    for(i=1;i<=m;i++)
        cin>>u[i].e1>>u[i].e2;
}
int adiacent(int a,int b){
    int i;
    for(i=1;i<=m;i++)
        if(u[i].e1==a && u[i].e2==b || u[i].e1==b && u[i].e2==a)
            return 1;
    return 0;
}
void DF(int x){
    int s[101],v,i;
    //initializare stiva
    v=1; s[1]=x;
    viz[x]=x;
    //
    while(v){
        //caut
        for(i=1;i<=n;i++)
            if(viz[i]==0 && adiacent(i,s[v])==1)
                break;
        //decid
        if(i<=n){
                viz[++v]=i;
                viz[i]=x;
            }
    }
}
int main(){
    reprezentare();
    int i,j,Max;
    int v[101];
    //toate parcurgerile ==> componente conexe
    for(i=1;i<=n;i++)
        if (viz[i]==0)
            DF(i);
    //vector aparitii
    for(i=1;i<=n;i++)
        v[viz[i]]++;
    //maximul pe vectorul de aparitii==> lungime cc maxima
    Max=0;
    for(i=1;i<=n;i++)
        if(v[i]>Max)
            Max=v[i];
    //afisare cc maxime
    ofstream g("ccmax.txt");
    for(i=1;i<=n;i++)
        if(v[i]==Max){
            for(j=1;j<=n;j++)
                if(viz[j]==i)
                    g<<j<<" ";
            g<<endl;
        }
    g.close();
    return 0;
}
