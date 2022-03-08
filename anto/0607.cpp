#include <iostream>
#include <fstream>
using namespace std;
struct nod{int info;nod* adr;};
ofstream g;
nod* CreareNod(int x){
    nod *p=new nod;
    p->info=x;
    p->adr=NULL;
    return p;
}
nod* CreareLista(){
    nod *p,*q,*c;
    int i,x,n;
    ifstream f("lista.in");
    f>>n;
    f>>x;
    c=p=CreareNod(x);
    for(i=2;i<=n;i++){
        f>>x;
        q=CreareNod(x);
        p->adr=q;
        p=q;
    }
    f.close();
    return c;
}
void afisare(nod *p){
    while(p){
        g<<p->info<<" ";
        p=p->adr;
    }
    g<<endl;
}
void afisare1(nod *p){
    while(p){
        cout<<p->info<<" ";
        p=p->adr;
    }
    cout<<endl;
}
void del(nod *p){
    nod *q=p->adr;
    nod *z=q->adr;
    delete q;
    p->adr=z;
}
void dislocare(nod *p){
    nod*q;
    while(p!=NULL){
        q=p->adr;
        delete p;
        p=q;
    }
}
int main()
{
    nod *cap;
    cap=CreareLista();
    //adaugare nod artificial
    nod* q=CreareNod(-15);
    q->adr=cap;
    cap=q;
    //proba
    afisare1(cap);
    //stergeri succesive
    g.open("lista.out");
    q=cap;
    while(q->adr)
            if(q->adr->info%2==0){
                del(q);
                afisare(cap->adr);
            }else q=q->adr;
    g.close();
    dislocare(cap);
    return 0;
}
