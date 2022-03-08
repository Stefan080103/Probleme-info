//df recursiv + repr dinamica
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
    viz[x]=1; int aux;
    for(nod*p=L[x];p!=NULL;p=p->adr)
        if(viz[p->nr]==0) df(p->nr);
}
int main()
{
    reprezentare();
    df(1); int s=0;
    for(int i=1;i<=n;i++)
        s=s+viz[i];
    if(s==n) cout<<"conex";
    else cout<<"nu este conex";
    return 0;
}
