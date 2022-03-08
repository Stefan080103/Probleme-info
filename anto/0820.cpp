#include <iostream>
#include <fstream>
using namespace std;
struct nod{int nr; nod* adr;};
nod* L[101];
int n;
nod * nou(int a){
    nod *aux;
    aux=new nod;
    aux->nr=a;
    aux->adr=NULL;
    return aux;
}
void reprezentare(){
    ifstream f("GNO.txt");
    f>>n;
    int x,y;
    nod *p;
    while(f>>x>>y){
        //nodul y completeaza lista nodului x
        p=nou(y);
        p->adr=L[x];
        L[x]=p;
        //nodul x completeaza lista nodului y
        p=nou(x);
        p->adr=L[y];
        L[y]=p;
    }
    f.close();
}
int grad(int x){
    int nr=0;
    nod *p=L[x];
    while(p){
        nr++;
        p=p->adr;
    }
    return nr;
}
int main()
{
    reprezentare();
    int x;
    cout<<"dati nod:"; cin>>x;
    cout<<grad(x);
    return 0;
}
