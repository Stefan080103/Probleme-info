#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct nod{char cuv[20]; nod *ant,*urm;};
ofstream g;
nod* CreareNod(char s[]){
    nod* p=new nod;
    strcpy(p->cuv,s);
    p->ant=p->urm=NULL;
    return p;
}
void CreareLista(char s[],nod* &c1,nod* &c2){
    nod*p,*q,*c;
    char *t;
    t=strtok(s," ");
    c=p=CreareNod("");
    while(t){
        q=CreareNod(t);
        p->urm=q;
        q->ant=p;
        p=q;
        t=strtok(NULL," ");
    }
    c1=c->urm;
    c1->ant=NULL;
    delete c;
    c2=p;
}
void afisare1(nod* p){
    while(p){
        g<<p->cuv<<' ';
        p=p->urm;
    }
}
void afisare2(nod* p){
    while(p){
        g<<p->cuv<<' ';
        p=p->ant;
    }
}
void caut(char x[],nod *p,int &poz, nod* &a){
    poz=0;
    while(p){
        poz++;
        if(strcmp(x,p->cuv)==0){
            a=p;
            break;
        }
        p=p->urm;
    }
}
void distincte(nod* p,nod* &u){
    nod *q, *z;
    while(p->urm){
        q=p->urm;
        while(q)
            if(strcmp(p->cuv,q->cuv)==0) {
                z=q->urm;
                q->ant->urm=z;
                z->ant=q->ant;
                delete q;
                q=z;
            }
            else q=q->urm;
        p=p->urm;
    }
    u=p;
}
void inserare(nod *p){
    nod *q=CreareNod(p->cuv);
    nod *z=p->urm;
     p->urm=q;
     z->ant=q;
     q->ant=p;
     q->urm=z;
}
void suc(nod* p){
    char x[20];
    while(p){
        strcpy(x,p->cuv);
        strrev(x);
        if(strcmp(p->cuv,x)==0){
            inserare(p); p=p->urm->urm;
        }else p=p->urm;
    }
}

int main(){
    char s[1000];
    cout<<"Dati text:"<<endl;
    cin.getline(s,1000);
    nod* prim,*ultim;
    CreareLista(s,prim,ultim);
    g.open("cuvinte.txt");
    afisare1(prim);
    g<<endl;
    afisare2(ultim);
    cout<<endl<<"Dati cuvantul cautat:";
    cin.getline(s,20);
    int poz;
    nod* a=NULL;
    caut(s,prim,poz,a);
    if(!a)
        cout<<"Nu apare";
    else{
        cout<<"Apare la pozitia "<<poz<<endl;
        cout<<"Fiind incadrat de cuvintele: ";
        if(a==prim) cout<<a->urm->cuv;
        else if(a==ultim) cout<<a->ant->cuv;
            else cout<<a->ant->cuv<<' '<<a->urm->cuv;
    }
    g<<endl;
    distincte(prim,ultim);
    afisare1(prim); g<<endl ; afisare2(ultim);
    g<<endl;
    suc(prim);
    afisare1(prim);
    g<<endl;
    afisare2(ultim);
    g.close();
    return 0;
}
