//muchii de cost minim- vector de muchii
#include <iostream>
#include <fstream>
using namespace std;
int n,m;
struct muchie {int e1,e2; float cost;};
muchie u[50*49/2+1];
void reprezentare(){
    ifstream f("GNO.in");
    f>>n;
    int x;
    while(f>>x){
        u[++m].e1=x;
        f>>u[m].e2;
        f>>u[m].cost;
    }
    f.close();
}
float CostMinim(){
    int i;
    float Min=u[1].cost;
    for(i=2;i<=m;i++)
        if(u[i].cost<Min) Min=u[i].cost;
    return Min;
}
int main()
{

    reprezentare();
    float M=CostMinim();
    ofstream g("Muchii.txt");
    for(int i=1;i<=m;i++)
        if(u[i].cost==M)
            g<<u[i].e1<<" "<<u[i].e2<<endl;
    g.close();
    cout<<M;
    return 0;
}
