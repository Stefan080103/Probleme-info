#include <iostream>
#include <fstream>
using namespace std;
struct nod{int nr; nod* adr;};
int n;
ofstream g;
nod* L[101];
nod* nou(int x){
    nod*p=new nod;
    p->nr=x;
    p->adr=NULL;
    return p;
}
void reprezentare(){
    ifstream f("GNO.txt");
    int x,y;
    f>>n;
    nod* p;
    while(f>>x>>y){
        //adaugam nodul x la lista lui y
        p=nou(x);
        p->adr=L[y];
        L[y]=p;
        //adaugam nodul y la lista lui x
        p=nou(y);
        p->adr=L[x];
        L[x]=p;
    }
    f.close();
}
int viz[101];
void BF(int x){
    nod* b,*v;
    nod* p,*q;
    //initialiare coada
    b=nou(x);
    v=b;
    viz[x]=1; g<<x<<' ';
    while(b){
        //toate nodurile nevizitate aflate in lista lui b->nr se adauga la coada
        p=L[b->nr];
        while(p){
            if(viz[p->nr]==0){
                //adaug la coada
                q=nou(p->nr);
                v->adr=q;
                v=q;
                //vizitez
                viz[q->nr]=1; g<<q->nr<<' ';
            }
            p=p->adr;
        }
        //elimin nod din coada
        q=b->adr;
        delete b;
        b=q;
    }
}
int main(){
    reprezentare();
    g.open("CC.txt");
    int nr=0,i;
    for(i=1;i<=n;i++)
        if(viz[i]==0) BF(i), g<<endl, nr++;
    g.close();
    cout<<nr;
    return 0;
}
