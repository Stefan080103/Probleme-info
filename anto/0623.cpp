#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct nod{float medie; char nume[30]; nod* adr;};

nod* NodNou(float m, char elev[]){
    nod *p=new nod;
    p->medie=m;
    strcpy(p->nume,elev);
    p->adr=NULL;
    return p;
}
nod* CreareLista(){
    float m; int n,i; char elev[30];
    ifstream f("IN.txt");
    f>>n;
    f>>m;
    f.get();
    f.getline(elev,30);
    nod *p=NodNou(m,elev);
    nod* c=p;
    nod *q;
    for(i=2;i<=n;i++){
        f>>m; f.get();
        f.getline(elev,30);
        q=NodNou(m,elev);
        p->adr=q;
        p=q;
    }
    f.close();
    return c;
}
void afisare(nod* p){
    while(p){
        cout<<p->nume<<endl;
        p=p->adr;
    }
}
void dislocare(nod *p){
    nod *q;
    while(p){
        q=p;
        p=p->adr;
        delete q;
    }
}
float maxim(nod *p){
    float  Max=p->medie;
    while(p){
        if(p->medie>=Max)
            Max=p->medie;
        p=p->adr;
    }
    return Max;
}
void afisare_Max(float Max,nod *p){
    while(p){
        if(p->medie==Max)
            cout<<p->nume<<" "<<endl;
        p=p->adr;
    }
}
float medie_generala(nod *p){
    float s=0,nr=0;
    while(p){
        s=s+p->medie;
        nr++;
        p=p->adr;
    }
    return s/nr;
}
int main()
{
    nod *cap=CreareLista();
   afisare_Max(maxim(cap),cap);
   cout<<endl<<medie_generala(cap);
    dislocare(cap);
    return 0;
}
