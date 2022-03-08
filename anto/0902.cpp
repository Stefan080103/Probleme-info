#include <iostream>
#include <fstream>
using namespace std;
struct nod{int nr; nod *adr;};
nod * L[101];
int n,m;
nod * nou(int x){
    nod *aux=new nod;
    aux->nr=x;
    aux->adr=NULL;
    return aux;
}
void adaug(int a,int b){
    nod *p=nou(a);
    p->adr=L[b];
    L[b]=p;
}
void reprezentare(){
    ifstream f("GNO.in");
    f>>n>>m;
    int x,y,i;
    for(i=1;i<=m;i++){
        f>>x>>y;
        // adaug pe x la lista lui y
        adaug(x,y);
        //adaug pe y la lista lui x
        adaug(y,x);
    }
    f.close();
}
int viz[101];
void df(int x){
    nod *v,*p,*q;
    v=nou(x);
    viz[x]=x;
    while(v){
        p=L[v->nr];
        while(p)
            if(viz[p->nr]==0) break;
            else p=p->adr;
        //adaug sau elimin
        if(p){
            q=nou(p->nr);
            q->adr=v;
            v=q;
            viz[p->nr]=x;
        }
        else {
            q=v->adr;
            delete v;
            v=q;
        }
    }
}
int a[101];
int main()
{
    reprezentare();
    int i,j;
    for(i=1;i<=n;i++)
        if(viz[i]==0)
            df(i);
    for(i=1;i<=n;i++)
        a[viz[i]]++;
    int Max;
    Max=a[1];
    for(i=2;i<=n;i++)
        if(a[i]>Max)
            Max=a[i];
    ofstream g("CCMAX.out");
    for(i=1;i<=n;i++)
        if(a[i]==Max){
            for(j=1;j<=n;j++)
                if(viz[j]==i) g<<j<<" ";
            g<<endl;
        }
    g.close();
    return 0;
}
