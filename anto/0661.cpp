// vector de muchii+ df dinamic +conexitate
#include <iostream>
#include <fstream>
using namespace std;
struct muchie{int e1,e2;};;
muchie u[101*50+1];
int n,m;
struct nod{int nr; nod* adr;};
nod *s[101];
nod *nou(int x){
    nod *aux;
    aux->nr=x;
    aux->adr=NULL;
    return aux;
}
void reprezentare(){
    ifstream f("TEST.in");
    f>>n>>m;
    int i,x,y;
    for(i=1;i<=m;i++){
        f>>x>>y;
        u[i].e1=x;
        u[i].e2=y;
    }
    f.close();
}
int adiacente(int a, int b){
    int i;
    for(i=1;i<=n;i++)
        if(u[i].e1==a && u[i].e2==b || u[i].e1==b && u[i].e2==a)
            return 1;
    return 0;
}
int viz[101];
void DF(int x){
    nod *p;
    p=nou(x);
    viz[x]=1;
    while(p){
        if(viz[p->nr]==0 && adiacente(u[p->nr].e1,u[p->nr].e2))
            break;
        if(p){
            q=nou(p->nr);
            q->adr=p;
            viz[p->nr]=1;
        }
    }
}
int main()
{
    reprezentare();
    DF(1);
    int s=0,i;
    for(i=1;i<=n;i++)
        s=s+viz[i];
    if(s==n) cout<<" conex";
    else cout<<"nu este  conex";
    return 0;
}
