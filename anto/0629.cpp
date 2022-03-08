#include <iostream>
#include <fstream>
using namespace std;
int n,m;
struct arc{int e1,e2,viz;};
arc U[100*99];
void reprezentare(){
    ifstream f("GO2.in");
    f>>n>>m;
    int i;
    for(i=1;i<=m;i++)
        f>>U[i].e1>>U[i].e2;
    f.close();
}
int exista_arc(int e1,int e2){
    for(int i=1;i<=m;i++)
        if(U[i].e1==e1 && U[i].e2==e2){
            U[i].viz++;
            return 1;
        }
    return 0;
}
int circuit(){
    for(int i=1;i<=m;i++)
        if(U[i].viz>1) return 0;
    return 1;
}
int main()
{
    reprezentare();
    //sirul dat
    ifstream f("noduri.txt");
    int k=0,v[101],aux;
    while(f>>aux) v[++k]=aux;
    f.close();
    //sa fie noduri din graful dat
    int ok =1;
    int i;
    for(i=1;i<=k;i++)
        if(v[i]<1 || v[i]>n){
            ok=0; break;
        }
    if(ok){
        ok=1;
        for(i=1;i<k;i++)
            if(exista_arc(v[i],v[i+1])==0){
                ok=0;
                break;
            }
    }
    if(ok) {
        cout<<"drum"<<endl;
        if(v[1]==v[k] && circuit()) cout<<"circuit";
        else cout<<"nu este circuit";
    }else cout<<"nu este drum,nici circuit";

    return 0;
}
