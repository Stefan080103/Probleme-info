#include <iostream>
#include <fstream>
using namespace std;
struct nod{int s,d,t,niv;};
int n;
nod v[101];
void reprezentare(){
    int i;
    ifstream f("binar2.in");
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i].s>>v[i].d;
    f.close();
}
int tata(int z){
    int i;
    for(i=1;i<=n;i++)
        if(v[i].s==z || v[i].d==z) return i;
    return 0;
}
int nivel_nod(int z){
    int nr=0;
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
void lantd(int x){
    if(x){
        lantd(tata(x));
        cout<<x<<' ';
    }
}
int h(){
    int i,Max=0,niv;
    for(i=1;i<=n;i++)
        if(v[i].s+v[i].d==0){
            niv=nivel_nod(i);
            if(niv>Max)
                Max=niv;
        }
    return Max;
}
void lantA(int x,int q[],int &l){
    q[++l]=x;
    int t=tata(x);
    while(t){
        q[++l]=t;
        t=tata(t);
    }
}
void lant(int x,int y){
    int a[50],b[50],i,j,p=0,q=0;
    lantA(x,a,p);
    lantA(y,b,q);
    //primul nod comun
    for(i=1;i<=p;i++){
        for(j=1;j<=q;j++)
            if(a[i]==b[j]) break;
        if(j<=q) break;
    }
    //afisare lant
    int k;
    for(k=1;k<=i;k++) cout<<a[k]<<' ';
    for(k=j-1;k>=1;k--) cout<<b[k]<<' ';
}
int main(){
    reprezentare();
    repr2();
    cout<<"Radacina arborelui este "<<radacina()<<endl;
    int z;
    int x;
    cout<<"Dati un nod z:" ; cin>>z;
    cout<<"Tatal nodului "<<z<<" este "<<tata(z)<<endl;
    cout<<"Dati un nod x:" ; cin>>x;
    frunze1();
    frunze2();
    fiu_unic1();
    fiu_unic2();
    doi_fii1();
    doi_fii2();
    cout<<nivel_nod(1);
    cout<<endl;
    lantd(x);
    cout<<endl;
    cout<<"inaltimea arborelui este :" <<h();
    int o,p;
    cout<<endl;
    cout<<" dati 2 noduri intre care se va afisa un lant elementar:"; cin>>o>>p;
    cout<<endl;
    lant(o,p);
    return 0;
}

