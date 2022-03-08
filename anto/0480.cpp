#include <iostream>

using namespace std;
struct nod{int info; nod* adr;};
nod* CreareNod(int x){
    nod *q=new nod;
    q->info=x;
    q->adr=NULL;
    return q;
}
nod *CreareLista(){
    nod *q,*p,*c;
    int x;
    cout<<"dati sir incheiat cu 0=";
    cin>>x;
    c=CreareNod(x);
    p=c;
    while(x){
            q=CreareNod(x);
            p->adr=q;
            p=q;
            cin>>x;
    }
    p=c;
    c=c->adr;
    delete p;
    return c;
}
void afisare(nod* p){
    while(p){
        cout<<p->info<<" ";
        p=p->adr;
    }
}
void dislocare(nod *p){
    nod *q=p;
    p=p->adr;
    delete q;
}
void adaug(nod *&d){
    nod *t=CreareNod(d->info);
    t->adr=d->adr;
    d->adr=t;
    d=t;
}
int main()
{
    nod *p,*cap; int k,i;
    cap=CreareLista();
    afisare(cap);
    cout<<endl;
    p=cap; k=1;
    while(p){
        for(i=1;i<=k;i++)
            adaug(p);
        if(p->adr)
            p=p->adr->adr;
        else p=p->adr;
        k=k+2;
    }
    afisare(cap);
    dislocare(cap);
    return 0;
}
