#include <iostream>

using namespace std;
  int v[27];
struct nod{int info; char info1; nod* adr;};
nod* CreareNod(int x,char s){
    nod *q=new nod;
    q->info=x;
    q->info1=s;
    q->adr=NULL;
    return q;
}
nod *CreareLista(){
    nod *q,*p,*c; int i;
    c=CreareNod(-11,'A');
    p=c;
    char s[256];
    cin.getline(s,256);
    for(i=0;i<=26;i++)
        v[s[i]-'A']++;
    for(i=0;i<=26;i++)
        if(v[i]>=2){
            q=CreareNod(v[i],'A'+i);
            p->adr=q;
            p=q;
        }
    return c;
}
void afisare(nod* p){
    while(p){
        cout<<p->info<<" "<<p->info1<<endl;
        p=p->adr;
    }
}
void dislocare(nod *p){
    nod *q=p;
    p=p->adr;
    delete q;
}

int main()
{
   nod *cap=CreareLista();
   if(cap->adr)
        afisare(cap->adr);
   else cout<<"nu exista";
   dislocare(cap);
    return 0;
}
