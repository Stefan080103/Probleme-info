#include <iostream>
#include <fstream>
using namespace std;
struct nod{int nr; nod *adr;};
nod *L[101];
int n,m;
ofstream g;
nod *nou(int x){
    nod * aux=new nod;
    aux->nr=x;
    aux->adr=NULL;
    return aux;
}
void adaug(int a,int b){
    nod *p=nou(a);
    p->adr=L[b];
    L[b]=p;
}
void reprezentare(){
    ifstream f("GNO.in");
    f>>n>>m;
    int x,y,i;
    for(i=1;i<=m;i++){
        f>>x>>y;
        // adaug pe x la lista lui y
        adaug(x,y);
        //adaug pe y la lista lui x
        adaug(y,x);
    }
    f.close();
}
int viz[101];
void del(int a, int b){
    nod *p,*q;
    if(a==L[b]->nr){
        q=L[b];
        L[b]=q->adr;
        delete q;
    } else {
        p=L[b];
        while(p->adr->nr!=a) p=p->adr;
        q=p->adr;
        p->adr=q->adr;
        delete q;

    }
}
int nr1;
void bf(int x){
        nod *b,*v;
        nod *p,*q,*aux;
        b=v=nou(x);
        viz[x]=1;
        while(b){
            p=L[b->nr];
            while(p){
                aux=p->adr;
                if(viz[p->nr]==0){
                    //adaug la coada
                    q=nou(p->nr);
                    v->adr=q;
                    v=q;
                    viz[p->nr]=1;
                }else{
                    //afisez si numar
                    g<<p->nr<<" "<<b->nr<<endl;
                    nr1++;
                }
                //eliminari
                del(p->nr,b->nr);
                del(b->nr,p->nr);
                p=aux;
            }
            //eiminare nod din coada
            q=b;
            b=b->adr;
            delete q;
        }
}

int main()
{
    reprezentare();
    g.open("ACICLIC.out");
    for(int i=1;i<=n;i++)
        if(viz[i]==0)
            bf(i);
    g.close();
    cout<<nr1;
    return 0;
}
