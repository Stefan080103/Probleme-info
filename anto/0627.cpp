#include <iostream>
#include <fstream>
using namespace std;
int n;
struct nod {int nr; nod*adr;};
nod *L[101];
nod *nou(int x){
    nod * aux=new nod;
    aux->nr=x;
    aux->adr=NULL;
}
void reprezentare(){
    ifstream f("GO1.in");
    f>>n;
    int x,y;
    nod *p;
    while(f>>x>>y){
        //adaug y la lista lui x
        p=nou(y);
        p->adr=L[x];
        L[x]=p;
    }
    f.close();
}
int Extern(int x){
    int nr=0;
    nod* p=L[x];
    while(p){
        nr++;
        p=p->adr;
    }
    return nr;
}
int di[101];
void interne(){
    int i;
    nod *p;
    for(i=1;i<=n;i++){
        //parcurg lista nodului i
        p=L[i];
        while(p){
            di[p->nr]++;
            p=p->adr;
        }
    }
}
int main()
{
    reprezentare();
    interne();
    ofstream g("grade.txt");
    int i;
    for(i=1;i<=n;i++)
        if(di[i]==Extern(i))
            g<<i<<" ";
    g.close();
    return 0;
}
