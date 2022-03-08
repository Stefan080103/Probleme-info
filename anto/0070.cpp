#include <iostream>
#include <fstream>
using namespace std;
struct nod{int s,d,t,niv;};
int n;
nod v[101];
void reprezentare(){
    ifstream f("binar.in");
    int x,y;
    while(f>>x>>y)
        v[++n].s=x,v[n].d=y;
    f.close();
}
int tata(int z){
    int i;
    for(i=1;i<=n;i++)
        if(v[i].s==z || v[i].d==z) return i;
    return 0;
}
int nivel_nod(int z){
    int nr=0,t;
    while(tata(z))
        nr++, z=tata(z);
    return nr;
}
void repr2(){
    int i;
    for(i=1;i<=n;i++){
        v[i].niv=nivel_nod(i);
        v[i].t=tata(i);
    }
}
int radacina(){
    int i;
    for(i=1;i<=n;i++)
        if(v[i].niv==0)
            return i;
    return 0;
}
void frunze1(){
    int i;
    cout<<"Frunzele sunt:";
    for(i=1;i<=n;i++)
        if(v[i].s+v[i].d==0)
            cout<<i<<' ';
}
void frunze2(){
    int i,nr=0;
    for(i=1;i<=n;i++)
        if(v[i].s+v[i].d==0)
            nr++;
    cout<<endl<<"Arborele are un numar de "<<nr<<" frunze"<<endl;
}
void fiu_unic1(){
    int i;
    cout<<"Nodurile cu un singur fiu sunt:";
    for(i=1;i<=n;i++)
        if(v[i].s*v[i].d==0 && v[i].s+v[i].d!=0)
            cout<<i<<' ';
}
void fiu_unic2(){
    int i,nr=0;
    for(i=1;i<=n;i++)
        if(v[i].s*v[i].d==0 && v[i].s+v[i].d!=0)
            nr++;
    cout<<endl<<"Arborele are un numar de "<<nr<<" noduri cu un singur fiu"<<endl;
}
void doi_fii1(){
    int i;
    cout<<"Nodurile cu 2 fii sunt:";
    for(i=1;i<=n;i++)
        if(v[i].s*v[i].d!=0 && v[i].s+v[i].d!=0)
            cout<<i<<' ';
}
void doi_fii2(){
    int i,nr=0;
    for(i=1;i<=n;i++)
        if(v[i].s*v[i].d!=0 && v[i].s+v[i].d!=0)
            nr++;
    cout<<endl<<"Arborele are un numar de "<<nr<<" noduri cu 2 fii"<<endl;
}
int main(){
    reprezentare();
    repr2();
    cout<<"Radacina arborelui este "<<radacina()<<endl;
    int z;
    cout<<"Dati un nod z:" ; cin>>z;
    cout<<"Tatal nodului "<<z<<" este "<<tata(z)<<endl;
    frunze1();
    frunze2();
    fiu_unic1();
    fiu_unic2();
    doi_fii1();
    doi_fii2();
    cout<<nivel_nod(8);
    return 0;
}

