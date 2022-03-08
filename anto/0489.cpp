#include <iostream>
#include <fstream>
using namespace std;
struct nod{int info; nod* adr;};
nod* CreareNod(int x){
    nod *p;
    p=new nod;
    p->info=x;
    p->adr=NULL;
    return p;
}
nod* creareLista(int n){
    nod* p,*cap,*q;
    int i;int x;
    cout<<"dati "<<n<<" numere intregi"<<endl;
    cin>>x;
    cap=p=CreareNod(x);
    for(i=2;i<=n;i++){
        cin>>x;
        q=CreareNod(x);
        p->adr=q;
        p=q;
    }
    return cap;

}
void afisare(nod* p){
    ofstream g("p1.txt");
    while(p){
        if(p->info%2==0)
            g<<p->info<<" ";
        p=p->adr;
    }
    g.close();
}
void dislocare(nod* p){
    nod* q;
    while(p){
        q=p->adr;
        delete p;
        p=q;
    }
}
void tipar(nod* p){
    while((p->adr)->adr){
        cout<<p->info<<" ";
        p=p->adr;
    }
}
int main()
{
    int n;
    nod* cap;
    cout<<"n=";
    cin>>n;
    cap=creareLista(n);
    afisare(cap);
    tipar(cap);
    dislocare(cap);
    return 0;
}
