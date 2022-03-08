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
int df(int x){
    nod *v,*p,*q;
    v=nou(x);
    viz[x]=1;
    while(v){
        p=L[v->nr];
        while(p)
            if(viz[p->nr]==0) break;
            else {
                    if(viz[p->nr]==viz[v->nr]) return 0;
                    p=p->adr;
            }
        //adaug sau elimin
        if(p){
            q=nou(p->nr);
            q->adr=v;
            v=q;
            viz[p->nr]=-viz[v->nr];
        }
        else {
            q=v->adr;
            delete v;
            v=q;
        }
    }
    return 1;
}
int main()
{
    reprezentare();
    int i;
    for(i=1;i<=n;i++)
        if(viz[i]==0)
            if(df(i)==0) break;
    if(i<n) cout<<"nu este bipartit";
    else{cout<<"bipartit";
        cout<<endl;
        for(i=1;i<=n;i++)
            if(viz[i]==1)
                cout<<i<<" ";
    }
    return 0;
}
