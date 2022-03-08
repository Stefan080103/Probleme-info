#include <iostream>
#include <fstream>
using namespace std;
struct nod{int nr; nod* adr;};
int n;
//construire nod nou
nod* nou(int a){
    nod* aux=new nod;
    aux->nr=a;
    aux->adr=NULL;
    return aux;
}
// adaugare un nod intr o lista
void adaug(int a,int b,nod* l[]){
    nod* p=nou(a);
    p->adr=l[b];
    l[b]=p;
}
//citire
void reprezentare(char s[],nod* l[]){
    ifstream f(s);
    f>>n;
    int x,y;
    while(f>>x>>y)
        adaug(x,y,l) , adaug(y,x,l);
    f.close();
}
//initializare liste
void init(nod* l[]){
    int i;
    for(i=1;i<=100;i++)
        l[i]=0;
}
//initializare vector
void rein(int marc[]){
    int i;
    for(i=1;i<=100;i++)
        marc[i]=0;
}
int main(){
    int i,j; nod *p;
    int marc[101];// vector de aparitii
    nod* L1[101], *L2[101];
    init(L1); init(L2); //initializare liste cu 0
    reprezentare("GNO.txt",L1);
    for(i=1;i<=n;i++){
        //reinitializare vector de aparitii
        rein(marc);
        //deplasare pe lista L1
        p=L1[i];
        marc[i]=1;
        while(p){
            marc[p->nr]=1;
            p=p->adr;
        }
        //adaug in lista L2 muchiile ne adiacente din  L1
        for(j=1;j<=n;j++)
           if(marc[j]!=1)
                adaug(j,i,L2);
    }
    //afisare
    for(i=1;i<=n;i++)
    {
        p=L2[i];
        while(p){
            cout<<p->nr<<" ";
            p=p->adr;
        }
        cout<<endl;
    }
    return 0;
}
