//arbore? -dinamic + recrusiv DF
#include <iostream>
#include <fstream>
using namespace std;
struct nod{int nr; nod* adr;};
nod* L[101];
int n,viz[101];
nod* nou(int x){
    nod* p=new nod;
    p->nr=x;
    p->adr=NULL;
    return p;
}
void reprezentare(){
    int x,y;
    ifstream f("GNO.in");
    f>>n;
    nod* p;
    while(f>>x>>y){
        //adaug pe x la lista lui y
        p=nou(x);
        p->adr=L[y];
        L[y]=p;
        //adaug pe y la lista lui x
        p=nou(y);
        p->adr=L[x];
        L[x]=p;
    }
    f.close();
}
int ciclu;
void del(int a,int b){
    //anulez muchia a,b;
    nod* p=L[a];
    while(p->nr!=b) p=p->adr;
    p->nr=0;
}
void df(int x){
    int aux;4
    viz[x]=1;
    nod* p;
    for(p=L[x];p;p=p->adr){
        if(p->nr){
            aux=p->nr;
            //anulez muchia intre x si p->nr
            del(x,aux); del(aux,x);
            if(viz[aux]==0) df(aux);
            else ciclu=1;
        }
    }
}
int main(){
    reprezentare();
    df(1);
    int i,s=0;
    for(i=1;i<=n;i++)
        s+=viz[i];
    if(s==n) cout<<"ARBORE";
    else cout<<"NU-I ARBORE";
    return 0;
}
