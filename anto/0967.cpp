#include <iostream>
#include <fstream>
using namespace std;
struct nod {int cheie; nod *s,*d;};
void inserare(nod* &r,int x){
    if(r==NULL){
        //arborele este vid==> x devine radacina
        r=new nod;
        r->cheie=x;
        r->s=r->d=NULL;
    }
    else
        if(r->cheie==x) cout<<x<<" exista"<<endl;
        else
            if(x<r->cheie)
                if(r->s==NULL){
                //nod nou, fiu stang al lui r
                nod* a=new nod;
                a->cheie=x;
                a->s=a->d=NULL;
                r->s=a;
                }
                else inserare(r->s,x);
            else
                if(r->d==NULL){
                //nod nou, fiu drept al lui r
                nod* a=new nod;
                a->cheie=x;
                a->s=a->d=NULL;
                r->d=a;
                }
                else inserare(r->d,x);

}
void creare_arbore(nod* &r){
    r=NULL;
    ifstream f("chei.in");
    int x;
    while(f>>x)
        inserare(r,x);
    f.close();
}
//afisare chei in ordine crescatoare
void inordine(nod* r){
    if(r){
        inordine(r->s);
        cout<<r->cheie<<' ';
        inordine(r->d);
    }
}
//afisare chei in ordine descrescatoare
void des_inordine(nod *r){
     if(r){
        des_inordine(r->d);
        cout<<r->cheie<<' ';
        des_inordine(r->s);
    }
}
//cautare nod in arborele de cautare ==> exista sau nu
int exista(nod *r,int x){
    if(r==NULL) return 0;
    else
        if(r->cheie==x) return 1;
        else
            if(x<r->cheie) return exista(r->s,x);
            else return exista(r->d,x);
}
//cautare nod in arborele de cautare ==> adresa lui / adresa vida
nod* adresa(nod *r,int x){
    if(r==NULL) return NULL;
    else
        if(r->cheie==x) return r;
        else
            if(x<r->cheie) return adresa(r->s,x);
            else return adresa(r->d,x);
}
//lantul descendent maxim pana la un nod
int L[101],n;
void lant(nod* r,int x){
    if(r==NULL) n=0;
    else{
        L[++n]=r->cheie;
        if(x<r->cheie) lant(r->s,x);
        else
            if(x>r->cheie) lant(r->d,x);
    }
}
//lantul descendent maxim pana la un nod fara vector
void lant_descendent(nod* r,int x){
    if(r==NULL) cout<<"Nu exista"<<' ';
    else{
        cout<<r->cheie<<' ';
        if(x<r->cheie) lant_descendent(r->s,x);
        else
            if(x>r->cheie) lant_descendent(r->d,x);
    }
}
int main(){
    nod *rad;
    creare_arbore(rad);
    //ordine crescatoare a cheilor
    inordine(rad);
    cout<<endl;
    //ordine descrescatoare a cheilor
    des_inordine(rad);
    cout<<endl;
    //cautare nod in arbore
    int x;
    cout<<"Cheie nod cautat="; cin>>x;
    if(exista(rad,x)) cout<<"Exista";
    else cout<<"Nu exista";
    cout<<endl;
    nod* a=adresa(rad,x);
    if(a) cout<<"Exista";
    else cout<<"Nu exista";
    cout<<endl;
    //ascendentii unui nod / lant descendent maxim pana la un nod
    lant(rad,x);
    if(n==0) cout<<"Nu exista";
    else{
        int i;
        for(i=n-1;i>=1;i--) cout<<L[i]<<' ';
        cout<<endl;
        //lant descendent maxim pana la x;
        for(i=1;i<=n;i++) cout<<L[i]<<' ';
    }
    cout<<endl;
    //lant descendent maxim pana la x - fara vector
    lant_descendent(rad,x);
    return 0;
}
