#include <iostream>
#include <fstream>
using namespace std;
struct nod{int cheie; float info; nod *urm;};
nod* NodNou(int ch, float in){
    nod *p=new nod;
    p->cheie=ch;
    p->info=in;
    p->urm=NULL;
    return p;
}
nod*  CreareLista(){
    int n,ch,i;
    float in;
    cin>>n;
    cin>>ch>>in;
    nod *c,*p,*q;
    p=c=NodNou(ch,in);
    for(i=2;i<=n;i++){
        cin>>ch>>in;
        q=NodNou(ch,in);
        p->urm=q;
        p=q;
    }
    return c;
}
void afisare(nod *p){
    while(p){
        cout<<p->info<<" ";
        p=p->urm;
    }
}
void dislocare(nod *p){
    nod *q;
    while (p){
        q=p;
        p=p->urm;
        delete q;
    }
}
int caut(int v,nod *&c,float &DATA){
    nod* p,*q;
    if(c->cheie==v) {DATA=c->info; return 1;}
    else {
        p=c;
        while(p->urm)
            if(p->urm->cheie==v){
                q=p->urm->urm;
                DATA=p->urm->info;
                p->urm->urm=c;
                c=p->urm;
                p->urm=q;
                return 1;
            }else p=p->urm;
        return 0;
    }
}
int main()
{
    nod * start=CreareLista();
    cout<<"Dati cheia de cautare:";
    int x; cin>>x;
    float DATA;
    if(caut(x,start,DATA)==1) {cout<<DATA<<endl; afisare(start);}
    else cout<<"nu apartine";
    dislocare(start);
    return 0;
}
