#include <iostream>
#include <fstream>
using namespace std;
int n;
ifstream f;
struct nod{int nr; nod * adr;};
nod * L[101];
nod * nou(int a){
    nod *aux=new nod;
    aux->nr=a;
    aux->adr=NULL;
    return aux;
}
void adaug(int a,int b){
    nod *p=nou(a);
    p->adr=L[b];
    L[b]=p;
}
void reprezentare(){
    f.open("GNO.txt");
    f>>n;
    int x,y;
    while(f>>x>>y)
        adaug(x,y),adaug(y,x);
    f.close();
}
int caut(int a,int b){
    nod *p=L[b];
    while(p)
        if(p->nr==a) return 1;
        else p=p->adr;
    return 0;
}
int lant(){
    f.open("lant.txt");
    int n=0;
    int y,x[21],i;
    while(f>>y)
        x[++n]=y;
    f.close();
    for(i=1;i<n;)
        if(caut(x[i],x[i+1])==1) i++;
        else return 0;
    return 1;
}
int main()
{
    reprezentare();
    int x,y;
    cout <<"x,y="; cin>>x>>y;
    if(lant()==1) cout<<"da";
    else cout<<"nu";
    return 0;
}
