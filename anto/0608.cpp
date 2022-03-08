#include <iostream>
using namespace std;
struct nod{int info;nod* adr;};
nod* CreareNod(int x){
    nod *p=new nod;
    p->info=x;
    p->adr=NULL;
    return p;
}
nod* CreareLista(){
    nod *p,*q,*c;
    int i,x,n;
    cin>>n;
    cin>>x;
    c=p=CreareNod(x);
    for(i=2;i<=n;i++){
        cin>>x;
        q=CreareNod(x);
        p->adr=q;
        p=q;
    }
    return c;
}
void afisare1(nod *p){
    while(p){
        cout<<p->info<<" ";
        p=p->adr;
    }
}
void ins(nod* p,int x){
    nod *q=CreareNod(x);
    nod* z=p->adr;
    p->adr=q;
    q->adr=z;
}
void dislocare(nod *p){
    nod*q;
    while(p!=NULL){
        q=p->adr;
        delete p;
        p=q;
    }
}
int prim(int n){
    int i;
    if(n<2) return 0;
    for(i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}
void inssuc(nod* p){
    while(p->adr)
        if(prim(p->adr->info)){
            ins(p,p->adr->info);
            p=p->adr->adr;
        }
        else p=p->adr;
}
int main()
{
    nod *cap1;
    nod *cap;
    cap=CreareLista();
    cap1=CreareLista();
    //adaugare nod artificial
   /* nod* q=CreareNod(-15);
    q->adr=cap;
    cap=q;
    //inserari succesive
    inssuc(cap);
    afisare1(cap->adr);*/
    nod* p=cap;
    while(p->adr)
        p=p->adr;
    p->adr=cap1;
    afisare1(cap);
    dislocare(cap);
    return 0;
}
