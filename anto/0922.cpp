// apm - kruskal- vector de muchii
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int n,m;
struct muchie{int e1,e2; float cost;};
muchie U[50*99+1];
void reprezentare(){
    ifstream f("GNO.in");
    f>>n;
    int x;
    while(f>>x){
        U[++m].e1=x;
        f>>U[m].e2;
        f>>U[m].cost;
    }
    f.close();
}
void ordonare(){
    int i,j;
    muchie aux;
    for(i=1;i<m;i++)
        for(j=i+1;j<=m;j++)
            if(U[j].cost<U[i].cost)
                aux=U[j],U[j]=U[i],U[i]=aux;
}
void Kruskal(){
    int a[101],i,k=0,aux,j;
    //initializare- arbori disjuncti
    for(i=1;i<=n;i++) a[i]=i;
    //
    i=1;//pozitie pe vector de muchii
    while(k<n-1){
        if(a[U[i].e1]!=a[U[i].e2]){
            //selectez muchia U[i]-transform costul ei in cost negativ
             U[i].cost=-U[i].cost;
             //actualizez vectorul a
             aux=a[U[i].e2];
             for(j=1;j<=n;j++)
                if(a[j]==aux)
                    a[j]=a[U[i].e1];
             //
             k++;
        }
        i++;
    }
}
void apm(){
    ofstream g("apm.out");
    float s=0;
    int i;
    for(i=1;i<=m;i++)
        if(U[i].cost<0){
            g<<U[i].e1<<" "<<U[i].e2<<endl;
            s=s+U[i].cost;
        }
    s=-s;
    g<<s;
    g.close();
}
int main()
{
    reprezentare();
    ordonare();
    Kruskal();
    apm();
    return 0;
}
