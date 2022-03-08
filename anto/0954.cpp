#include <iostream>
#include <fstream>
using namespace std;
int n,s[101],d[101],c[101];
void reprezentare(){
    ifstream f("fii.in");
    int i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>s[i];
    for(i=1;i<=n;i++)
        f>>d[i];
    f.close();
}
int radacina(){
    int i;
    for(i=1;i<=n;i++){
        c[s[i]]++;c[d[i]]++;}
    for(i=1;i<=n;i++)
        if(c[i]==0)
            return i;
    return 0;
}
int tata(int x){
    int i;
    for(i=1;i<=n;i++)
        if(s[i]==x || d[i]==x) return i;
    return 0;
}
int nrfrunze(){
    int i,nr=0;
    for(i=1;i<=n;i++)
        if(s[i]+d[i]==0)
            nr++;
    return nr;
}
void frunze(){
    int i;
    for(i=1;i<=n;i++)
        if(s[i]+d[i]==0)
            cout<<i<<" ";
}
int fiu_unic(){
    int i,nr=0;
    for(i=1;i<=n;i++)
        if(s[i]!=0 && d[i]==0 || s[i]==0 && d[i]!=0)
            nr++;
    return nr;
}
void doi_fii1(){
    int i;
    cout<<"Nodurile cu 2 fii sunt:";
    for(i=1;i<=n;i++)
        if(s[i]*d[i]!=0 && s[i]+d[i]!=0) cout<<i<<' ';
}
void doi_fii2(){
    int i,nr=0;
    for(i=1;i<=n;i++)
        if(s[i]*d[i]!=0 && s[i]+d[i]!=0) nr++;
    cout<<endl<<"Arborele are un numar de "<<nr<<" noduri cu 2 fii"<<endl;
}
void ascendent (int x){
    int t=tata(x);
    if(t>0) {
        cout<<t<<" ";
        ascendent(t);
    }else cout<<endl;
}
int main()
{
    reprezentare();
    int ta,y;
    cin>>ta>>y;
    cout<<radacina()<<endl;
    cout<<tata(ta);
    cout<<endl;
    cout<<nrfrunze();
    cout<<endl;
    frunze();
    cout<<endl;
    cout<<fiu_unic();
    cout<<endl;
    doi_fii1();
    doi_fii2();
    cout<<endl;
    ascendent(y);
    return 0;
}
