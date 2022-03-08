#include <iostream>
#include <fstream>
using namespace std;
struct nod{int nr; nod *adr;};;
nod *L[101]; int n;
nod *nou(int x){
    nod *aux=new nod;
    aux->nr=x;
    aux->adr=NULL;
    return aux;
}
void reprezentare (){
    ifstream f(" GNO.txt");
    int x,y;
    f>>n;
    nod*p;
    while(f>>x>>y){
        p=nou(x);
        p->adr=L[y];
        L[y]=p;
        p=nou(y);
        p->adr=L[x];
        L[x]=p;
    }
    f.close();
}
ofstream g;
int viz[101];
void bf(int x){
    nod *v,*b,*p,*q;
    b=nou(x);
    v=b;
    viz[x]=1; g<<x<<' ';
    while(b){
        //toate nodurile nevizitate lui b->nr se adauga la coada
        p=L[b->nr];
        while(p){
            if(viz[p->nr]==0){
                //adaug la coada
                q=nou(p->nr);
                v->adr=q;
                v=q;
                //vizitez
                viz[p->nr]=1;
                g<<p->nr<<" ";
            }
            p=p->adr;
        }
        //elimin nod din coada
        q=b->adr;
        delete b;
        b=q;
    }
}
int main()
{
    int nr=0,i;
    reprezentare();
    g.open("CC.txt");
    for(i=1;i<=n;i++)
        if(viz[i]==0){
            bf(i); g<<endl; nr++;
        }
    g.close();
    cout <<nr;
    return 0;
}
