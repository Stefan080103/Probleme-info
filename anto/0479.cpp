#include <iostream>
#include <fstream>
using namespace std;
ofstream g;
struct nod{int info; nod* adr;};
nod* NodNou(int x){
    nod *q=new nod;
    q->info=x;
    q->adr=NULL;
    return q;
}
nod * CreareLista(char n[]){
    nod *q,*c,*p; int x;
    ifstream f(n);
    f>>x;
    c=p=NodNou(x);
    while(f>>x){
        q=NodNou(x);
        p->adr=q;
        p=q;
    }
    f.close();
    return c;
}
void adaug(nod *&d, nod* &s){
    nod *t=NodNou(s->info);
    d->adr=t;
    d=t;
    s=s->adr;
}
void dislocare(nod *p){
    nod* q;
    while(p){
        q=p;
        p=p->adr;
        delete q;
    }
}
void afisare(nod *p){
    while(p){
        g<<p->info<<" ";
        p=p->adr;
    }
}
int main()
{
    nod *cap1=CreareLista("f1.txt");
    nod *cap2=CreareLista("f2.txt");
    nod *z,*cap3,*p,*q;
    z=cap3=NodNou(cap1->info);
    p=cap1->adr;
    q=cap2;
    while(p && q){
        adaug(z,q);
        adaug(z,p);
    }
    while(p)
        adaug(z,p);
    while(q)
        adaug(z,q);
    g.open("f3.txt");
    afisare(cap1);
    g<<endl;
    afisare(cap2);
    g<<endl;
    afisare(cap3);
    g<<endl;
    dislocare(cap1);
    dislocare(cap3);
    dislocare(cap2);
    return 0;
}
