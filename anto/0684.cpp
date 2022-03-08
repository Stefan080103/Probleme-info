#include <iostream>
#include <cstring>
using namespace std;
struct nod{char litera; int nr; nod *adr;};
int v[26];
nod *nou(char x,int y){
    nod *p=new nod;
    p->litera=x;
    p->nr=y;
    p->adr=NULL;
    return p;
}
nod *CreareLista(){
    nod *c=NULL;
    nod *q;
    int i;
    for(i=0;i<26;i++)
        if(v[i]>=2){
            q=nou(i+'A',v[i]);
            q->adr=c;
            c=q;
        }
    return c;
}
void afisare(nod *p){
    if(p!=NULL){
        afisare(p->adr);
        cout<<p->litera<<" "<<p->nr<<endl;
    }
}
void dislocare(nod *p){
    nod *q;
    while(p){
        q=p;
        p=p->adr;
        delete q;
    }
}
int main()
{
    char s[256];
    cout<<"dati o propozitie cu majuscule :";
    cin.getline(s,256);
    int l=strlen(s);
    int i;
    //construim vector de aparitii
    for (i=0;i<l;i++)
        if(s[i]!=' ')
            v[s[i]-'A']++;
    //constructie lista
    nod *cap=CreareLista();
    afisare(cap);
    dislocare(cap);
    return 0;
}
