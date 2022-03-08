#include <iostream>
#include <fstream>
using namespace std;
int n,m;
struct muchie{int x,y;};
muchie u[100*99/2+1]; //n<=100
int d[101];
void reprezentare(){
    ifstream f("GNO2.txt");
    f>>n;
    int x,y;
    while(f>>x>>y){
        u[++m].x=x;
        u[m].y=y;
    }
    f.close();
}
void grade(){
    for(int i=1;i<=m;i++){
        d[u[i].x]++;
        d[u[i].y]++;
    }
}
int main()
{
    reprezentare();
    grade();
    ifstream f("sir.txt");
    int aux;
    while(f>>aux)
        if(aux>0 &&aux<=m) cout<<d[aux]<<" ";
    f.close();
    return 0;
}
