//muchii de cost minim- liste de add dinamic
#include <iostream>
#include <fstream>
using namespace std;
ofstream g;
struct nod{ int nr; float cost; nod *adr;};
nod * L[50];
int n;
const float INF=3000;
nod * nou(int x, float c){
    nod *a=new nod;
    a->nr=x;
    a->cost=c;
    a->adr=NULL;
    return a;
}
void reprezentare(){
    ifstream f("GNO.in");
    f>>n;
    int x,y; float c;
    nod *p;
    while(f>>x>>y>>c){
        //adaug nodul y la lista nodului x
        p=nou(y,c);
        p->adr=L[x];
        L[x]=p;
        p=nou(x,c);
        p->adr=L[y];
        L[y]=p;
    }
    f.close();
}
float costminimlista(nod *p){
    float Min=p->cost;
    while(p){
        if(p->cost<Min)
            Min=p->cost;
            p=p->adr;
    }
    return Min;
}
void anulare(nod *p,int y){
    while(p->nr!=y) p=p->adr;
    p->cost=INF;
}
void afisare_lista(int x,nod *p, float Min){
    while(p){
        if(p->cost==Min){
            g<<x<<" "<<p->nr<<endl;
            p->cost=INF;
            anulare(L[p->nr],x);
        }
        p=p->adr;
    }
}
int main()
{
    reprezentare();
    int i;
    float M=costminimlista(L[1]),aux;
    for(i=2;i<=n;i++)
    {
        aux=costminimlista(L[i]);
        if(aux<M)
            M=aux;
    }
    g.open("muchii.txt");
    for(i=1;i<=n;i++)
        afisare_lista(i,L[i],M);
    g.close();
    return 0;
}
