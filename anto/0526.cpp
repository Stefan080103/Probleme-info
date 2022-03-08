#include <iostream>
#include <fstream>
using namespace std;
struct nod{int info; nod *s,*d;};
ifstream f;
ofstream g;

nod* arbore () {
    int x;
    f>>x;
    if(x==0) return NULL;
    else {
        nod* a =new nod;
        a->info=x;
        a->s=arbore();
        a->d=arbore();
        return a;
    }
}
void inordine(nod *r){
    if(r){
        inordine(r->s);
        g<<r->info<<" ";
        inordine(r->d);
    }
}
void postordine(nod *r){
    if(r){
        postordine(r->s);
        postordine(r->d);
        g<<r->info<<" ";
    }
}
int nr_frunze(nod *r){
    if(r)
        if(r->s==0 && r->d ==0) return 1;
        else return nr_frunze(r->s) + nr_frunze(r->d);
    else return 0;
}
int nr_unfiu(nod*r){
    if(r)
        if(r->s!=NULL && r->d==NULL || r->s==NULL && r->d!=NULL) return 1;
        else return nr_unfiu(r->s) + nr_unfiu(r->d);
}
void unfiu(nod*r){
    if(r){
        if(r->s!=NULL && r->d==NULL || r->s==NULL && r->d!=NULL) g<<r->info<<" ";
        unfiu(r->s);
        unfiu(r->d);
    }
}
int nr_doifii(nod*r){
        if(r!=NULL)
        if(r->s!=0 && r->d!=0) return 1+ nr_doifii(r->s)+nr_doifii(r->d);
        else return nr_doifii(r->s)+nr_doifii(r->d);
    else return 0;
}
void doifii(nod *r){
    if(r){
        if(r->s!=0 && r->d!=0) g<<r->info<<" ";
        doifii(r->s);
        doifii(r->d);
    }
}
int niv;
void nivel(nod *r, int x, int k){
    if(r){
        if(r->info==x) niv=k;
        nivel(r->s,x,k+1);
        nivel(r->d,x,k+1);
    }
}
int NIV[101];
void niveluri(nod *r,int k){
    if(r){
        niveluri(r->s,k+1);
        NIV[r->info]=k;
        niveluri(r->d,k+1);
    }
}
void Frunze(nod *r){
    if(r){
        if(r->s==0 && r->d ==0) g<<r->info<<" ";
        Frunze(r->s);
        Frunze(r->d);
    }
}
int h(nod*r){
    if(!r) return 0;
    else{
        int hs=h(r->s);
        int hd=h(r->d);
        if(hs>hd) return 1+hs;
        else return 1+hd;
    }
}
int main()
{
    f.open("binar2.in");
    nod *rad=arbore();
    f.close();
    g.open("in_post.out");
    inordine(rad);
    g<<endl;
    postordine(rad);
    g.close();
    cout<<nr_frunze(rad);
    cout<<endl;
    cout<<nr_unfiu(rad);
    int x;
    niv=-1;
    cout<<endl;
    cout<<"x=";
    cin>>x;
    nivel(rad,x,0);
    if(niv==-1) cout<<"nodul nu exista";
    else cout<<"nivel ="<<niv;
    cout<<endl;
    niveluri(rad,0);
    int i;
    for(i=0;i<=100;i++)
        NIV[i]=-1;
    niveluri(rad,0);
    g.open("nod_nivel.out");
    for(i=0;i<=100;i++)
        if(NIV[i]!=-1)
            g<<i<<" "<<NIV[i]<<endl;
    g.close();
    cout<<endl;
    cout<<"inaltime arbore ="<<h(rad)-1  ;




    //4
    g.open("frunze.out");
    Frunze(rad);
    g.close();
    //5
    cout<<endl<<endl;
    cout<<nr_doifii(rad);
    cout<<endl;
    //6
    g.open("doi.out");
    doifii(rad);
    g.close();
    //8
    g.open("unu.out");
    unfiu(rad);
    g.close();
    //12
    int niV;
    cout<<"Nivel="; cin>>niV;
    g.open("nivel.out");
    for(i=0;i<=100;i++)
        if(NIV[i]==niV)
            g<<i<<" ";
    g.close();
    //14
    int lmn;
    cout<<"dati un nod : ";cin>>lmn;
    cout<<endl<<"lungimea celui mai lung lant pana la nod este : "<<NIV[lmn];
    //15
    ofstream g("lant_max.out");
    for(i=0;i<=100;i++)
        if(NIV[i]!=-1)
            g<<i<<"    "<<NIV[i]<<endl;
    g.close();
    return 0;
}
