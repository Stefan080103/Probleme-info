#include <iostream>
#include <fstream>
using namespace std;
struct nod{int info;nod* adr;};
nod *crearenod(int x){
    nod *p;
    p=new nod;
    p->info=x;
    p->adr=NULL;
    return p;
}
nod * crearelista(){
    nod *p,*q,*c;
    int x;
    ifstream f("numere.txt");
    f>>x;
    p=c=crearenod(x);
    while(f>>x){
        q=crearenod(x);
        p->adr=q;
        p=q;
    }
    f.close();
    return c;
}
int prim(int x){
    if(x<2) return 0;
    for(int i=2;i*i<=x;i++)
        if(x%i==0) return 0;
    return 1;
}
int numarare(nod *p){
    int nr=0;
    while(p){
        if(prim(p->info)==1)
            nr++;
        p=p->adr;
    }
    return nr;
}
void dislocare(nod *p){
    nod *q=p->adr;
    while(p){
        delete p;
        p=q;
        q=p->adr;
    }
}
int main()
{
    nod *cap;
    cap=crearelista();
    cout<<numarare(cap);
    dislocare(cap);
    return 0;
}
