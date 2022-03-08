#include <iostream>
#include <fstream>
using namespace std;
struct nod{ int nr; nod*adr;};
int n;
nod *L[101];
nod *nou(int x){
    nod *aux =new nod;
    aux->nr=x;
    aux->adr=NULL;
    return aux;
}
void reprezentare(){
    ifstream f("GNO.txt");
    f>>n;
    int x,y;
    nod *aux;
    while(f>>x>>y){
        aux=nou(x);
        aux->adr=L[y];
        L[y]=aux;
        aux=nou(y);
        aux->adr=L[x];
        L[x]=aux;
    }
    f.close();
}
int viz[101];
void DF(int x){
    nod *v;
    nod *p,*q;
    //init stiva
    v=nou(x);
    viz[x]=1;
    while(v){
        //caut nod nevizitat in lista de adiacenta a nodului  s[v]
        p=L[v->nr];
        while(p)
            if(viz[p->nr]==0) break;
            else p=p->adr;
        //adaug sau elimin
        if(p){
            q=nou(p->nr);
            q->adr=v;
            v=q;
            viz[q->nr]=1;
        }
        else {
            q=v->adr;
            delete v;
            v=q;
        }
    }
}
int main()
{
    reprezentare();
    DF(1);
    int i,s=0;
    for(i=1;i<=n;i++)
        s+=viz[i];
    if(s==n) cout<<"conex";
    else cout<<"nu este conex";
    return 0;
}
