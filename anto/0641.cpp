#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int n, c[101][101],p[101][101];
const int INF=30;
void init(){
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            c[i][j]=INF;
}
void reprezentare(){
    ifstream f("GOC.in");
    f>>n;
    //initializare
    init();
    int x,y,cost;
    while(f>>x>>y>>cost){
        c[x][y]=cost;
        p[x][y]=x;
    }
    f.close();
}
void afisare(int a[][101]){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<setw(2)<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    reprezentare();
    afisare(c);
    afisare(p);
    return 0;
}
