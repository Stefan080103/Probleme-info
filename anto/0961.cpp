#include <iostream>
#include <fstream>
using namespace std;
int n,s[101],d[101];
void reprezentare(){
    ifstream f("binar2.in");
    f>>n;
    int i;
    for(i=1;i<=n;i++)
        f>>s[i];
    for(i=1;i<=n;i++)
        f>>d[i];
    f.close();
}
//determinare radacina
int viz[101];
int radacina(){
    int i;
    for(i=1;i<=n;i++)
        viz[s[i]]++, viz[d[i]]++;
    for(i=1;i<=n;i++)
        if(viz[i]==0) return i;
    return 0;
}
ofstream g;
//numar frunze
int frunze(int r){
    if(r)
        if(s[r]+d[r]==0)
            return 1;
        else return frunze(s[r])+frunze(d[r]);
    else return 0;
}
//noduri cu un fiu-preordine
void un_fiu(int r){
    if(!(s[r]*d[r]) && s[r]+d[r]) g<<r<<' ';
    if(s[r]) un_fiu(s[r]);
    if(d[r]) un_fiu(d[r]);
}
//numarare noduri cu un fiu
int unfiu(int r){
    if(r)
        if(s[r]==0 && d[r]!=0) return 1+unfiu(d[r]);
        else
            if (s[r]!=0 && d[r]==0) return 1+unfiu(s[r]);
            else return unfiu(s[r])+unfiu(d[r]);
    else return 0;
}
//noduri cu doi fii-inordine
void doi_fii(int r){
    if(s[r]) doi_fii(s[r]);
    if(d[r]) doi_fii(d[r]);
    if((s[r]*d[r]) && (s[r]+d[r])) g<<r<<' ';

}
int doifii(int r){
    if(r)
        if((s[r]*d[r]) && (s[r]+d[r])) return 1+doifii(s[r])+doifii(d[r]);
        else return doifii(s[r])+doifii(d[r]);
    else return 0;
}
int main(){
    reprezentare();
    int r=radacina();
    cout<<"Radacina este "<<r<<endl;
    cout<<"sunt "<<frunze(r)<<" frunze in arbore"<<endl;
    g.open("unfiu.out");
    un_fiu(r);
    cout<<"Numarul nodurilor cu un fiu este "<<unfiu(r)<<endl;
    g.close();
    g.open("doifii.out");
    doi_fii(r);
    cout<<"Numarul nodurilor cu doi fii este "<<doifii(r)<<endl;
    g.close();
    return 0;
}
