#include <iostream>
#include <fstream>
using namespace std;
struct nod{int nr; nod *adr;};
int n,d[101],m;
nod * L[101],*capC,*capB;
nod *nou(int x){
    nod *aux=new nod;
    aux->nr=x;
    aux->adr=NULL;
    return aux;
}
void reprezentare(){
    ifstream f("GNO.txt");
    f>>n;
    int x,y;
    nod *p;
    while(f>>x>>y){
        // adaug nod y la lista lui x
        p=nou(y);
        p->adr=L[x]; L[x]=p;
        // adaug nod x la lista lui y
        p=nou(x);
        p->adr=L[y]; L[y]=p;
    }
    f.close();
}
int grad(int x){
    int nr=0;
    nod *p=L[x];
    while(p)
        nr++,p=p->adr;
    return nr;
}
int pare(){
    for(int i=1;i<=n;i++)
        if(d[i]%2!=0)
            return 0;
    return 1;
}
void sterg_cap(nod *&cap){
    nod *p=cap->adr;
    delete cap;
    cap=p;
}
void sterg_nod(int x, nod * &cap){
    if(x==cap->nr)
        sterg_cap(cap);
    else {
        //caut
        nod *p=cap;
        while(p->adr->nr!=x) p=p->adr;
        //sterg
        nod *q=p->adr;
        p->adr=q->adr;
        delete q;
    }
}
nod *ciclu(int x){
    nod *cap=nou(x);
    nod *p; int y;
    do{
            //primul nod adiacent lui x
        y=L[cap->nr]->nr;
        //adaug nodul la ciclu
        p=nou(y);
        p->adr=cap;
        //actualizari
        sterg_cap(L[cap->nr]);
        sterg_nod(cap->nr,L[y]);
        d[cap->nr]--;
        d[y]--;
        m--;
        cap=p;
    }while(y!=x);
    return cap;
}
nod * grad_nenul(nod *p){
    while(p){
        if(d[p->nr])
            return p;
        p=p->adr;
    }
    return NULL;
}
void inserare( nod * p, nod * q){
    nod *t=p->adr;
    p->adr=q;
    while(q->adr)
        q=q->adr;
    q->adr=t;
}
void dislocare(nod *&cap){
    nod *p;
    while(cap){
        p=cap->adr;
        delete cap;
        cap=p;
    }
}
int main()
{
    reprezentare();
    //gradele
    int i;
    nod * p;
    for(i=1;i<=n;i++)
        d[i]=grad(i);
    //
    if(!pare()) cout<<"nu este eulerian";
    else {
            //nr muchii
            int m=0;
            for(i=1;i<=n;i++)
                m=m+d[i];
                m=m/2;
            //
            capC=ciclu(1);
            while(m){
              p=grad_nenul(capC);
              capB=ciclu(p->nr);
              inserare(p,capB->adr);
              //dislocare cap rezidual
              delete capB;
            }
            //afisare ciclu eulerian
            p=capC;
            while(p){
                cout<<p->nr<<" ";
                p=p->adr;
            }

    }
    //dislocare graf;
    for(i=1;i<=n;i++)
        dislocare(L[i]);

    return 0;
}
