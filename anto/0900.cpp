#include <iostream>
using namespace std;
struct nod{int info; nod *adr;};
int n;
nod* nod_nou(int x){
    nod *aux;
    aux=new nod;
    (*aux).info=x;
    (*aux).adr=NULL;
    return aux;
}
nod* Crearelista(int n){
    nod *p,*q,*cap; int i;
    int x;
    //primul nod
    cin>>x;
    p=nod_nou(x);
    cap=p;
    //celelalte noduri
    for(i=2;i<=n;i++){
        //nod nou
        cin>>x;
        q=nod_nou(x);
        //adaugare la lista
        (*p).adr=q;
        //adresa ultimului nod
        p=q;
    }
    return cap;
}
void afisare_lista(nod *p){
    while(p!=NULL){
        cout<<(*p).info<<" ";
        p=(*p).adr;
    }
    cout<<endl;
}
int main()
{
    int k;
    cin>>n;
    cin>>k;
    nod*cap;
    cap=Crearelista(n);
    afisare_lista(cap);
    nod *p;
    p=cap;
    int i=1;
    while(i<=k-1){
    i++;
    p=(*p).adr;
    }
    cout<<(*p).info;
    cout<<endl;
    cout<<cap->i->info;
    return 0;
}
