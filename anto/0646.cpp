#include <iostream>
#include <fstream>
using namespace std;
struct nod{int nr; nod* adr;};
int v[101];
nod* nou(int a){
    nod* aux=new nod;
    aux->nr=a;
    aux->adr=NULL;
    return aux;
}
void adaug(int a,int b,nod* l[]){
    nod* p=nou(a);
    p->adr=l[b];
    l[b]=p;
}
void reprezentare(char s[],int &n,nod* l[]){
    ifstream f(s);
    f>>n;
    int x,y;
    while(f>>x>>y)
        adaug(x,y,l) , adaug(y,x,l);
    f.close();
}
void init(nod* l[]){
    int i;
    for(i=1;i<=100;i++)
        l[i]=0;
}
//verificare
void lista(int a,nod* l[]){
    nod* p=l[a];
    cout<<a<<":";
    while(p){
        cout<<p->nr<<' ';
        p=p->adr;
    }
    cout<<endl;
}
int exista(int a,nod* p){
    while(p)
        if(p->nr==a) return 1;
        else p=p->adr;
    return 0;
}
int partial(int n1,nod* l1[],int n2,nod* l2[]){
    if(n1!=n2) return 0;
    int i; nod* p;
    for(i=1;i<=n2;i++){
        p=l2[i];
        while(p)
            if(!exista(p->nr,l1[i])) return 0;
            else p=p->adr;
    }
    return 1;
}
void marcare(int a,nod* l[]){
    nod* p=l[a];
    while(p)
        v[p->nr]++,  p=p->adr;
}
int complementar(int n1,nod* l1[],int n2,nod* l2[]){
    int i;
    for(i=1;i<=n1;i++){
        //restartez vectorul caracteristic
        int j;
        for(j=1;j<=100;j++)
            v[j]=0;
        marcare(i,l1);
        marcare(i,l2);
        v[i]=1;
        for(j=1;j<=n1;j++)
            if(v[j]!=1) return 0;
    }
    return 1;
}
int main(){
    int n1,n2;
    nod* L1[101], *L2[101];
    init(L1); init(L2);
    reprezentare("GNO1.txt",n1,L1);
    reprezentare("GNO2.txt",n2,L2);
    if(partial(n1,L1,n2,L2)==1) cout<<"Da";
    else cout<<"Nu";
    cout<<endl;
    if(complementar(n1,L1,n2,L2)==1) cout<<"Complementar";
    else cout<<"Nu este complementar";
    return 0;
}
