#include <iostream>
#include <fstream>
using namespace std;
int s[51],d[51],n;
void reprezentare(){
    ifstream f ("binar2.in");
    int x,y;
    while(f>>x>>y)
        s[++n]=x, d[n]=y;
    f.close();
}

int tata(int x){
    int i;
    for(i=1;i<=n;i++)
        if(s[i]==x) return i;
        else if(d[i]==x) return i;
    return 0;
}
/*
int nivel (int x){
    int nr=0,t=tata(x);
    while(t!=0) nr++, t=tata(t);
    return nr;
}
*/
int nivel(int x){
    int t=tata(x);
    if(t==0) return 0;
    else return 1+nivel(t);
}
int h(){
    int i,Max=0,niv;
    for(i=1;i<=n;i++)
        if(s[i]+d[i]==0){
            niv=nivel(i);
            if(niv>Max)
                Max=niv;
        }
    return Max;
}
/*
void lantd(int x){
    int t=tata(x);
    if(t==0) cout<<x<<' ';
    else {lantd(t);
        cout<<x<<' ';
    }
}
*/
void lantd(int x){
    if(x){
        lantd(tata(x));
        cout<<x<<' ';
    }
}
void lantA(int x,int v[],int &l){
    v[++l]=x;
    int t=tata(x);
    while(t){
        v[++l]=t;
        t=tata(t);
    }
}
int lant(int x,int y){
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
    ofstream g("lant.out");
    int k;
    for(k=1;k<=i;k++) g<<a[k]<<' ';
    for(k=j-1;k>=1;k--) g<<b[k]<<' ';
    g.close();
    return i+(j-1)-1;
}
int main(){
    reprezentare();
    cout<<h()<<endl;
    int x; cin>>x;
    lantd(x);
    int y; cin>>y;
    cout<<endl<<lant(x,y);
    return 0;
}
