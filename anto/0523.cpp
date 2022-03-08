#include <iostream>
#include <fstream>
using namespace std;
struct nod{int info; nod*adr;};
ifstream f;
nod* CreareNod(int x){
    nod* p;
    p=new nod;
    p->info=x;
    p->adr=NULL;
    return p;
}
nod* CreareLista(int n){
    nod* p,*q,*c; int x;
    f>>x;
    p=c=CreareNod(x);
    for(int i=2;i<=n;i++){
        f>>x;
        q=CreareNod(x);
        p->adr=q;
        p=q;
    }
    return c;
}
void afisare(nod *p){
    while(p){
        cout<<p->info<<" ";
        p=p->adr;
    }
    cout<<endl;
}
int calcM(nod *p){
    int Min=p->info;
    while(p){
        if(Min>p->info)
            Min=p->info;
        p=p->adr;
    }
    return Min;
}
int suma(nod *p){
    int s=0;
    while(p){
        s=s+p->info;
        p=p->adr;
    }
    return s;
}
void adaugareprim(nod *&p,int s){
    nod *q;
    q=CreareNod(s);
    q->adr=p;
    p=q;
}
void adaugarefin(nod* p,int Min){
    nod *q;
    q=CreareNod(Min);
    while(p->adr)
        p=p->adr;
    p->adr=q;
}
int main()
{
    int n;
    f.open("p2.txt");
    f>>n;
    nod* cap=CreareLista(n);
    f.close();
    afisare(cap);
    int s=suma(cap);
    int Min=calcM(cap);
    adaugareprim(cap,s);
    afisare(cap);
    adaugarefin(cap,Min);
    afisare(cap);
    return 0;
}
