#include <iostream>
#include <fstream>
using namespace std;
int n,m;
struct arc{int e1,e2;};
arc U[100*99+1];
void reprezentare(){
    ifstream f("GO.in");
    f>>n;
    int x,y;
    while(f>>x>>y);
    {
        U[++m].e1=x;
        U[m].e2=y;
    }
    f.close();
}
int de[101],di[101];
void grade(){
    int i;
    for(i=1;i<=m;i++){
        de[U[i].e1]++;
        di[U[i].e2}++;
    }
}
int main()
{
    reprezentare();
    //afisare
    ofstream g("grade.txt")'
    int i;
    for(i=1;i<=m;i++)
        if(de[i]==di) g<<i<<" ";
    g.close();
    return 0;
}
