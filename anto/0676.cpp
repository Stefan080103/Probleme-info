#include <iostream>
#include <fstream>
using namespace std;
struct muchie{int e1,e2;};
muchie U[99*100/2+1];
int viz[101],n,m;

void reprezentare(){
    ifstream f("GNO.txt");
    f>>n;
    int x,y;
    while(f>>x>>y){
        U[++m].e1=x;
        U[m].e2=y;
    }
    f.close();
}

int adiacente(int a,int b){
    int i;
    for(i=1;i<=m;i++)
        if(U[i].e1==a && U[i].e2==b || U[i].e1==b && U[i].e2==a)
            return 1;
    return 0;
}

void anulez(int a,int b){
    int i;
    for(i=1;i<=m;i++)
        if(U[i].e1==a && U[i].e2==b || U[i].e1==b && U[i].e2==a)
            U[i].e1=U[i].e2=0;
}

int ciclu;
void DF(int x){
    int i; viz[x]=1;
    for(i=1;i<=n;i++)
        if(adiacente(i,x)==1)
            if(viz[i]==0){
                //anulez muchia
                anulez(i,x);
                DF(i);
            }
            else ciclu=1;
}

int conexitate(){
    int i,s=0;
    for(i=1;i<=n;i++)
        s=s+viz[i];
    return s;
}

int main(){
    reprezentare();
    DF(1);
    if(conexitate()==n)
        if(ciclu==1) cout<<"CICLU";
        else cout<<"ARBORE";
    return 0;
}
