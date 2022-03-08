#include <iostream>
#include <fstream>
using namespace std;
struct muchie{int e1,e2,marc;};
int n,m; int viz[101];
muchie u[101];
void reprezentare(){
    ifstream f("GNO.txt");
    f>>n;
    int x,y;
    while(f>>x>>y){
        u[++m].e1=x;
        u[m].e2=y;
    }
    f.close();
}
int adiacente(int a, int b){
    int i=1;
    for(i=1;i<=n;i++)
        if(u[i].marc==0)
            if(u[i].e1==a && u[i].e2==b || u[i].e1==b && u[i].e2==a)
                return 1;
    return 0;
}
void muchie_ciclu(int a,int b,int c){
    int i;
    for(i=1;i<=m;i++)
        if(u[i].e1==a && u[i].e2==b || u[i].e1==b && u[i].e2==a){
            u[i].marc=c;
            break;
    }
}
void BF(int x){
    int c[101],b,v; // coada
    int i;
    //init coada
    b=v=1;
    c[1]=x;
    viz[x]=1;
    //
    while(b<=v){
        // caut noduri adiacente si nevizitate cu c[v]
        for(i=1;i<=n;i++)
            if(adiacente(c[b],i))
            // adaugare coada
                if(viz[i]==0 ){
                    c[++v]=i;
                    viz[i]=1;
                    muchie_ciclu(c[b],i,1); // traversata
                }
                else muchie_ciclu(c[b],i,2); // inchide ciclu
        //elimin din coada
        b++;
    }
}
int main()
{
    reprezentare();
    int i;
    for(i=1;i<=n;i++)
        if(viz[i]==0)
            BF(i);
    int nr=0;
    for(i=1;i<=m;i++)
        if(u[i].marc==2)
            nr++;
    if(nr) cout<<"graf ciclic";
    else cout<<"graf aciclic";
    cout<<endl;
    cout<<"trebuie eliminate "<<nr<<" muchii pentru a deveni aciclic"<<endl;
    cout<<"muchii care vor fi eliminate :"<<endl;
    for(i=1;i<=m;i++)
        if(u[i].marc==2)
            cout<<u[i].e1<<" "<<u[i].e2<<endl;
    return 0;
}
