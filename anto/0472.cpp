//ciclu eulerian - liste alocate dinamic + recursiv
#include <iostream>
#include <fstream>
using namespace std;
struct nod{ int nr; nod *adr;};
int n; nod *L[101];
ifstream f;
ofstream g;
int viz[101];
nod *nou(int x){
    nod *p=new nod;
    p->nr=x;
    p->adr=NULL;
    return p;
}
void muchii(){
    int x,y;
    if(f>>x>>y){
        //adaug y la lista lui x
        nod *p=nou(y);
        p->adr=L[x];
        L[x]=p;
        //adaug x la lista lui y
        p=nou(x);
        p->adr=L[y];
        L[y]=p;
        //apel
        muchii();
    }
}
void lista(nod *p){
    if(p){
        g<<p->nr<<" ";
        lista(p->adr);
    }
    else g<<endl;
}
void del(nod *p,int x){
    if(p->nr!=x)
        del(p->adr,x);
    else p->nr=0;
}
void DF(int x){
        viz[x]=1;
        nod*p;
        int i;
        for(p=L[x];p;p=p->adr)
            if(p->nr){
                i=p->nr;
                //anulez muchia dintre nodul x si nodul p->nr
                del(L[x],i);
                del(L[i],x);
                //continui parcurgerea
                DF(i);
            }
        g<<x<<" ";
}
int grad(nod *p){
    if(p)
        return 1+grad(p->adr);
    else return 0;
}
void dislocare(nod *p){
    if(p){
        nod *q=p->adr;
        delete p;
        p=q;
        dislocare(p);
    }
}
int main()
{
    //reprezentare graf
    f.open("gno.in");
    f>>n;
    muchii();
    f.close();
    //afisare
    int i;
    g.open("liste.txt");
    for(i=1;i<=n;i++)
        lista(L[i]);
    g.close();
    //ciclu eulerian
    g.open("euler.out");
    DF(1);
    g.close();
    //conexitate
    int s=0;
    for(i=1;i<=n;i++)
        s=s+viz[i];
    //grade pare
    for(i=1;i<=n;i++)
        if(grad(L[i])%2) break;
    if(s==n && i>n)
        cout<<" eulerian";
    else {
        cout<<"nu este eulerian";
        //sterg fisierul euler.out de pe disk
        unlink("euler.out");
    }
    //dislocare
    for(i=1;i<=n;i++)
        dislocare(L[i]);
    return 0;
}
