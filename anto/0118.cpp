#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;
struct nod{char nume[50]; int v; float m; nod* leg;};
ofstream g;
nod *Nou(char s[]){
    nod *q=new nod; char *a;
    a=strpbrk(s,"123456789");
    *(a-1)=0;
    strcpy(q->nume,s);
    strcpy(s,a);
    a=strchr(s,' ');
    a[0]=0;
    q->v=atoi(s);
    q->m=atof(a+1);
    q->leg=NULL;
    return q;
}
nod *CreareLista(){
    nod* p,*q,*c; int n,i; char s[100];
    ifstream f("elevi.txt");
    f>>n;
    f.get();
    f.getline(s,100);
    c=p=Nou(s);
    for(i=2;i<=n;i++){
        f.getline(s,100);
        q=Nou(s);
        p->leg=q;
        p=q;
    }
    f.close();
    p->leg=c;
    return c;
}
int maxim(nod *p){
    int Max=0;
    nod* q=p;
    do{
        if(p->v>=Max)
            Max=p->v;
        p=p->leg;
    }while(p!=q);
    return Max;
}
void mari(nod *p, int Max){
    nod *q=p;
    do{
        if(p->v>=Max)
            cout<<p->nume<<endl;
        p=p->leg;
    }while(p!=q);
}
void afisare(nod *p){
    nod *q=p;
    do{
        cout<<p->nume<<" "<<p->m<<endl;
        p=p->leg;
    }while(p!=q);
}
void afisare1(nod *p){
    nod *q=p;
    do{
        g<<p->nume<<" "<<p->m<<endl;
        p=p->leg;
    }while(p!=q);
}
float medie(nod *p){
    float med=0,nr=0;
    nod* q=p;
    do{
        med=med+p->m;
        nr++;
        p=p->leg;
    }while(p!=q);
    return med/nr;
}
int main()
{
    nod *cap=CreareLista();
    afisare(cap);
    int Max=maxim(cap);
    mari(cap,Max);
    float med=medie(cap);
    //craerev nod artificial
    nod* p,*z;
    nod *aux=new nod;
    aux->v=-2;
    aux->leg=cap->leg;
    cap->leg=aux;
    p=aux;
    do{
        if(p->leg->m<med){
            z=p->leg;
            p->leg=z->leg;
            delete z;
        }else p=p->leg;
    }while(p!=aux);
    cap=aux->leg;
    p=cap;
    while(p->leg!=aux)
        p=p->leg;
    p->leg=cap;
    delete aux;
    g.open("elevi.txt");
    afisare1(cap);
    g.close();
    return 0;
}
