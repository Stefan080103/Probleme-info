#include <iostream>
#include <fstream>
using namespace std;
struct nod{float info; nod* adr;};
ofstream g;
nod* CreareNod(float x){
    nod *p;p=new nod;p->info=x;p->adr=NULL;
    return p;
}
nod *CreareLista(){
    nod *p,*q,*c;float x;
    ifstream f("lista.in");
    f>>x;p=c=CreareNod(x);
    while(f>>x){
        q=CreareNod(x);
        p->adr=q;
        p=q;
    }
    f.close();
    return c;
}
void afisare(nod *p){
    while(p){
        g<<p->info<<" ";p=p->adr;
    }
    g<<endl;
}
float minim(nod* p){
    float Min=p->info;
    while(p){
        if(p->info<Min)
            Min=p->info;
        p=p->adr;
    }
    return Min;
}
void adaugare(nod* p,float x){
    while(p->adr)
        p=p->adr;
    nod *q=CreareNod(x);
    p->adr=q;
}
void eliminprim(nod *&p){
    nod *q=p;p=p->adr;
    delete q;
}
int main()
{
    nod *cap; float Min;
    cap=CreareLista();
    g.open("lista.out");
    afisare(cap);
    Min=minim(cap);
    adaugare(cap,Min);
    afisare(cap);
    eliminprim(cap);
    afisare(cap);
    //dislocare lista
    while(cap)
        eliminprim(cap);
    g.close();
    return 0;
}
