#include <iostream>
#include <fstream>
using namespace std;
struct nod{int info; nod*adr;};
ofstream g;
nod* CreareNod(int x){
    nod* p;
    p=new nod;
    p->info=x;
    p->adr=NULL;
    return p;
}
nod* CreareLista(int n){
    nod* p,*q,*c; int x;
    cout<<"dati "<<n<<" numere naturale"<<endl;
    cin>>x;
    p=c=CreareNod(x);
    for(int i=2;i<=n;i++){
        cin>>x;
        q=CreareNod(x);
        p->adr=q;
        p=q;
    }
    return c;
}
void afisare(nod *p){
    while(p){
        g<<p->info<<" ";
        p=p->adr;
    }
    g<<endl;
}
void dislocPrim(nod *&p){
    nod *q=p;
    p=p->adr;
    delete q;
}
void dislocUltim(nod *p){
    while(p->adr->adr!=NULL)
        p=p->adr;
    delete p->adr;
    p->adr=NULL;
}
int main()
{
    int n;
    cout<<"n="; cin>>n;
    nod *cap=CreareLista(n);
    g.open("p1.txt");
    afisare(cap);
    dislocPrim(cap);
    afisare(cap);
    dislocUltim(cap);
    afisare(cap);g.close();
    //dislocare lista
    while(cap)
        dislocPrim(cap);

    return 0;
}
